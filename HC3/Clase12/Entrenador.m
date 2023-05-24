clear;
dataSetPath = uigetdir;
imds = imageDatastore(dataSetPath, 'IncludeSubfolders',true,'LabelSource','foldernames');
[imdsTrain, imdsValidation] = splitEachLabel(imds,0.7,"randomized");
% Resize the images to match the network input layer.
augimdsTrain = augmentedImageDatastore([28 28 1],imdsTrain);
augimdsValidation = augmentedImageDatastore([28 28 1],imdsValidation);
opts = trainingOptions("sgdm",...
    "ExecutionEnvironment","auto",...
    "InitialLearnRate",0.01,...
    "MaxEpochs",5,...
    "Shuffle","every-epoch",...
    "Plots","training-progress",...
    "ValidationData",augimdsValidation);

layers = [
    imageInputLayer([28 28 1],"Name","imageinput")
    convolution2dLayer([3 3],32,"Name","conv","Padding","same")
    batchNormalizationLayer("Name","batchnorm")
    reluLayer("Name","relu")
    fullyConnectedLayer(10,"Name","fc")
    softmaxLayer("Name","softmax")
    classificationLayer("Name","classoutput")];
[net, traininfo] = trainNetwork(augimdsTrain,layers,opts);

save("Mired","net");