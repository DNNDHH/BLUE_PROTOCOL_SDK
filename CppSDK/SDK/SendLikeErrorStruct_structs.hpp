#pragma once

 

// Package: SendLikeErrorStruct

#include "Basic.hpp"

#include "ESendLikeError_structs.hpp"


namespace SDK
{

// UserDefinedStruct SendLikeErrorStruct.SendLikeErrorStruct
// 0x0010 (0x0010 - 0x0000)
struct FSendLikeErrorStruct final
{
public:
	int32                                         ErrorNum_2_FE24F822477B4618AD754EB3B316E19A;       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ErrorText_6_10D5901F4C3B44EC0568CC960EAC04BC;      // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESendLikeError                                ErrorAfter_10_E3D360464431073742E1FFB731DFA5B6;    // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSendLikeErrorStruct) == 0x000004, "Wrong alignment on FSendLikeErrorStruct");
static_assert(sizeof(FSendLikeErrorStruct) == 0x000010, "Wrong size on FSendLikeErrorStruct");
static_assert(offsetof(FSendLikeErrorStruct, ErrorNum_2_FE24F822477B4618AD754EB3B316E19A) == 0x000000, "Member 'FSendLikeErrorStruct::ErrorNum_2_FE24F822477B4618AD754EB3B316E19A' has a wrong offset!");
static_assert(offsetof(FSendLikeErrorStruct, ErrorText_6_10D5901F4C3B44EC0568CC960EAC04BC) == 0x000004, "Member 'FSendLikeErrorStruct::ErrorText_6_10D5901F4C3B44EC0568CC960EAC04BC' has a wrong offset!");
static_assert(offsetof(FSendLikeErrorStruct, ErrorAfter_10_E3D360464431073742E1FFB731DFA5B6) == 0x00000C, "Member 'FSendLikeErrorStruct::ErrorAfter_10_E3D360464431073742E1FFB731DFA5B6' has a wrong offset!");

}

