#pragma once

 

// Package: ShopAdventurerRank_Bg

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ShopAdventurerRank_Bg.ShopAdventurerRank_Bg_C.ExecuteUbergraph_ShopAdventurerRank_Bg
// 0x0018 (0x0018 - 0x0000)
struct ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg) == 0x000008, "Wrong alignment on ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg");
static_assert(sizeof(ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg) == 0x000018, "Wrong size on ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg");
static_assert(offsetof(ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg, EntryPoint) == 0x000000, "Member 'ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000010, "Member 'ShopAdventurerRank_Bg_C_ExecuteUbergraph_ShopAdventurerRank_Bg::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");

// Function ShopAdventurerRank_Bg.ShopAdventurerRank_Bg_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct ShopAdventurerRank_Bg_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopAdventurerRank_Bg_C_PlayAnimIn) == 0x000008, "Wrong alignment on ShopAdventurerRank_Bg_C_PlayAnimIn");
static_assert(sizeof(ShopAdventurerRank_Bg_C_PlayAnimIn) == 0x000008, "Wrong size on ShopAdventurerRank_Bg_C_PlayAnimIn");
static_assert(offsetof(ShopAdventurerRank_Bg_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShopAdventurerRank_Bg_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShopAdventurerRank_Bg.ShopAdventurerRank_Bg_C.PlayAnimOut
// 0x0008 (0x0008 - 0x0000)
struct ShopAdventurerRank_Bg_C_PlayAnimOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopAdventurerRank_Bg_C_PlayAnimOut) == 0x000008, "Wrong alignment on ShopAdventurerRank_Bg_C_PlayAnimOut");
static_assert(sizeof(ShopAdventurerRank_Bg_C_PlayAnimOut) == 0x000008, "Wrong size on ShopAdventurerRank_Bg_C_PlayAnimOut");
static_assert(offsetof(ShopAdventurerRank_Bg_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShopAdventurerRank_Bg_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShopAdventurerRank_Bg.ShopAdventurerRank_Bg_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct ShopAdventurerRank_Bg_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6591[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopAdventurerRank_Bg_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on ShopAdventurerRank_Bg_C_RandomPlayAnimation");
static_assert(sizeof(ShopAdventurerRank_Bg_C_RandomPlayAnimation) == 0x000018, "Wrong size on ShopAdventurerRank_Bg_C_RandomPlayAnimation");
static_assert(offsetof(ShopAdventurerRank_Bg_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'ShopAdventurerRank_Bg_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopAdventurerRank_Bg_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ShopAdventurerRank_Bg_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopAdventurerRank_Bg_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'ShopAdventurerRank_Bg_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function ShopAdventurerRank_Bg.ShopAdventurerRank_Bg_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct ShopAdventurerRank_Bg_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6592[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopAdventurerRank_Bg_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on ShopAdventurerRank_Bg_C_RandomPlayAnimation2");
static_assert(sizeof(ShopAdventurerRank_Bg_C_RandomPlayAnimation2) == 0x000018, "Wrong size on ShopAdventurerRank_Bg_C_RandomPlayAnimation2");
static_assert(offsetof(ShopAdventurerRank_Bg_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'ShopAdventurerRank_Bg_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopAdventurerRank_Bg_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ShopAdventurerRank_Bg_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopAdventurerRank_Bg_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'ShopAdventurerRank_Bg_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

