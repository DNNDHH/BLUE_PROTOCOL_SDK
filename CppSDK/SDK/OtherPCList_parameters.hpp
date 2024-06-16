#pragma once

 

// Package: OtherPCList

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function OtherPCList.OtherPCList_C.ExecuteUbergraph_OtherPCList
// 0x00D8 (0x00D8 - 0x0000)
struct OtherPCList_C_ExecuteUbergraph_OtherPCList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E88[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOtherPCMenu_C*                         CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E89[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRootVisibility_OutVisible;              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E8A[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0058(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0080(0x0028)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_ComponentBoundEvent_PlayerState;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_CharacterId;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E8B[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCList_C_ExecuteUbergraph_OtherPCList) == 0x000008, "Wrong alignment on OtherPCList_C_ExecuteUbergraph_OtherPCList");
static_assert(sizeof(OtherPCList_C_ExecuteUbergraph_OtherPCList) == 0x0000D8, "Wrong size on OtherPCList_C_ExecuteUbergraph_OtherPCList");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, EntryPoint) == 0x000000, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::EntryPoint' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_Create_ReturnValue) == 0x000018, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_MakeLiteralName_ReturnValue) == 0x000030, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, K2Node_Event_Animation) == 0x000038, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000050, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000051, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x000052, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_EqualEqual_ObjectObject_ReturnValue_4) == 0x000053, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_EqualEqual_ObjectObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_IsVisible_ReturnValue) == 0x000054, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_IsRootVisibility_OutVisible) == 0x000055, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_IsRootVisibility_OutVisible' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, K2Node_MakeStruct_SlateColor) == 0x000058, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, K2Node_MakeStruct_SlateColor_1) == 0x000080, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_MakeLiteralName_ReturnValue_1) == 0x0000A8, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, K2Node_ComponentBoundEvent_PlayerState) == 0x0000B0, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::K2Node_ComponentBoundEvent_PlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, K2Node_ComponentBoundEvent_CharacterId) == 0x0000B8, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::K2Node_ComponentBoundEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C4, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x0000D4, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000D5, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ExecuteUbergraph_OtherPCList, CallFunc_BooleanOR_ReturnValue) == 0x0000D6, "Member 'OtherPCList_C_ExecuteUbergraph_OtherPCList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature final
{
public:
	class ASBPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharacterId;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature) == 0x000008, "Wrong alignment on OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature");
static_assert(sizeof(OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature) == 0x000010, "Wrong size on OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature");
static_assert(offsetof(OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature, PlayerState) == 0x000000, "Member 'OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature::PlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature, CharacterId) == 0x000008, "Member 'OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature::CharacterId' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct OtherPCList_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCList_C_OnAnimationFinished) == 0x000008, "Wrong alignment on OtherPCList_C_OnAnimationFinished");
static_assert(sizeof(OtherPCList_C_OnAnimationFinished) == 0x000008, "Wrong size on OtherPCList_C_OnAnimationFinished");
static_assert(offsetof(OtherPCList_C_OnAnimationFinished, Animation) == 0x000000, "Member 'OtherPCList_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.SetRootVisibility
// 0x0001 (0x0001 - 0x0000)
struct OtherPCList_C_SetRootVisibility final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCList_C_SetRootVisibility) == 0x000001, "Wrong alignment on OtherPCList_C_SetRootVisibility");
static_assert(sizeof(OtherPCList_C_SetRootVisibility) == 0x000001, "Wrong size on OtherPCList_C_SetRootVisibility");
static_assert(offsetof(OtherPCList_C_SetRootVisibility, InVisible) == 0x000000, "Member 'OtherPCList_C_SetRootVisibility::InVisible' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.IsRootVisibility
// 0x0002 (0x0002 - 0x0000)
struct OtherPCList_C_IsRootVisibility final
{
public:
	bool                                          OutVisible;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCList_C_IsRootVisibility) == 0x000001, "Wrong alignment on OtherPCList_C_IsRootVisibility");
static_assert(sizeof(OtherPCList_C_IsRootVisibility) == 0x000002, "Wrong size on OtherPCList_C_IsRootVisibility");
static_assert(offsetof(OtherPCList_C_IsRootVisibility, OutVisible) == 0x000000, "Member 'OtherPCList_C_IsRootVisibility::OutVisible' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_IsRootVisibility, CallFunc_IsVisible_ReturnValue) == 0x000001, "Member 'OtherPCList_C_IsRootVisibility::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.Anime_Tab
// 0x0030 (0x0030 - 0x0000)
struct OtherPCList_C_Anime_Tab final
{
public:
	class UWidgetAnimation*                       Anim;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E8C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCList_C_Anime_Tab) == 0x000008, "Wrong alignment on OtherPCList_C_Anime_Tab");
