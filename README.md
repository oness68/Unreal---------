# Unreal 숫자 야구 게임

난수 생성 로직을 c++라이브러리로 작성 했습니다.
판정 로직을 c++라이브러리로 작성 했습니다.
승리, 무승부, 게임 리셋을 게임모드에서 관리 합니다.
턴 제어 기능을 구현했습니다.

채팅을 치면 반드시 숫자 3개만 들어왔을때만 판정을 계산 합니다.
다른문자는 오류메세지와 함께 3OUT 판정으로 계산됩니다.
중복 숫자 입력도 오류메세지와 함께 3OUT 판정으로 계산됩니다.

3S판정이 나오면 유저 ID 와 함께 승리 메세지가 출력되고 게임을 재시작 합니다.
모든 유저의 카운트가 0이 되면 무승부 메시지가 출력되고 게임을 재시작 합니다.

