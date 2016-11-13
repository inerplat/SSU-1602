close all; clear all; clc;
%% Image Load
Load_Img=imread('test1.jpg');
%color=size(Load_Img,3);

%% Image Processing

%Gray_Img=rgb2gray(Load_Img);
global Gray_Img
Gray_Img=Load_Img;
[height width]=size(Gray_Img);
row = 1:height;
col = 1:width;
Gray_Img(row,col);
global img_chk;
for i=1:height
    for j=1:width
        img_chk(i,j)=0;
        for k=1:3
            color_img(i,j,k)=0;
        end
    end
end

k=10;
for i=1:height
    for j=1:width
        if Gray_Img(i,j) == 1
            if img_chk(i,j)==0
                img_chk(i,j)=1;
                back(i,j,k);
                k=k+10;
            end
        end
    end
end
for i=1:10
    for j=1:3
        color(i,j)=randi(255,1,1);
    end
end
color_img=uint8(height*width*3);
for i=1:height
    for j=1:width
        if Gray_Img(i,j) ~= 0
            for k=1:3
                color_img(i,j,k) = color(Gray_Img(i,j)/10,k);
            end
        end
    end
end
for i=1:height
    for j=1:width
       if Load_Img(i,j)==1
           Load_Img(i,j)=255;
       end
    end
end
figure(1)
imshow(Load_Img);
figure(2)
imshow(Gray_Img);
figure(3)
imshow(color_img);
            
% hist_image=histeq(Gray_Img,256);
% 
% level = graythresh(hist_image);
% BW = im2bw(hist_image,level);
% figure(1)
% imshow(BW);
% 

% row = 1:height;
% col = 1:width;
% 
% Gray_Img(row,col);
% hist_image=histeq(Gray_Img,256);
% 
% figure(1)
% imshow(Gray_Img);
% figure(2)
% imhist(Gray_Img);
% figure(3) 
% imshow(hist_image);
% figure(4)
% imhist(hist_image);


% histogram=uint16(255);
% for i=1:255
%     histogram(i)=0;
% end
% 
% for i=1:height
%     for j=1:width
%         tmp=Gray_Img(i,j);
%         if tmp==0 
%             tmp=1;
%         end
%         histogram(tmp)=histogram(tmp)+1;
%     end
% end
% sum=0;
% for i=1:255
%     sum=sum+histogram(i);
%     sum_hist(i)=round(sum*(255/(height*width)));
% end
% Changed_Img=uint8(size(Gray_Img));
% 
% for i=1:height
%     for j=1:width
%         tmp=Gray_Img(i,j);
%         if tmp==0
%             tmp=1;
%         end
%         Changed_Img(i,j)=sum_hist(tmp);
%     end
% end

% for i=1:2:height
%     for j=1:2:width
%         for k=1:3
%             Cutted_Img1((i+1)/2,(j+1)/2,k)=Load_Img(i,j,k);
%         end
%     end
% end
% 
% for i=1:2:height
%     for j=1:2:width
%         for k=1:3
%             Cutted_Img2((i+1)/2,(j+1)/2,k)=Load_Img(i,j,k)/4+Load_Img(i+1,j,k)/4+Load_Img(i,j+1,k)/4+Load_Img(i+1,j+1,k)/4;
%         end
%     end
% end
% 

%% Image Show
%set(0,'DefaultFigureWindowStyle','docked');