static_assert(sizeof(OtherPCList_C_Anime_Tab) == 0x000030, "Wrong size on OtherPCList_C_Anime_Tab");
static_assert(offsetof(OtherPCList_C_Anime_Tab, Anim) == 0x000000, "Member 'OtherPCList_C_Anime_Tab::Anim' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'OtherPCList_C_Anime_Tab::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab, CallFunc_PlaySE_ReturnValue_1) == 0x00000C, "Member 'OtherPCList_C_Anime_Tab::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab, CallFunc_PlaySE_ReturnValue_2) == 0x000010, "Member 'OtherPCList_C_Anime_Tab::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000018, "Member 'OtherPCList_C_Anime_Tab::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'OtherPCList_C_Anime_Tab::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000028, "Member 'OtherPCList_C_Anime_Tab::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.Anime_Tab_List
// 0x0020 (0x0020 - 0x0000)
struct OtherPCList_C_Anime_Tab_List final
{
public:
	class UWidgetAnimation*                       Anim;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCList_C_Anime_Tab_List) == 0x000008, "Wrong alignment on OtherPCList_C_Anime_Tab_List");
static_assert(sizeof(OtherPCList_C_Anime_Tab_List) == 0x000020, "Wrong size on OtherPCList_C_Anime_Tab_List");
static_assert(offsetof(OtherPCList_C_Anime_Tab_List, Anim) == 0x000000, "Member 'OtherPCList_C_Anime_Tab_List::Anim' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_List, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'OtherPCList_C_Anime_Tab_List::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_List, CallFunc_PlaySE_ReturnValue_1) == 0x00000C, "Member 'OtherPCList_C_Anime_Tab_List::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_List, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'OtherPCList_C_Anime_Tab_List::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_List, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'OtherPCList_C_Anime_Tab_List::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.Anime_AllOpen
// 0x0020 (0x0020 - 0x0000)
struct OtherPCList_C_Anime_AllOpen final
{
public:
	class UWidgetAnimation*                       Anim;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCList_C_Anime_AllOpen) == 0x000008, "Wrong alignment on OtherPCList_C_Anime_AllOpen");
static_assert(sizeof(OtherPCList_C_Anime_AllOpen) == 0x000020, "Wrong size on OtherPCList_C_Anime_AllOpen");
static_assert(offsetof(OtherPCList_C_Anime_AllOpen, Anim) == 0x000000, "Member 'OtherPCList_C_Anime_AllOpen::Anim' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_AllOpen, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'OtherPCList_C_Anime_AllOpen::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_AllOpen, CallFunc_PlaySE_ReturnValue_1) == 0x00000C, "Member 'OtherPCList_C_Anime_AllOpen::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_AllOpen, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'OtherPCList_C_Anime_AllOpen::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_AllOpen, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'OtherPCList_C_Anime_AllOpen::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.Anime_Tab_Menu
// 0x0020 (0x0020 - 0x0000)
struct OtherPCList_C_Anime_Tab_Menu final
{
public:
	class UWidgetAnimation*                       Anim;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCList_C_Anime_Tab_Menu) == 0x000008, "Wrong alignment on OtherPCList_C_Anime_Tab_Menu");
