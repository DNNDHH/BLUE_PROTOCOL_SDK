#pragma once

 

// Package: BasicPager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BasicPager.BasicPager_C.OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BasicPager_C_OnPageChange__DelegateSignature final
{
public:
	int32                                         Page;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasicPager_C_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on BasicPager_C_OnPageChange__DelegateSignature");
static_assert(sizeof(BasicPager_C_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on BasicPager_C_OnPageChange__DelegateSignature");
static_assert(offsetof(BasicPager_C_OnPageChange__DelegateSignature, Page) == 0x000000, "Member 'BasicPager_C_OnPageChange__DelegateSignature::Page' has a wrong offset!");

// Function BasicPager.BasicPager_C.ExecuteUbergraph_BasicPager
// 0x0078 (0x0078 - 0x0000)
struct BasicPager_C_ExecuteUbergraph_BasicPager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	int32                                         K2Node_CustomEvent_maxPage;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FC5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0050(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FC6[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_nowPage;                        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasicPager_C_ExecuteUbergraph_BasicPager) == 0x000008, "Wrong alignment on BasicPager_C_ExecuteUbergraph_BasicPager");
static_assert(sizeof(BasicPager_C_ExecuteUbergraph_BasicPager) == 0x000078, "Wrong size on BasicPager_C_ExecuteUbergraph_BasicPager");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, EntryPoint) == 0x000000, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, Temp_int_Variable) == 0x000004, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, Temp_int_Variable_1) == 0x000008, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Clamp_ReturnValue) == 0x000014, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, K2Node_CustomEvent_maxPage) == 0x000030, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::K2Node_CustomEvent_maxPage' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000038, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000050, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Less_IntInt_ReturnValue) == 0x000069, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, K2Node_CustomEvent_nowPage) == 0x00006C, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::K2Node_CustomEvent_nowPage' has a wrong offset!");
static_assert(offsetof(BasicPager_C_ExecuteUbergraph_BasicPager, CallFunc_Clamp_ReturnValue_1) == 0x000070, "Member 'BasicPager_C_ExecuteUbergraph_BasicPager::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");

// Function BasicPager.BasicPager_C.SetNowPage
// 0x0004 (0x0004 - 0x0000)
struct BasicPager_C_SetNowPage final
{
public:
	int32                                         Param_NowPage;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasicPager_C_SetNowPage) == 0x000004, "Wrong alignment on BasicPager_C_SetNowPage");
static_assert(sizeof(BasicPager_C_SetNowPage) == 0x000004, "Wrong size on BasicPager_C_SetNowPage");
static_assert(offsetof(BasicPager_C_SetNowPage, Param_NowPage) == 0x000000, "Member 'BasicPager_C_SetNowPage::Param_NowPage' has a wrong offset!");

// Function BasicPager.BasicPager_C.SetMaxPage
// 0x0004 (0x0004 - 0x0000)
struct BasicPager_C_SetMaxPage final
{
public:
	int32                                         Param_MaxPage;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasicPager_C_SetMaxPage) == 0x000004, "Wrong alignment on BasicPager_C_SetMaxPage");
static_assert(sizeof(BasicPager_C_SetMaxPage) == 0x000004, "Wrong size on BasicPager_C_SetMaxPage");
static_assert(offsetof(BasicPager_C_SetMaxPage, Param_MaxPage) == 0x000000, "Member 'BasicPager_C_SetMaxPage::Param_MaxPage' has a wrong offset!");

}

