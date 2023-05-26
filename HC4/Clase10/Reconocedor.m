clear;
load("MiRed.mat","net");
[filename,user_canceled] = imgetfile();
if(~user_canceled) 
    img = imread(filename);
    img = imresize(img,[28 28]);
    img = rgb2gray(img);
    img2 = uint8(255) - img;
    imshow(img2);
    pred = classify(net,img2);
    disp(pred);
end
