//Original:/proj/frio/dv/testcases/core/c_dsp32mac_pair_a1a0_is/c_dsp32mac_pair_a1a0_is.dsp
// Spec Reference: dsp32mac pair a1a0 IS
# mach: bfin

.include "testutils.inc"
	start

	A1 = A0 = 0;

// The result accumulated in A       , and stored to a reg half
	imm32 r0, 0x63545abd;
	imm32 r1, 0x86bcfec7;
	imm32 r2, 0xa8645679;
	imm32 r3, 0x00860007;
	imm32 r4, 0xefb86569;
	imm32 r5, 0x1235860b;
	imm32 r6, 0x000c086d;
	imm32 r7, 0x678e0086;
	R7 = ( A1 += R4.L * R0.L ),  R6 = ( A0 = R4.L * R0.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R1 = ( A1 = R3.L * R1.L ),  R0 = ( A0 = R3.H * R1.L )  (ISS2);
	P3 = A1.w;
	P4 = A0.w;
	R3 = ( A1 = R7.L * R2.L ),  R2 = ( A0 += R7.H * R2.H )  (ISS2);
	P5 = A1.w;
	SP = A0.w;
	R5 = ( A1 += R5.L * R6.L ),  R4 = ( A0 += R5.L * R6.H )  (ISS2);
	FP = A1.w;
	CHECKREG r0, 0xFFFEB854;
	CHECKREG r1, 0xFFFFEEE2;
	CHECKREG r2, 0xCECAD1AC;
	CHECKREG r3, 0xB509D374;
	CHECKREG r4, 0x8A4CA32E;
	CHECKREG r5, 0x1EC2C250;
	CHECKREG r6, 0x47E3910A;
	CHECKREG r7, 0x47E3910A;
	CHECKREG p1, 0x23F1C885;
	CHECKREG p2, 0x23F1C885;
	CHECKREG p3, 0xFFFFF771;
	CHECKREG p4, 0xFFFF5C2A;
	CHECKREG p5, 0xDA84E9BA;
	CHECKREG sp, 0xE76568D6;
	CHECKREG fp, 0x0F616128;

	imm32 r0, 0x98764abd;
	imm32 r1, 0xa1bcf4c7;
	imm32 r2, 0xa1145649;
	imm32 r3, 0x00010005;
	imm32 r4, 0xefbc1569;
	imm32 r5, 0x1235010b;
	imm32 r6, 0x000c001d;
	imm32 r7, 0x678e0001;
	R5 = ( A1 += R4.L * R0.H ),  R4 = ( A0 = R4.L * R0.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R1 = ( A1 = R2.L * R3.H ),  R0 = ( A0 = R2.H * R3.L )  (ISS2);
	P2 = A0.w;
	P3 = A1.w;
	P4 = A0.w;
	R3 = ( A1 = R7.L * R5.H ),  R2 = ( A0 += R7.H * R5.H )  (ISS2);
	P5 = A1.w;
	SP = A0.w;
	R1 = ( A1 += R6.L * R1.H ),  R0 = ( A0 += R6.L * R1.H )  (ISS2);
	FP = A0.w;
	CHECKREG r0, 0x0ADC2224;
	CHECKREG r1, 0x00001AE2;
	CHECKREG r2, 0x0ADC2224;
	CHECKREG r3, 0x00001AE2;
	CHECKREG r4, 0x0C80510A;
	CHECKREG r5, 0x0D712F1C;
	CHECKREG r6, 0x000C001D;
	CHECKREG r7, 0x678E0001;
	CHECKREG p1, 0x06B8978E;
	CHECKREG p2, 0xFFFE2564;
	CHECKREG p3, 0x00005649;
	CHECKREG p4, 0xFFFE2564;
	CHECKREG p5, 0x00000D71;
	CHECKREG sp, 0x056E1112;
	CHECKREG fp, 0x056E1112;

	imm32 r0, 0x7136459d;
	imm32 r1, 0xabd69ec7;
	imm32 r2, 0x71145679;
	imm32 r3, 0x08010007;
	imm32 r4, 0xef9c1569;
	imm32 r5, 0x1225010b;
	imm32 r6, 0x0003401d;
	imm32 r7, 0x678e0561;
	R5 = ( A1 += R1.H * R0.L ),  R4 = ( A0 = R1.L * R0.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R7 = ( A1 = R6.H * R3.L ),  R6 = ( A0 = R6.H * R3.L )  (ISS2);
	P3 = A1.w;
	P4 = A0.w;
	R1 = ( A1 = R4.H * R5.L ),  R0 = ( A0 += R4.H * R5.H )  (ISS2);
	P5 = A1.w;
	SP = A0.w;
	R5 = ( A1 += R2.H * R7.L ),  R4 = ( A0 += R2.L * R7.H )  (ISS2);
	FP = A0.w;
	CHECKREG r0, 0x12E88AAA;
	CHECKREG r1, 0xE779EB80;
	CHECKREG r2, 0x71145679;
	CHECKREG r3, 0x08010007;
	CHECKREG r4, 0x12E88AAA;
	CHECKREG r5, 0xE79F0610;
	CHECKREG r6, 0x0000002A;
	CHECKREG r7, 0x0000002A;
	CHECKREG p1, 0xE91D1DAF;
	CHECKREG p2, 0xE590030B;
	CHECKREG p3, 0x00000015;
	CHECKREG p5, 0xF3BCF5C0;
	CHECKREG p4, 0x00000015;
	CHECKREG sp, 0x09744555;
	CHECKREG fp, 0x09744555;

	imm32 r0, 0x123489bd;
	imm32 r1, 0x91bcfec7;
	imm32 r2, 0xa9145679;
	imm32 r3, 0xd0910007;
	imm32 r4, 0xedb91569;
	imm32 r5, 0xd235910b;
	imm32 r6, 0x0d0c0999;
	imm32 r7, 0x67de0009;
	R1 = ( A1 += R5.H * R3.H ),  R0 = ( A0 = R5.L * R3.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R3 = ( A1 = R2.H * R1.H ),  R2 = ( A0 = R2.H * R1.L )  (ISS2);
	P3 = A1.w;
	P4 = A0.w;
	R5 = ( A1 = R7.H * R0.H ),  R4 = ( A0 += R7.H * R0.H )  (ISS2);
	P5 = A1.w;
	SP = A0.w;
	R7 = ( A1 += R4.H * R6.H ),  R6 = ( A0 += R4.L * R6.H )  (ISS2);
	FP = A0.w;
	CHECKREG r0, 0xFFF9EE9A;
	CHECKREG r1, 0xF897461A;
	CHECKREG r2, 0xD0654810;
	CHECKREG r3, 0x05083598;
	CHECKREG r4, 0xD05F99EC;
	CHECKREG r5, 0xFFFA51DC;
	CHECKREG r6, 0xC5F8000C;
	CHECKREG r7, 0xFB1F80C4;
	CHECKREG p1, 0xFC4BA30D;
	CHECKREG p2, 0xFFFCF74D;
	CHECKREG p3, 0x02841ACC;
	CHECKREG p4, 0xE832A408;
	CHECKREG p5, 0xFFFD28EE;
	CHECKREG sp, 0xE82FCCF6;
	CHECKREG fp, 0xE2FC0006;

	imm32 r0, 0x63545abd;
	imm32 r1, 0x86bcfec7;
	imm32 r2, 0xa8645679;
	imm32 r3, 0x00860007;
	imm32 r4, 0xefb86569;
	imm32 r5, 0x1235860b;
	imm32 r6, 0x000c086d;
	imm32 r7, 0x678e0086;
	R7 = ( A1 += R1.L * R0.L ) (M),  R6 = ( A0 = R1.L * R0.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R1 = ( A1 = R2.L * R3.L ) (M),  R0 = ( A0 = R2.H * R3.L )  (ISS2);
	P3 = A1.w;
	P4 = A0.w;
	R3 = ( A1 = R7.L * R4.L ) (M),  R2 = ( A0 += R7.H * R4.H )  (ISS2);
	P5 = A1.w;
	SP = A0.w;
	R5 = ( A1 += R6.L * R5.L ) (M),  R4 = ( A0 += R6.L * R5.H )  (ISS2);
	FP = A0.w;
	CHECKREG r0, 0xFFFB3578;
	CHECKREG r1, 0x0004BA9E;
	CHECKREG r2, 0x00B650E8;
	CHECKREG r3, 0xB2D59E54;
	CHECKREG r4, 0x04F4C384;
	CHECKREG r5, 0xD21436B8;
	CHECKREG r6, 0xFF221DD6;
	CHECKREG r7, 0xFA419E9A;
	CHECKREG p1, 0xFD20CF4D;
	CHECKREG p2, 0xFF910EEB;
	CHECKREG p3, 0x00025D4F;
	CHECKREG p4, 0xFFFD9ABC;
	CHECKREG p5, 0xD96ACF2A;
	CHECKREG sp, 0x005B2874;
	CHECKREG fp, 0x027A61C2;

	imm32 r0, 0x98764abd;
	imm32 r1, 0xa1bcf4c7;
	imm32 r2, 0xa1145649;
	imm32 r3, 0x00010005;
	imm32 r4, 0xefbc1569;
	imm32 r5, 0x1235010b;
	imm32 r6, 0x000c001d;
	imm32 r7, 0x678e0001;
	R5 = A1,  R4 = ( A0 = R1.L * R0.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R1 = A1,  R0 = ( A0 = R4.H * R3.L )  (ISS2);
	P3 = A1.w;
	P4 = A0.w;
	R3 = A1,  R2 = ( A0 += R2.H * R5.H )  (ISS2);
	P5 = A1.w;
	SP = A0.w;
	R1 = A1,  R0 = ( A0 += R6.L * R7.H )  (ISS2);
	FP = A1.w;
	CHECKREG r0, 0x22252FC0;
	CHECKREG r1, 0xD21436B8;
	CHECKREG r2, 0x220DB994;
	CHECKREG r3, 0xD21436B8;
	CHECKREG r4, 0xF97279D6;
	CHECKREG r5, 0xD21436B8;
	CHECKREG r6, 0x000C001D;
	CHECKREG r7, 0x678E0001;
	CHECKREG p1, 0xE90A1B5C;
	CHECKREG p2, 0xFCB93CEB;
	CHECKREG p3, 0xE90A1B5C;
	CHECKREG p4, 0xFFFFDF3A;
	CHECKREG p5, 0xE90A1B5C;
	CHECKREG sp, 0x1106DCCA;
	CHECKREG fp, 0xE90A1B5C;

	imm32 r0, 0x7136459d;
	imm32 r1, 0xabd69ec7;
	imm32 r2, 0x71145679;
	imm32 r3, 0x08010007;
	imm32 r4, 0xef9c1569;
	imm32 r5, 0x1225010b;
	imm32 r6, 0x0003401d;
	imm32 r7, 0x678e0561;
	R5 = ( A1 += R1.H * R0.L ) (M),  R4 = ( A0 = R1.L * R0.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R7 = A1,  R6 = ( A0 = R2.H * R3.L )  (ISS2);
	P3 = A1.w;
	P4 = A0.w;
	R1 = ( A1 = R4.H * R5.L ) (M),  R0 = ( A0 += R4.H * R5.H )  (ISS2);
	P5 = A1.w;
	SP = A0.w;
	R5 = A1,  R4 = ( A0 += R6.L * R7.H )  (ISS2);
	FP = A1.w;
	CHECKREG r0, 0x25E6F698;
	CHECKREG r1, 0xDBFA4500;
	CHECKREG r2, 0x71145679;
	CHECKREG r3, 0x08010007;
	CHECKREG r4, 0x042A6938;
	CHECKREG r5, 0xDBFA4500;
	CHECKREG r6, 0x00062F18;
	CHECKREG r7, 0xA44E5734;
	CHECKREG p1, 0xD2272B9A;
	CHECKREG p2, 0xE590030B;
	CHECKREG p3, 0xD2272B9A;
	CHECKREG p4, 0x0003178C;
	CHECKREG p5, 0xEDFD2280;
	CHECKREG sp, 0x12F37B4C;
	CHECKREG fp, 0xEDFD2280;

	imm32 r0, 0x123489bd;
	imm32 r1, 0x91bcfec7;
	imm32 r2, 0xa9145679;
	imm32 r3, 0xd0910007;
	imm32 r4, 0xedb91569;
	imm32 r5, 0xd235910b;
	imm32 r6, 0x0d0c0999;
	imm32 r7, 0x67de0009;
	R1 = A1,  R0 = ( A0 = R5.L * R3.L )  (ISS2);
	P1 = A1.w;
	P2 = A0.w;
	R3 = ( A1 = R2.H * R1.H ) (M),  R2 = ( A0 = R2.H * R1.L )  (ISS2);
	P3 = A1.w;
	P4 = A0.w;
	R5 = ( A1 = R7.H * R0.H ) (M),  R4 = ( A0 += R7.H * R0.H )  (ISS2);
	P5 = A0.w;
	SP = A1.w;
	R7 = A1,  R6 = ( A0 += R4.L * R6.H )  (ISS2);
	FP = A0.w;
	CHECKREG r0, 0xFFF9EE9A;
	CHECKREG r1, 0xDBFA4500;
	CHECKREG r2, 0xD124C800;
	CHECKREG r3, 0x80000000;
	CHECKREG r4, 0xD11F19DC;
	CHECKREG r5, 0x7FFFFFFF;
	CHECKREG r6, 0xD3C1DE7C;
	CHECKREG r7, 0x7FFFFFFF;
	CHECKREG p1, 0xEDFD2280;
	CHECKREG p2, 0xFFFCF74D;
	CHECKREG p3, 0xB54F3988;
	CHECKREG p4, 0xE8926400;
	CHECKREG p5, 0xE88F8CEE;
	CHECKREG sp, 0x67DB28EE;
	CHECKREG fp, 0xE9E0EF3E;

	pass