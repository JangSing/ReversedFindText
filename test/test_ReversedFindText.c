#include "unity.h"
#include "ReversedFindText.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_ReversedFindText_given_A_find_A_should_return_0(void)
{
	//test if both word and text have only one character
	TEST_ASSERT_EQUAL(0, ReversedFindText("A","A"));
}

void test_ReversedFindText_given_B_find_A_should_return_minus_1(void)
{
	TEST_ASSERT_EQUAL(-1, ReversedFindText("B","A"));
}

void test_ReversedFindText_given__find_A_should_return_minus_1(void)
{
	//test if text is empty
	TEST_ASSERT_EQUAL(-1, ReversedFindText("","A"));	
}

void test_ReversedFindText_given_LALALALA_find_L_should_return_6(void)
{
	//test whether it is looking for the first "L" it saw
	TEST_ASSERT_EQUAL(6 , ReversedFindText("LALALALA","L")); 
}

void test_ReversedFindText_given_WORLD_find_RL_should_return_2(void)
{
	//test for both word and text have more than one char 
	TEST_ASSERT_EQUAL(2 , ReversedFindText("WORLD","RL"));
}

void test_ReversedFindText_given_WORLD_find_ORL_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1 , ReversedFindText("WORLD","ORL"));
}

void test_ReversedFindText_given_WORLD_find_RX_should_return_minus_1(void)
{
	TEST_ASSERT_EQUAL(-1 , ReversedFindText("WORLD","RX"));
}

void test_ReversedFindText_given_WORLD_find_D_should_return_4(void)
{
	//test if the word is at the last char of the text
	TEST_ASSERT_EQUAL(4 , ReversedFindText("WORLD","D"));
}

void test_ReversedFindText_given_WORLD_find_W_should_return_0(void)
{
	//test if the word is at the first char of the text
	TEST_ASSERT_EQUAL(0 , ReversedFindText("WORLD","W"));
}

void test_ReversedFindText_given_WORLD_find_DX_should_return_minus_1(void)
{
	//test whether the NULL of the text is detected
	TEST_ASSERT_EQUAL(-1 , ReversedFindText("WORLD","DX"));
}

void test_ReversedFindText_given_WORLD_find_R_L_should_return_minus_1(void)
{
	//test whether the space has been threaten as a char 
	TEST_ASSERT_EQUAL(-1 , ReversedFindText("WORLD","R L"));
}

void test_ReversedFindText_given_WOR_LD_find_R_L_should_return_2(void)
{
	TEST_ASSERT_EQUAL(2 , ReversedFindText("WOR LD","R L"));
}

void test_ReversedFindText_given_WORLD_find_WORLD_should_return_0(void)
{
	//testing for the whole text
	TEST_ASSERT_EQUAL(0 , ReversedFindText("WORLD","WORLD"));
}

void test_ReversedFindText_given_URATRARATATIRRARAR_find_RARAT_should_return_4(void)
{
	TEST_ASSERT_EQUAL(4 , ReversedFindText("URATRARATATIRRARAR","RARAT"));
}

void test_ReversedFindText_given_RRARARRARATATUI_find_RARAT_should_return_minus_1(void)
{
	TEST_ASSERT_EQUAL(-1 , ReversedFindText("RARARARARARA","RARAT"));
}

void test_ReversedFindText_given_Hello_my_name_is_Alladin_find_lad_should_return_20(void)
{
	//testing it by sentence 
	TEST_ASSERT_EQUAL(20 , ReversedFindText("Hello, my name is Alladin","lad"));
}




