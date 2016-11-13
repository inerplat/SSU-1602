close all; clear all; clc;
Load_Img=imread('Å×½ºÆ®2.jpg');
Gray_Img=rgb2gray(Load_Img);
hist_image=histeq(Gray_Img,256);
 [height width]=size(Gray_Img);
 level = graythresh(hist_image);
 BW = im2bw(hist_image,level);

 
 row = 1:height;
 col = 1:width;
 
 Gray_Img(row,col);
 hist_image=histeq(Gray_Img,256);
 
 figure(1)
 imshow(Gray_Img);
 figure(2)
 imhist(Gray_Img);
 figure(3) 
 imshow(hist_image);
 figure(4)
 imhist(hist_image);
 figure(5)
 imshow(Load_Img);
