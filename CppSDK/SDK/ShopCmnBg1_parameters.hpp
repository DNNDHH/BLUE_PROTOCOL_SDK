#pragma once

 

// Package: ShopCmnBg1

#include "Basic.hpp"

#include "E_ShopCmnBg_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ShopCmnBg1.ShopCmnBg1_C.ExecuteUbergraph_ShopCmnBg1
// 0x0020 (0x0020 - 0x0000)
struct ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B6B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1) == 0x000008, "Wrong alignment on ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1");
static_assert(sizeof(ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1) == 0x000020, "Wrong size on ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1");
static_assert(offsetof(ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1, EntryPoint) == 0x000000, "Member 'ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1, K2Node_Event_IsDesignTime) == 0x000008, "Member 'ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1, CallFunc_K2_SetTimer_ReturnValue) == 0x000010, "Member 'ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000018, "Member 'ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");

// Function ShopCmnBg1.ShopCmnBg1_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ShopCmnBg1_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopCmnBg1_C_PreConstruct) == 0x000001, "Wrong alignment on ShopCmnBg1_C_PreConstruct");
static_assert(sizeof(ShopCmnBg1_C_PreConstruct) == 0x000001, "Wrong size on ShopCmnBg1_C_PreConstruct");
static_assert(offsetof(ShopCmnBg1_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShopCmnBg1_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct ShopCmnBg1_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCmnBg1_C_PlayAnimIn) == 0x000008, "Wrong alignment on ShopCmnBg1_C_PlayAnimIn");
static_assert(sizeof(ShopCmnBg1_C_PlayAnimIn) == 0x000008, "Wrong size on ShopCmnBg1_C_PlayAnimIn");
static_assert(offsetof(ShopCmnBg1_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShopCmnBg1_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimOut
// 0x0008 (0x0008 - 0x0000)
struct ShopCmnBg1_C_PlayAnimOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCmnBg1_C_PlayAnimOut) == 0x000008, "Wrong alignment on ShopCmnBg1_C_PlayAnimOut");
static_assert(sizeof(ShopCmnBg1_C_PlayAnimOut) == 0x000008, "Wrong size on ShopCmnBg1_C_PlayAnimOut");
static_assert(offsetof(ShopCmnBg1_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShopCmnBg1_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct ShopCmnBg1_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopCmnBg1_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on ShopCmnBg1_C_RandomPlayAnimation");
static_assert(sizeof(ShopCmnBg1_C_RandomPlayAnimation) == 0x000018, "Wrong size on ShopCmnBg1_C_RandomPlayAnimation");
static_assert(offsetof(ShopCmnBg1_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'ShopCmnBg1_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ShopCmnBg1_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'ShopCmnBg1_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct ShopCmnBg1_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopCmnBg1_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on ShopCmnBg1_C_RandomPlayAnimation2");
static_assert(sizeof(ShopCmnBg1_C_RandomPlayAnimation2) == 0x000018, "Wrong size on ShopCmnBg1_C_RandomPlayAnimation2");
static_assert(offsetof(ShopCmnBg1_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'ShopCmnBg1_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ShopCmnBg1_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'ShopCmnBg1_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function ShopCmnBg1.ShopCmnBg1_C.Set Shop Type
// 0x0058 (0x0058 - 0x0000)
struct ShopCmnBg1_C_Set_Shop_Type final
{
public:
	E_ShopCmnBg                                   ShopBgType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B6E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(ShopCmnBg1_C_Set_Shop_Type) == 0x000008, "Wrong alignment on ShopCmnBg1_C_Set_Shop_Type");
static_assert(sizeof(ShopCmnBg1_C_Set_Shop_Type) == 0x000058, "Wrong size on ShopCmnBg1_C_Set_Shop_Type");
static_assert(offsetof(ShopCmnBg1_C_Set_Shop_Type, ShopBgType) == 0x000000, "Member 'ShopCmnBg1_C_Set_Shop_Type::ShopBgType' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_Set_Shop_Type, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'ShopCmnBg1_C_Set_Shop_Type::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_Set_Shop_Type, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'ShopCmnBg1_C_Set_Shop_Type::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_Set_Shop_Type, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ShopCmnBg1_C_Set_Shop_Type::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_Set_Shop_Type, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000030, "Member 'ShopCmnBg1_C_Set_Shop_Type::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopCmnBg1_C_Set_Shop_Type, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'ShopCmnBg1_C_Set_Shop_Type::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

