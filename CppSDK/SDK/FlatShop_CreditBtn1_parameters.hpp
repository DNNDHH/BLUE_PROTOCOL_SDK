#pragma once

 

// Package: FlatShop_CreditBtn1

#include "Basic.hpp"


namespace SDK::Params
{

// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.ExecuteUbergraph_FlatShop_CreditBtn1
// 0x0060 (0x0060 - 0x0000)
struct FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9493[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9494[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1) == 0x000008, "Wrong alignment on FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1");
static_assert(sizeof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1) == 0x000060, "Wrong size on FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, EntryPoint) == 0x000000, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::EntryPoint' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, Temp_bool_Variable) == 0x000004, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, K2Node_Event_IsDesignTime) == 0x000005, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000028, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, K2Node_Select_Default) == 0x000030, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_CreditBtn1_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_CreditBtn1_C_PreConstruct) == 0x000001, "Wrong alignment on FlatShop_CreditBtn1_C_PreConstruct");
static_assert(sizeof(FlatShop_CreditBtn1_C_PreConstruct) == 0x000001, "Wrong size on FlatShop_CreditBtn1_C_PreConstruct");
static_assert(offsetof(FlatShop_CreditBtn1_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FlatShop_CreditBtn1_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.PlayFlashing
// 0x0010 (0x0010 - 0x0000)
struct FlatShop_CreditBtn1_C_PlayFlashing final
{
public:
	bool                                          IsPlay;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9495[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_CreditBtn1_C_PlayFlashing) == 0x000008, "Wrong alignment on FlatShop_CreditBtn1_C_PlayFlashing");
static_assert(sizeof(FlatShop_CreditBtn1_C_PlayFlashing) == 0x000010, "Wrong size on FlatShop_CreditBtn1_C_PlayFlashing");
static_assert(offsetof(FlatShop_CreditBtn1_C_PlayFlashing, IsPlay) == 0x000000, "Member 'FlatShop_CreditBtn1_C_PlayFlashing::IsPlay' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditBtn1_C_PlayFlashing, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FlatShop_CreditBtn1_C_PlayFlashing::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

