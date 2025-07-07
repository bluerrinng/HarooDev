# 폴더 단위 컴파일 혹은 단일 파일 단위 컴파일 설정

Extensions -> CodeRunner -> Settings -> Executor Map 확인 -> settings.json 아래와 같이 편집: 

단일 컴파일을 하기 위해서는 
"cpp": "cd $dir && g++ -std=c++17 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",

폴더 단위 컴파일을 하기 위해서는 
"cpp": "cd $dir && g++ -std=c++17 *.cpp -o $fileNameWithoutExt && $dir$fileNameWithoutExt",