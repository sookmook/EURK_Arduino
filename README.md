# < 한글 라이브러리 '어우러기' 아두이노 버전 1.0 >



   제작자 : 숙묵 지영민 ( [sookmook@sookmook.org](mailto:sookmook@sookmook.org) )





![](https://raw.githubusercontent.com/sookmook/EURK_Arduino/master/images/image1.jpg)

## 개요



지난 1991년 6월 어느 새벽…



당시 ‘가람 소프트’라는 소프트웨어 개발 조직에 스카웃 됐던 저는 첫번째 직원 회의 시간에 앞으로의 개발 계획을 발표하는 자리에서 3개월 안에 가장 쓸만한 도스용 한글 입출력 라이브러리를 만들어 보겠다고 호언장담을 했었습니다.

그러자 그 자리에 있던 많은 형들이 그 작업 말고 다른 작업을 하는 것이 어떻겠냐며 모두들 저를 만류하는 분위기였습니다. 그도 그럴것이… 지금은 컴퓨터 상에서 한글을 입출력하는 것이 아무렇지도 않은 일처럼 느껴지지만(사실은 지금도 컴퓨터를 비롯한 기계에 어떤 언어나 문자 체제를 제대로 구현하는 작업은 초보 개발자들에게는 상상을 초월하는 많은 지식과 무지막지한 작업량을 필요로 하고 있지만, 이미 수많은 운영체제나 펌웨어 상에서 거의 구현된 상태라서 사용하기 쉽게 느껴질 뿐입니다.), 그 당시의 열악한 하드웨어와 그 위에서 돌아가는 도스(DOS)라는 운영체제에서 이를 구현하는 일은 무척이나 어려우면서도 상당히 손이 많이 가는 작업이었기 때문입니다. 거기에다 그 당시 제가 C 언어를 공부한 지 5개월도 채 되지 않던 시기라 C 언어 5년 이상의 경력을 가지고 있던 형들로선 걱정이 앞서서 그랬었으리라 생각됩니다.



아무튼 약 3개월 후에 약속대로 도스용 한글 입출력 라이브러리는 그럭저럭 완성돼 갔었습니다. 물론 그 과정에서 제 친한 친구인 [김헌수](https://twitter.com/kim_hunsoo)의 도움이 아주 컸었고, 그 덕분에 GPU와 CPU 명령어의 클럭 수까지 따져가며 최적화된 초고속 화면 출력 코드를 만들 수 있었습니다. ‘어우러기’를 공식적으로 배포하지 않아서 딱히 증명할 방법은 없지만, 그 당시 국내에서 가장 빠른 한글 라이브러리로 만들어졌던 ‘이야기’의 출력 속도보다 그래픽스 카드에 따라 2배 이상의 속도를 보여주기도 했었습니다. 비록 윈도우 운영체제에서 지원하는 그래픽스 함수들 보다는 한참 뒤떨어지기는 했지만 웬만한 도스용 응용 소프트웨어를 만드는 데에 크게 지장이 없을 정도로 다양하고 정교한 그래픽스 함수들을 지원했었고, 그 당시에 시중에 나와 있던 다양한 종류의 그래픽스 칩셋들을 거의 대부분 지원할 수 있도록 드라이버 파일도 여러 가지로 만들었습니다.



그런데, 그렇게 다양한 기능들과 괜찮은 성능을 실제로 구현해 놓고도 많은 사람들이 사용할 수 있도록 ‘어우러기’를 공개적으로 배포하지 않았던 것은 순전히 제 고집 때문이었습니다. 지금도 그런 생각이 좀 남아있지만 그 당시 제 생각에는 한글 라이브러리는 단순히 화면과 키보드를 통한 입출력을 넘어서 자연어 처리도 할 수 있도록 더 다양한 기능들을 제공해야 한다고 믿었던 것입니다. 한 마디로 제 성에 차지 않았던 것이죠. 지금에 와서 생각해보면 그 당시에 전 완벽주의에 빠져서 좀 많이 어리석었던 것 같습니다. (이렇게 글을 쓰고 있는 지금도 그다지 나아진 것은 없는 것 같기는 합니다만… ㅎㅎㅎ) 암튼, 그 개발 모임을 나온 이후로 여러 가지 일을 하다보니 어느 샌가 제 기억 속에서 한글과 자연어 처리 라이브러리는 잊혀져 갔었습니다.



그렇게 세월이 흘러 올해 2018년 4월 초…



저는 제 일행들과 함께 평소 존경해 마다하지 않는 [안윤호 원장님](https://www.facebook.com/yunho.an.5)을 뵙고자 제주도로 여행을 갈 일이 생기게 되었습니다. 안 원장님은 호칭 그대로 진짜 개인병원 원장님이시기도 하지만, 자타가 공인하는 아마추어 해커로 이미 90년도 초에 리눅스 커널을 분석하셨고 그 이후로도 각종 전기전자회로, 아두이노, 오디오, 자동차, 건축, 대체에너지, 그리고 자연농법에 이르기까지 수많은 분야에 관심을 가지고 작업을 하시는 분으로, 특히 마이크로소프트웨어라는 월간지를 통해 국내 최초로 아두이노를 소개하셨던 분이기도 합니다. 한 마디로 덕후 정신이 충만한 한국 메이커계의 대부라고 말씀 드릴 수 있습니다.



그런 안 원장님을 뵈러 가는 것이기에 뭔가 기념이 될 만한 선물이 필요해서 한참을 고민하고 있던 차에 예전에 만들던 한글 입출력 라이브러리 ‘어우러기’가 생각났고, 이를 아두이노 호환 보드에서 구현해 보기로 결심했습니다. 제 생각에 아두이노 보드는 메모리가 많이 모자라서 그렇지 속도 면에서 옛날 IBM-PC/XT/AT 호환 기종 못지 않았기에, 최적화만 잘 하면 충분히 구현 가능할 것 같았습니다.



그.런.데.!!! 하도 오래간만에 한글 처리 프로그래밍을 한 탓인지, 폰트 인덱스 계산을 잘못 하는 바람에 글자가 이상하게 나오는 둥 온갖 우여곡절을 겪은 끝에 겨우 완성할 수 있었습니다.



숫자 키패드를 통한 입력 기능도 추가할까 잠시 고민도 했지만, 그냥 OLED 디스플레이에 출력하는 기능이나 충실하게 만들어 보려고 노력했습니다.



![](https://raw.githubusercontent.com/sookmook/EURK_Arduino/master/images/image1.jpg)

## 먼저 설치해야 하는 라이브러리



아 라이브러리에서는 Adafruit에서 배포한 OLED 디스플레이용 라이브러리인 [Adafruit_GFX](https://github.com/adafruit/Adafruit-GFX-Library)와 [Adafruit_SSD1306](https://github.com/adafruit/Adafruit_SSD1306)를 사용하고 있는데, 간단한 그래픽스 작업을 위한 각종 저수준 힘수들과 SSD1306 칩을 사용하는 OLED 디스플레이를 위한 함수들이 준비돼 있는 라이브러리입니다.

물론, 그러한 함수들까지 포함해서 라이브러리를 만들어서 배포할 수도 있겠지만, 아무래도 지난 몇 년 동안 수많은 사람들에게서 다양한 검증을 거친 라이브러리를 사용하는 것이 확장성이나 안정성 면에서 훨씬 유리하기 때문에 Adafruit의 라이브러리를 사용하게 되었습니다.



그러므로, 먼저 아래의 링크로 접속하셔서 두 가지 라이브러리를 다운 받아 설치하신 다음에 이를 어느 정도 충분히 사용해보실 것을 권합니다.



[https://github.com/adafruit/Adafruit-GFX-Library](https://github.com/adafruit/Adafruit-GFX-Library)

[https://github.com/adafruit/Adafruit_SSD1306](https://github.com/adafruit/Adafruit_SSD1306)



간단하게 다시 설명을 드리자면, 아두이노가 설치된 컴퓨터에서 C:\Users\{각자의 계정 폴더}\Documents\Arduino\libraries 라는 폴더 아래에 위에서 설명한 Adafruit의 OLED 디스플레이 라이브러리 두 가지를 설치한 다음에, 한글 라이브러리도 그 폴더에 같이 설치 해주시면 됩니다. 참 쉽죠? ㅋ



## 사용 방법



한글 라이브러리 ‘어우러기’의 사용 방법은 정말 간단합니다. 라이브러리에 포함된 예제 소스를 자세히 분석해 보시면 아시겠지만, Adafruit의 라이브러리를 사용해서 OLED 디스플레이를 초기화 시킨 이후에 적절한 함수를 호출해 좌표를 지정하거나 한글이 포함된 문자열을 출력하시면 됩니다. 이때 문자열에는 한글, 영문, 숫자, 그리고 1바이트 기호들을 포함할 수 있지만, 한자나 2바이트 특수 기호는 사용하실 수 없습니다. 이것은 아두이노 계열 보드의 메모리 용량 때문에 어쩔 수 없는 상황이므로 이해해 주시기 바랍니다.



물론, 각각의 라이브러리에서 사용하는 헤더 파일을 소스 코드에 먼저 인클루딩하는 작업을 잊으시면 안 되겠죠?



## 함수 설명



한글 라이브러리 ‘어우러기’에서 제공하는 함수들은 모두 4개가 있으며, 기본적으로 리턴값이 없는 함수들이기 때문에 인자를 적절히 넣어서 그냥 호출하시면 됩니다.

원형 : void EURK_hancode(int kind) ;
인자 : kind - 한글 코드 종류를 나타내는 상수로 아래와 같다.
         HANCODE_UTF_8 : UTF-8 문자 코드
                         (한글 한 문자의 크기는 3바이트)
         HANCODE_EXTENED_KSC : 2바이트 완성형 한글 코드
                               (EUC-KR 코드)
설명 : OLED 디스플레이 화면으로 출력할 한글의 문자 코드를 지정합니다.
      아두이노가 설치되고 실행되는 환경에 따라 다른 문자 코드를 사용할 수
      있습니다. 혹시 화면에 출력되는 한글이 깨져서 나온다면 이 함수를
      사용해서 문자 코드를 바꿔 보십시오.
      기본값은 HANCODE_UTF_8 입니다.

원형 : void EURK_setxy(int x, int y) ;  
인자 : x - 출력할 문자(혹은 문자열)의 x 좌표
       y - 출력할 문자(혹은 문자열)의 y 좌표
설명 : 출력할 문자(혹은 문자열)의 좌표를 지정해주는 함수입니다.
      이렇게 지정된 좌표는 문자가 출력될 때마다 자동적으로 다음 문자의
      위치로 바뀝니다.
      OLED 디스플레이의 종류에 따라 사용할 수 있는 좌표의 범위가
      제한되며, 기본값은 (0, 0) 입니다.

원형 : void EURK_puts(char *s) ;  
인자 : s - 화면에 출력할 문자열
설명 : 문자열 s의 내용을 화면에 출력하는 함수입니다.
      문자열은 큰따옴표(“)로 둘러 쌓인 하나 이상의 문자 집합을
      의미합니다.

원형 : void EURK_putsxy(int x, int y, char *s) ;  
인자 : x - 출력할 문자(혹은 문자열)의 x 좌표
       y - 출력할 문자(혹은 문자열)의 y 좌표
       s - 화면에 출력할 문자열
설명 : 위에서 설명한 함수 2개가 결합된 형태로, x와 y 좌표로 지정하는
      위치에 문자열 s의 내용을 출력하는 함수입니다.



## 폰트 변경



라이브러리의 하위 폴더인 FONTS 에는 [김윤수](https://www.facebook.com/piscesen)님이 오랜 시간에 걸쳐 열심히 수집하거나 직접 만들어서 지난 1994년 7월에 발표한 비트맵 폰트 모음이 들어있습니다. 폰트들에 관한 자세한 설명은 FONTS.txt 파일을 참조하시기 바랍니다.



한글 라이브러리 ‘어우러기’에서는 이 폰트들 중에서 한글 폰트와 영문(아스키) 폰트를 각각 하나씩 골라 소스 파일로 바꾸어, 최종적으로 아두이노 계열 보드의 플래시 메모리에 저장해 라이브러리에서 이용하고 있습니다.

이를 위해서 FontConvert.exe 라는 폰트 변환 유틸리티와 그 소스 파일을 제공하는데, 사용 방법은 윈도 커맨드 라인 모드에서 아래와 같이 입력하시면 됩니다.



FontConvert.exe [font_file1 [font_file2]]



여기서 대괄호(혹은 사각 괄호)는 생략 가능함을 나타냅니다.

각 폰트 파일은 확장자까지 포함해서 정확하게 입력해야 합니다.

폰트 변환 유틸리티는 입력 받은 폰트 파일의 크기를 검사해 한글 폰트나 영문(아스키) 폰트로 인식 후에 알맞은 소스 파일로 변환합니다.



그렇게 변환된 소스 파일은 라이브러리 소스 파일들이 들어 있는 폴더에 Hangeul_Font.h 또는 ASCII_Font.h 라는 이름으로 저장되고, 아두이노 응용 프로그램의 컴파일을 통해 플래시 메모리에 저장됩니다.



참고로, 이 라이브러리를 만들면서 기본적으로 지정한 폰트는 아래와 같으며, 위에서 설명한 것처럼 폰트 변환 유틸리티를 사용해 기본 폰트를 새로 지정할 수 있습니다.



한글 폰트 : HANDGO.HAN (둥근고딕체)

영문(아스키) 폰트 : IYGGGO.ENG (이야기 굵은고딕)



## 저작권



한글 라이브러리 ‘어우러기’의 저작권은 기본적으로 GPL 3.0 라이선스를 따릅니다.

그러므로, 개인적인 용도나 교육을 위한 활용은 얼마든지 가능합니다.

하지만 만약에 버그 수정이나 기능 추가 등을 위해 소스를 수정해 배포하시거나, 상업적인 용도로 사용하시고 싶을 때에는 반드시 사전에 제작자에게 연락을 취해 의논해 주시기를 부탁 드립니다.



## 끝내면서



비록 개인적인(그러면서도 역사적인) 만남을 기념하기 위해 오랜만에 만들어 본 라이브러리였지만, 만들면서 세종대왕과 그의 자녀들, 그리고 집현전 학자들의 빛나는 창의성과 노력에 깊은 감명을 받았습니다. 우리네 조상님들은 어떻게 이런 독창적인 문자 체계를 비교적 짧은 시간 안에 만들어낼 수 있었을까요? 한글의 독창성은 연구하면 할수록 그때마다 정말로 놀라움을 금할 수 없습니다.



더불어 80년대가 아닌 현 시점에서 조합형 한글 코드 체계와 완성형 한글 코드 체계 중에서 어느 것을 사용하는 것이 기술적으로 더 유리한가에 대해서 잠시 고민해볼 수 있는 시간을 가졌습니다. 예전에도 그랬지만, 한글 코드와 관련된 문제를 다룸에 있어서 감성적이고 문화적인 측면으로 접근하는 것도 중요하지만, 실제로 기술에 적용할 때에 연산 처리 속도 최적화와 메모리 용량 최적화 등의 문제를 생각해봐야 하는 것은 너무나도 당연합니다.

그런 점에서 따져 본다면, 현재의 하드웨어 상황에서는 완성형 한글 코드 체계를 사용하는 것이 적어도 한글의 출력에 있어서만큼은 더 유리하지 않을까 하고 생각해 봅니다. 물론, 지금이나 앞으로도 한글의 입력이나 자연어 처리 등의 기반이 되는 기술들을 생각해 본다면, 저의 입장은 당연히 지금도 조합형 한글 코드 체계를 지지할 수밖에 없습니다.



어쨌거나 저쨌거나, 이번에 발표하는 한글 라이브러리 ‘어우러기’ 아두이노 버전 1.0으로 인해 개발자들이 한글을 출력하는 데에 있어서 더 이상 스트레스를 받지 않고 재미난 연구들을 많이 할 수 있었으면 좋겠고, 그로 인해 세상에 재미난 장난감(작품)들이 많이 나올 수 있기를 기대해 봅니다.
