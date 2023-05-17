% Crea el detector de rostros
faceDetector = vision.CascadeObjectDetector();
% Crea el objeto de la webcam 
cam = webcam();
% Captura un frame de la camara y obtiene su tamanio
videoFrame = snapshot(cam); 
videoFrame = imresize(videoFrame, 0.5); 
frameSize = size(videoFrame);
% Crea el video player
videoPlayer = vision.VideoPlayer('Position', [100 100 [frameSize(2), frameSize(1)]+30]);
runLoop = true; 
while runLoop
% Obtiene un frame de la camara 
videoFrame = snapshot(cam);
% Convertimos a escala de grises 
videoFrameGray = rgb2gray(videoFrame); % Detectamos rostros
bbox = faceDetector.step(videoFrameGray);
% Dibujamos el boundingbox
videoFrame = insertShape(videoFrame, 'rectangle', bbox);
% Mostramos la imagen 
step(videoPlayer, videoFrame);
% Verificamos si la ventana del video player sigue abierta
runLoop = isOpen(videoPlayer); 
end
% Limpiamos
clear cam; 
release(videoPlayer); 
release(faceDetector);