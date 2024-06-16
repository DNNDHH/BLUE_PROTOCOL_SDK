#pragma once

 

// Package: TelopStar

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TelopStar.TelopStar_C.ExecuteUbergraph_TelopStar
// 0x0018 (0x0018 - 0x0000)
struct TelopStar_C_ExecuteUbergraph_TelopStar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopStar_C_ExecuteUbergraph_TelopStar) == 0x000008, "Wrong alignment on TelopStar_C_ExecuteUbergraph_TelopStar");
static_assert(sizeof(TelopStar_C_ExecuteUbergraph_TelopStar) == 0x000018, "Wrong size on TelopStar_C_ExecuteUbergraph_TelopStar");
static_assert(offsetof(TelopStar_C_ExecuteUbergraph_TelopStar, EntryPoint) == 0x000000, "Member 'TelopStar_C_ExecuteUbergraph_TelopStar::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopStar_C_ExecuteUbergraph_TelopStar, K2Node_Event_IsDesignTime) == 0x000004, "Member 'TelopStar_C_ExecuteUbergraph_TelopStar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TelopStar_C_ExecuteUbergraph_TelopStar, K2Node_Event_Animation) == 0x000008, "Member 'TelopStar_C_ExecuteUbergraph_TelopStar::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TelopStar_C_ExecuteUbergraph_TelopStar, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'TelopStar_C_ExecuteUbergraph_TelopStar::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function TelopStar.TelopStar_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TelopStar_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopStar_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TelopStar_C_OnAnimationFinished");
static_assert(sizeof(TelopStar_C_OnAnimationFinished) == 0x000008, "Wrong size on TelopStar_C_OnAnimationFinished");
static_assert(offsetof(TelopStar_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TelopStar_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TelopStar.TelopStar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TelopStar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopStar_C_PreConstruct) == 0x000001, "Wrong alignment on TelopStar_C_PreConstruct");
static_assert(sizeof(TelopStar_C_PreConstruct) == 0x000001, "Wrong size on TelopStar_C_PreConstruct");
static_assert(offsetof(TelopStar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TelopStar_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function TelopStar.TelopStar_C.SetActive
// 0x0005 (0x0005 - 0x0000)
struct TelopStar_C_SetActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopStar_C_SetActive) == 0x000001, "Wrong alignment on TelopStar_C_SetActive");
static_assert(sizeof(TelopStar_C_SetActive) == 0x000005, "Wrong size on TelopStar_C_SetActive");
static_assert(offsetof(TelopStar_C_SetActive, IsActive) == 0x000000, "Member 'TelopStar_C_SetActive::IsActive' has a wrong offset!");
static_assert(offsetof(TelopStar_C_SetActive, Temp_bool_Variable) == 0x000001, "Member 'TelopStar_C_SetActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TelopStar_C_SetActive, Temp_byte_Variable) == 0x000002, "Member 'TelopStar_C_SetActive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TelopStar_C_SetActive, Temp_byte_Variable_1) == 0x000003, "Member 'TelopStar_C_SetActive::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TelopStar_C_SetActive, K2Node_Select_Default) == 0x000004, "Member 'TelopStar_C_SetActive::K2Node_Select_Default' has a wrong offset!");

// Function TelopStar.TelopStar_C.PlayAnimIn
// 0x0018 (0x0018 - 0x0000)
struct TelopStar_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopStar_C_PlayAnimIn) == 0x000008, "Wrong alignment on TelopStar_C_PlayAnimIn");
static_assert(sizeof(TelopStar_C_PlayAnimIn) == 0x000018, "Wrong size on TelopStar_C_PlayAnimIn");
static_assert(offsetof(TelopStar_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'TelopStar_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopStar_C_PlayAnimIn, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'TelopStar_C_PlayAnimIn::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopStar_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'TelopStar_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

