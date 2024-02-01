
int QualityPoints(unsigned int average){
	 if (average >= 90 && average <= 100){
		 return 4;
	 }
	 else if (average >= 80 && average <= 89){
		 return 3;
	 }
	 else if (average >= 70 && average <= 79){
		 return 2;
	 }
	 else if (average >= 60 && average <= 69){
		 return 1;
	 }
	 else if (average <= 60){
		 return 0;
	 }else return 111;
}