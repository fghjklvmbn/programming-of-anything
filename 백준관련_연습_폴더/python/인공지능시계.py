# 문제: 인공지능 시계
time = input()
second = int(input())

# t = 첫번째줄 시간, second


# 인풋으로 들어온 시간을 시간과 분으로 나누어 저장
t_h, t_m, t_s = map(int, time.split())

# 시
r_h = t_h + second // 3600

# 분
r_m = t_m + (second % 3600) // 60

# 초
r_s = t_s + second % 60


if r_s >= 60:
        r_m += 1
        r_s -= 60

if r_m >= 60:
    r_h += 1
    r_m -= 60
    if r_h >= 24:
        r_h == 0 

print(r_h, r_m, r_s)


# if ( h <= 23 && h >= 1 && m+c <= 59) {
#         if (h >= 24 || m+c >= 60){
#         h = 0;
#         h = h + (m+c) / 60;
#         m = (m+c) % 60;
#         } 
#         m += c;
#     } else if( h <= 23 && h >= 1 && m+c >= 60) {
#         m = m+c;
#         h = h + (m / 60);
#         if (h >= 24){h = h - 24;}
#         if (h==23 && m+c < 60){
#             m = m + c;
#             if (m+c >60)
#             {
#                 h = 0;
#                 h += (m + c / 60);
#                 if (h >= 24){h = h - 24;}
#                 m = (m + c) % 60;
#             }
#         }
# 	    m = m % 60; 
#     } else if ( h == 24 && m+c < 60){
#         h = 0;
#         if (h >= 24){h = h - 24;}
#         h += (m+c) / 60;
#         m = (m + c) % 60;
#     } else if ( h == 23 && m+c >= 60) {
# 	    h++;
#         if (h==24) {
#             h = 0;
#             h = (m+c) / 60;
#         }
#         m = (m + c) % 60;
#     } else if (h==0 || m+c < 60){
#         h = h + (m+c)/60;
#         m = (m + c) % 60; 
#     }
#     else if (h==0 || m+c >= 60){
#         h = h + (m+c)/60;
#         m = (m + c) % 60; 
#     }