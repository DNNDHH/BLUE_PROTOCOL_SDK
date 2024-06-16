#pragma once

 

// Package: EmotionMenu_Item

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_Item_C_OnSelect__DelegateSignature final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_Item_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_OnSelect__DelegateSignature");
static_assert(sizeof(EmotionMenu_Item_C_OnSelect__DelegateSignature) == 0x000008, "Wrong size on EmotionMenu_Item_C_OnSelect__DelegateSignature");
static_assert(offsetof(EmotionMenu_Item_C_OnSelect__DelegateSignature, InSelectedItem) == 0x000000, "Member 'EmotionMenu_Item_C_OnSelect__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelectRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_Item_C_OnSelectRight__DelegateSignature final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_Item_C_OnSelectRight__DelegateSignature) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_OnSelectRight__DelegateSignature");
static_assert(sizeof(EmotionMenu_Item_C_OnSelectRight__DelegateSignature) == 0x000008, "Wrong size on EmotionMenu_Item_C_OnSelectRight__DelegateSignature");
static_assert(offsetof(EmotionMenu_Item_C_OnSelectRight__DelegateSignature, InSelectedItem) == 0x000000, "Member 'EmotionMenu_Item_C_OnSelectRight__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.ExecuteUbergraph_EmotionMenu_Item
// 0x0070 (0x0070 - 0x0000)
struct EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsCoolTime;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CBD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CBE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsCoolTime)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsCoolTime)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bValid;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CBF[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_EmoteId;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue_1;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCoolTimeCountEmotion_ReturnValue;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC0[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC1[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue;  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item");
static_assert(sizeof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item) == 0x000070, "Wrong size on EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, EntryPoint) == 0x000000, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, K2Node_CustomEvent_IsCoolTime) == 0x000004, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::K2Node_CustomEvent_IsCoolTime' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_Conv_StringToName_ReturnValue) == 0x000008, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_GetChatManager_ReturnValue) == 0x000018, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, K2Node_CustomEvent_bValid) == 0x000040, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::K2Node_CustomEvent_bValid' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, K2Node_CustomEvent_EmoteId) == 0x000044, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::K2Node_CustomEvent_EmoteId' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_GetChatManager_ReturnValue_1) == 0x000048, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_GetChatManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_IsCoolTimeCountEmotion_ReturnValue) == 0x000050, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_IsCoolTimeCountEmotion_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_Not_PreBool_ReturnValue_1) == 0x000051, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_Conv_StringToInt_ReturnValue) == 0x000054, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_BooleanAND_ReturnValue) == 0x000059, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000060, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item, CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue) == 0x000069, "Member 'EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item::CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.OnValidEmoteDelegate_Event_0
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0 final
{
public:
	bool                                          bValid;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EmoteId;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0) == 0x000004, "Wrong alignment on EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0");
static_assert(sizeof(EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0) == 0x000008, "Wrong size on EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0");
static_assert(offsetof(EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0, bValid) == 0x000000, "Member 'EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0::bValid' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0, EmoteId) == 0x000004, "Member 'EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0::EmoteId' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.OnChangeCoolTimeEmotion
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_Item_C_OnChangeCoolTimeEmotion final
{
public:
	bool                                          IsCoolTime;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_Item_C_OnChangeCoolTimeEmotion) == 0x000001, "Wrong alignment on EmotionMenu_Item_C_OnChangeCoolTimeEmotion");
static_assert(sizeof(EmotionMenu_Item_C_OnChangeCoolTimeEmotion) == 0x000001, "Wrong size on EmotionMenu_Item_C_OnChangeCoolTimeEmotion");
static_assert(offsetof(EmotionMenu_Item_C_OnChangeCoolTimeEmotion, IsCoolTime) == 0x000000, "Member 'EmotionMenu_Item_C_OnChangeCoolTimeEmotion::IsCoolTime' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmotion
// 0x0018 (0x0018 - 0x0000)
struct EmotionMenu_Item_C_SetEmotion final
{
public:
	class FString                                 InEmotion;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegistShortcutByEmote_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_Item_C_SetEmotion) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_SetEmotion");
static_assert(sizeof(EmotionMenu_Item_C_SetEmotion) == 0x000018, "Wrong size on EmotionMenu_Item_C_SetEmotion");
static_assert(offsetof(EmotionMenu_Item_C_SetEmotion, InEmotion) == 0x000000, "Member 'EmotionMenu_Item_C_SetEmotion::InEmotion' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetEmotion, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000010, "Member 'EmotionMenu_Item_C_SetEmotion::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetEmotion, CallFunc_IsRegistShortcutByEmote_ReturnValue) == 0x000011, "Member 'EmotionMenu_Item_C_SetEmotion::CallFunc_IsRegistShortcutByEmote_ReturnValue' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.GetEmotion
// 0x0010 (0x0010 - 0x0000)
struct EmotionMenu_Item_C_GetEmotion final
{
public:
	class FString                                 OutEmotion;                                        // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_Item_C_GetEmotion) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_GetEmotion");
static_assert(sizeof(EmotionMenu_Item_C_GetEmotion) == 0x000010, "Wrong size on EmotionMenu_Item_C_GetEmotion");
static_assert(offsetof(EmotionMenu_Item_C_GetEmotion, OutEmotion) == 0x000000, "Member 'EmotionMenu_Item_C_GetEmotion::OutEmotion' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.SetIconSelected
// 0x07A0 (0x07A0 - 0x0000)
struct EmotionMenu_Item_C_SetIconSelected final
{
public:
	bool                                          Param_IsSelected;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0090(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0118(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x01A0(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0418(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x04A0(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0528(0x0278)()
};
static_assert(alignof(EmotionMenu_Item_C_SetIconSelected) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_SetIconSelected");
static_assert(sizeof(EmotionMenu_Item_C_SetIconSelected) == 0x0007A0, "Wrong size on EmotionMenu_Item_C_SetIconSelected");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, Param_IsSelected) == 0x000000, "Member 'EmotionMenu_Item_C_SetIconSelected::Param_IsSelected' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'EmotionMenu_Item_C_SetIconSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_1) == 0x000090, "Member 'EmotionMenu_Item_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000118, "Member 'EmotionMenu_Item_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, K2Node_MakeStruct_ButtonStyle) == 0x0001A0, "Member 'EmotionMenu_Item_C_SetIconSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000418, "Member 'EmotionMenu_Item_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_4) == 0x0004A0, "Member 'EmotionMenu_Item_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetIconSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000528, "Member 'EmotionMenu_Item_C_SetIconSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.IsSelected
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_Item_C_IsSelected final
{
public:
	bool                                          Param_bSelected;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_Item_C_IsSelected) == 0x000001, "Wrong alignment on EmotionMenu_Item_C_IsSelected");
static_assert(sizeof(EmotionMenu_Item_C_IsSelected) == 0x000001, "Wrong size on EmotionMenu_Item_C_IsSelected");
static_assert(offsetof(EmotionMenu_Item_C_IsSelected, Param_bSelected) == 0x000000, "Member 'EmotionMenu_Item_C_IsSelected::Param_bSelected' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.SetTooptipEnable
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_Item_C_SetTooptipEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_Item_C_SetTooptipEnable) == 0x000001, "Wrong alignment on EmotionMenu_Item_C_SetTooptipEnable");
static_assert(sizeof(EmotionMenu_Item_C_SetTooptipEnable) == 0x000001, "Wrong size on EmotionMenu_Item_C_SetTooptipEnable");
static_assert(offsetof(EmotionMenu_Item_C_SetTooptipEnable, bEnable) == 0x000000, "Member 'EmotionMenu_Item_C_SetTooptipEnable::bEnable' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmptyBgColor
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_Item_C_SetEmptyBgColor final
{
public:
	int32                                         ColorType;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_Item_C_SetEmptyBgColor) == 0x000004, "Wrong alignment on EmotionMenu_Item_C_SetEmptyBgColor");
static_assert(sizeof(EmotionMenu_Item_C_SetEmptyBgColor) == 0x000008, "Wrong size on EmotionMenu_Item_C_SetEmptyBgColor");
static_assert(offsetof(EmotionMenu_Item_C_SetEmptyBgColor, ColorType) == 0x000000, "Member 'EmotionMenu_Item_C_SetEmptyBgColor::ColorType' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_SetEmptyBgColor, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'EmotionMenu_Item_C_SetEmptyBgColor::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.OnPreviewMouseButtonDown
// 0x0398 (0x0398 - 0x0000)
struct EmotionMenu_Item_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC4[0x6];                                     // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue_1;        // 0x0220(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1; // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC5[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x02E0(0x00B8)()
};
static_assert(alignof(EmotionMenu_Item_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_OnPreviewMouseButtonDown");
static_assert(sizeof(EmotionMenu_Item_C_OnPreviewMouseButtonDown) == 0x000398, "Wrong size on EmotionMenu_Item_C_OnPreviewMouseButtonDown");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000218, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, CallFunc_BooleanAND_ReturnValue) == 0x000219, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue_1) == 0x000220, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1) == 0x0002D8, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x0002E0, "Member 'EmotionMenu_Item_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.OnDragDetected
// 0x00B8 (0x00B8 - 0x0000)
struct EmotionMenu_Item_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutDragDropOperation_C*           CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_Item_C_OnDragDetected) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_OnDragDetected");
static_assert(sizeof(EmotionMenu_Item_C_OnDragDetected) == 0x0000B8, "Wrong size on EmotionMenu_Item_C_OnDragDetected");
static_assert(offsetof(EmotionMenu_Item_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'EmotionMenu_Item_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'EmotionMenu_Item_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnDragDetected, Operation) == 0x0000A8, "Member 'EmotionMenu_Item_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B0, "Member 'EmotionMenu_Item_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.SetDragable
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_Item_C_SetDragable final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_Item_C_SetDragable) == 0x000001, "Wrong alignment on EmotionMenu_Item_C_SetDragable");
static_assert(sizeof(EmotionMenu_Item_C_SetDragable) == 0x000001, "Wrong size on EmotionMenu_Item_C_SetDragable");
static_assert(offsetof(EmotionMenu_Item_C_SetDragable, InDragable) == 0x000000, "Member 'EmotionMenu_Item_C_SetDragable::InDragable' has a wrong offset!");

// Function EmotionMenu_Item.EmotionMenu_Item_C.GetShortcutItemInfo
// 0x00B0 (0x00B0 - 0x0000)
struct EmotionMenu_Item_C_GetShortcutItemInfo final
{
public:
	struct FShortcutItemInfo                      OutShortcutItemInfo;                               // 0x0000(0x0050)(Parm, OutParm)
	class FString                                 CallFunc_GetEmotion_OutEmotion;                    // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FShortcutItemInfo                      K2Node_MakeStruct_ShortcutItemInfo;                // 0x0060(0x0050)()
};
static_assert(alignof(EmotionMenu_Item_C_GetShortcutItemInfo) == 0x000008, "Wrong alignment on EmotionMenu_Item_C_GetShortcutItemInfo");
static_assert(sizeof(EmotionMenu_Item_C_GetShortcutItemInfo) == 0x0000B0, "Wrong size on EmotionMenu_Item_C_GetShortcutItemInfo");
static_assert(offsetof(EmotionMenu_Item_C_GetShortcutItemInfo, OutShortcutItemInfo) == 0x000000, "Member 'EmotionMenu_Item_C_GetShortcutItemInfo::OutShortcutItemInfo' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_GetShortcutItemInfo, CallFunc_GetEmotion_OutEmotion) == 0x000050, "Member 'EmotionMenu_Item_C_GetShortcutItemInfo::CallFunc_GetEmotion_OutEmotion' has a wrong offset!");
static_assert(offsetof(EmotionMenu_Item_C_GetShortcutItemInfo, K2Node_MakeStruct_ShortcutItemInfo) == 0x000060, "Member 'EmotionMenu_Item_C_GetShortcutItemInfo::K2Node_MakeStruct_ShortcutItemInfo' has a wrong offset!");

}