static_assert(sizeof(OtherPCList_C_Anime_Tab_Menu) == 0x000020, "Wrong size on OtherPCList_C_Anime_Tab_Menu");
static_assert(offsetof(OtherPCList_C_Anime_Tab_Menu, Anim) == 0x000000, "Member 'OtherPCList_C_Anime_Tab_Menu::Anim' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_Menu, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'OtherPCList_C_Anime_Tab_Menu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_Menu, CallFunc_PlaySE_ReturnValue_1) == 0x00000C, "Member 'OtherPCList_C_Anime_Tab_Menu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_Menu, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'OtherPCList_C_Anime_Tab_Menu::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_Anime_Tab_Menu, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000018, "Member 'OtherPCList_C_Anime_Tab_Menu::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.AllClose
// 0x0010 (0x0010 - 0x0000)
struct OtherPCList_C_AllClose final
{
public:
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E8D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCList_C_AllClose) == 0x000008, "Wrong alignment on OtherPCList_C_AllClose");
static_assert(sizeof(OtherPCList_C_AllClose) == 0x000010, "Wrong size on OtherPCList_C_AllClose");
static_assert(offsetof(OtherPCList_C_AllClose, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000000, "Member 'OtherPCList_C_AllClose::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_AllClose, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'OtherPCList_C_AllClose::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_AllClose, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'OtherPCList_C_AllClose::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.UpdateTabKey
// 0x0168 (0x0168 - 0x0000)
struct OtherPCList_C_UpdateTabKey final
{
public:
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0000(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x0018(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0110(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0138(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E8E[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCList_C_UpdateTabKey) == 0x000008, "Wrong alignment on OtherPCList_C_UpdateTabKey");
static_assert(sizeof(OtherPCList_C_UpdateTabKey) == 0x000168, "Wrong size on OtherPCList_C_UpdateTabKey");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000000, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_GamepadKeyToKey_ReturnValue) == 0x000018, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000030, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x000040, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'OtherPCList_C_UpdateTabKey::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'OtherPCList_C_UpdateTabKey::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, K2Node_MakeArray_Array) == 0x000100, "Member 'OtherPCList_C_UpdateTabKey::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, K2Node_MakeArray_Array_1) == 0x000110, "Member 'OtherPCList_C_UpdateTabKey::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_Format_ReturnValue) == 0x000120, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_Format_ReturnValue_1) == 0x000138, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_GetConfigSaveManager_IsValid) == 0x000150, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000158, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, CallFunc_GetOperateMode_ReturnValue) == 0x000160, "Member 'OtherPCList_C_UpdateTabKey::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateTabKey, K2Node_SwitchEnum_CmpSuccess) == 0x000161, "Member 'OtherPCList_C_UpdateTabKey::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.UpdateMouseCursorIcon
// 0x0028 (0x0028 - 0x0000)
struct OtherPCList_C_UpdateMouseCursorIcon final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCList_C_UpdateMouseCursorIcon) == 0x000008, "Wrong alignment on OtherPCList_C_UpdateMouseCursorIcon");
static_assert(sizeof(OtherPCList_C_UpdateMouseCursorIcon) == 0x000028, "Wrong size on OtherPCList_C_UpdateMouseCursorIcon");
static_assert(offsetof(OtherPCList_C_UpdateMouseCursorIcon, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'OtherPCList_C_UpdateMouseCursorIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateMouseCursorIcon, CallFunc_GetHUD_ReturnValue) == 0x000008, "Member 'OtherPCList_C_UpdateMouseCursorIcon::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateMouseCursorIcon, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000010, "Member 'OtherPCList_C_UpdateMouseCursorIcon::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_UpdateMouseCursorIcon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'OtherPCList_C_UpdateMouseCursorIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.OpenCursorModeToOtherPCMenu
// 0x0010 (0x0010 - 0x0000)
struct OtherPCList_C_OpenCursorModeToOtherPCMenu final
{
public:
	class ASBPlayerCharacter*                     InOtherPC;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bListUpdate;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCList_C_OpenCursorModeToOtherPCMenu) == 0x000008, "Wrong alignment on OtherPCList_C_OpenCursorModeToOtherPCMenu");
static_assert(sizeof(OtherPCList_C_OpenCursorModeToOtherPCMenu) == 0x000010, "Wrong size on OtherPCList_C_OpenCursorModeToOtherPCMenu");
static_assert(offsetof(OtherPCList_C_OpenCursorModeToOtherPCMenu, InOtherPC) == 0x000000, "Member 'OtherPCList_C_OpenCursorModeToOtherPCMenu::InOtherPC' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_OpenCursorModeToOtherPCMenu, bListUpdate) == 0x000008, "Member 'OtherPCList_C_OpenCursorModeToOtherPCMenu::bListUpdate' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_OpenCursorModeToOtherPCMenu, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'OtherPCList_C_OpenCursorModeToOtherPCMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function OtherPCList.OtherPCList_C.ClearPCMenu
// 0x0048 (0x0048 - 0x0000)
struct OtherPCList_C_ClearPCMenu final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E8F[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E90[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UOtherPCMenu_C*                         K2Node_DynamicCast_AsOther_PCMenu;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCList_C_ClearPCMenu) == 0x000008, "Wrong alignment on OtherPCList_C_ClearPCMenu");
static_assert(sizeof(OtherPCList_C_ClearPCMenu) == 0x000048, "Wrong size on OtherPCList_C_ClearPCMenu");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'OtherPCList_C_ClearPCMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'OtherPCList_C_ClearPCMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x000020, "Member 'OtherPCList_C_ClearPCMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'OtherPCList_C_ClearPCMenu::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'OtherPCList_C_ClearPCMenu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'OtherPCList_C_ClearPCMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, K2Node_DynamicCast_AsOther_PCMenu) == 0x000038, "Member 'OtherPCList_C_ClearPCMenu::K2Node_DynamicCast_AsOther_PCMenu' has a wrong offset!");
static_assert(offsetof(OtherPCList_C_ClearPCMenu, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'OtherPCList_C_ClearPCMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

