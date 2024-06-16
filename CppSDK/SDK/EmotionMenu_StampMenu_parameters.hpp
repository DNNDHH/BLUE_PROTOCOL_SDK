#pragma once

 

// Package: EmotionMenu_StampMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.ExecuteUbergraph_EmotionMenu_StampMenu
// 0x00A8 (0x00A8 - 0x0000)
struct EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsCoolTime)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_StampId;                        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatStampButtonItem_C*                 K2Node_CustomEvent_InSelectItem;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStampCategoryMasterData             K2Node_ComponentBoundEvent_StampCategoryMasterData; // 0x0020(0x0020)()
	TDelegate<void(int32 RetStampID, class UChatStampButtonItem_C* InSelectItem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F0[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 K2Node_DynamicCast_AsChat_Stamp_Button_Item;       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F1[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsCoolTime;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F2[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCoolTimeCountEmotion_ReturnValue;       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F3[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsCoolTime)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F4[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue_1;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu) == 0x000008, "Wrong alignment on EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu");
static_assert(sizeof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu) == 0x0000A8, "Wrong size on EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, EntryPoint) == 0x000000, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_CustomEvent_StampId) == 0x000014, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_CustomEvent_StampId' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_CustomEvent_InSelectItem) == 0x000018, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_CustomEvent_InSelectItem' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_ComponentBoundEvent_StampCategoryMasterData) == 0x000020, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_ComponentBoundEvent_StampCategoryMasterData' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, Temp_int_Variable) == 0x000050, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x000054, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_GetChildAt_ReturnValue) == 0x000058, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_DynamicCast_AsChat_Stamp_Button_Item) == 0x000068, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_DynamicCast_AsChat_Stamp_Button_Item' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000071, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_CustomEvent_IsCoolTime) == 0x000078, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_CustomEvent_IsCoolTime' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_GetChatManager_ReturnValue) == 0x000080, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_IsCoolTimeCountEmotion_ReturnValue) == 0x000088, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_IsCoolTimeCountEmotion_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00008C, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x00009C, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu, CallFunc_GetChatManager_ReturnValue_1) == 0x0000A0, "Member 'EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu::CallFunc_GetChatManager_ReturnValue_1' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnChangeCoolTimeEmotion
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion final
{
public:
	bool                                          IsCoolTime;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion) == 0x000001, "Wrong alignment on EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion");
static_assert(sizeof(EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion) == 0x000001, "Wrong size on EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion");
static_assert(offsetof(EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion, IsCoolTime) == 0x000000, "Member 'EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion::IsCoolTime' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature final
{
public:
	struct FSBStampCategoryMasterData             StampCategoryMasterData;                           // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature) == 0x000008, "Wrong alignment on EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature");
static_assert(sizeof(EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature) == 0x000020, "Wrong size on EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature");
static_assert(offsetof(EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature, StampCategoryMasterData) == 0x000000, "Member 'EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature::StampCategoryMasterData' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnStampClicked_Event
// 0x0010 (0x0010 - 0x0000)
struct EmotionMenu_StampMenu_C_OnStampClicked_Event final
{
public:
	int32                                         StampId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 InSelectItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_StampMenu_C_OnStampClicked_Event) == 0x000008, "Wrong alignment on EmotionMenu_StampMenu_C_OnStampClicked_Event");
static_assert(sizeof(EmotionMenu_StampMenu_C_OnStampClicked_Event) == 0x000010, "Wrong size on EmotionMenu_StampMenu_C_OnStampClicked_Event");
static_assert(offsetof(EmotionMenu_StampMenu_C_OnStampClicked_Event, StampId) == 0x000000, "Member 'EmotionMenu_StampMenu_C_OnStampClicked_Event::StampId' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_OnStampClicked_Event, InSelectItem) == 0x000008, "Member 'EmotionMenu_StampMenu_C_OnStampClicked_Event::InSelectItem' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.CreateStamp
// 0x0118 (0x0118 - 0x0000)
struct EmotionMenu_StampMenu_C_CreateStamp final
{
public:
	struct FSBStampCategoryMasterData             StampData;                                         // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                              EndTime;                                           // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         StampId;                                           // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTermStamp;                                        // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F6[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             StampCategoryMasterData;                           // 0x0030(0x0020)(Edit, BlueprintVisible)
	int32                                         MaxLen;                                            // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F8[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_Array_Get_Item;                           // 0x0078(0x0020)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47F9[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetStampTerm_OutStartTime;                // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetStampTerm_OutEndTime;                  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStampTerm_ReturnValue;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLimitedTimeStamp_ReturnValue;           // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47FA[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47FB[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47FC[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 CallFunc_Create_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetShortcutIcon_IsVisibility;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47FD[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetStampID, class UChatStampButtonItem_C* InSelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47FE[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47FF[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_StampMenu_C_CreateStamp) == 0x000008, "Wrong alignment on EmotionMenu_StampMenu_C_CreateStamp");
static_assert(sizeof(EmotionMenu_StampMenu_C_CreateStamp) == 0x000118, "Wrong size on EmotionMenu_StampMenu_C_CreateStamp");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, StampData) == 0x000000, "Member 'EmotionMenu_StampMenu_C_CreateStamp::StampData' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, EndTime) == 0x000020, "Member 'EmotionMenu_StampMenu_C_CreateStamp::EndTime' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, StampId) == 0x000028, "Member 'EmotionMenu_StampMenu_C_CreateStamp::StampId' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, bTermStamp) == 0x00002C, "Member 'EmotionMenu_StampMenu_C_CreateStamp::bTermStamp' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, StampCategoryMasterData) == 0x000030, "Member 'EmotionMenu_StampMenu_C_CreateStamp::StampCategoryMasterData' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, MaxLen) == 0x000050, "Member 'EmotionMenu_StampMenu_C_CreateStamp::MaxLen' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, Temp_int_Array_Index_Variable) == 0x000054, "Member 'EmotionMenu_StampMenu_C_CreateStamp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000058, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000060, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000068, "Member 'EmotionMenu_StampMenu_C_CreateStamp::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'EmotionMenu_StampMenu_C_CreateStamp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Array_Get_Item) == 0x000078, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, K2Node_DynamicCast_AsSBPlayer_State) == 0x000098, "Member 'EmotionMenu_StampMenu_C_CreateStamp::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'EmotionMenu_StampMenu_C_CreateStamp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Conv_IntToString_ReturnValue) == 0x0000A8, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_GetStampTerm_OutStartTime) == 0x0000B8, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_GetStampTerm_OutStartTime' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_GetStampTerm_OutEndTime) == 0x0000C0, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_GetStampTerm_OutEndTime' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_GetStampTerm_ReturnValue) == 0x0000C8, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_GetStampTerm_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_IsLimitedTimeStamp_ReturnValue) == 0x0000C9, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_IsLimitedTimeStamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Array_Length_ReturnValue) == 0x0000CC, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, Temp_int_Loop_Counter_Variable) == 0x0000D0, "Member 'EmotionMenu_StampMenu_C_CreateStamp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Create_ReturnValue) == 0x0000E0, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_SetShortcutIcon_IsVisibility) == 0x0000E8, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_SetShortcutIcon_IsVisibility' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, K2Node_CreateDelegate_OutputDelegate) == 0x0000EC, "Member 'EmotionMenu_StampMenu_C_CreateStamp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, Temp_byte_Variable) == 0x0000FC, "Member 'EmotionMenu_StampMenu_C_CreateStamp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Percent_IntInt_ReturnValue) == 0x000100, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_Divide_IntInt_ReturnValue) == 0x000104, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, Temp_byte_Variable_1) == 0x000108, "Member 'EmotionMenu_StampMenu_C_CreateStamp::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, Temp_bool_Variable) == 0x000109, "Member 'EmotionMenu_StampMenu_C_CreateStamp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, K2Node_Select_Default) == 0x00010A, "Member 'EmotionMenu_StampMenu_C_CreateStamp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_CreateStamp, CallFunc_AddChildToGrid_ReturnValue) == 0x000110, "Member 'EmotionMenu_StampMenu_C_CreateStamp::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetHistoryMode
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_StampMenu_C_SetHistoryMode final
{
public:
	bool                                          bSet;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_StampMenu_C_SetHistoryMode) == 0x000001, "Wrong alignment on EmotionMenu_StampMenu_C_SetHistoryMode");
static_assert(sizeof(EmotionMenu_StampMenu_C_SetHistoryMode) == 0x000001, "Wrong size on EmotionMenu_StampMenu_C_SetHistoryMode");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetHistoryMode, bSet) == 0x000000, "Member 'EmotionMenu_StampMenu_C_SetHistoryMode::bSet' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateIconSelect
// 0x0030 (0x0030 - 0x0000)
struct EmotionMenu_StampMenu_C_UpdateIconSelect final
{
public:
	class UChatStampButtonItem_C*                 InSelectIcon;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4800[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4801[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 K2Node_DynamicCast_AsChat_Stamp_Button_Item;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4802[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_StampMenu_C_UpdateIconSelect) == 0x000008, "Wrong alignment on EmotionMenu_StampMenu_C_UpdateIconSelect");
static_assert(sizeof(EmotionMenu_StampMenu_C_UpdateIconSelect) == 0x000030, "Wrong size on EmotionMenu_StampMenu_C_UpdateIconSelect");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, InSelectIcon) == 0x000000, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::InSelectIcon' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, Temp_int_Variable) == 0x000008, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, K2Node_DynamicCast_AsChat_Stamp_Button_Item) == 0x000020, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::K2Node_DynamicCast_AsChat_Stamp_Button_Item' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000029, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002A, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_UpdateIconSelect, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'EmotionMenu_StampMenu_C_UpdateIconSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetDragable
// 0x0028 (0x0028 - 0x0000)
struct EmotionMenu_StampMenu_C_SetDragable final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4803[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4804[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 K2Node_DynamicCast_AsChat_Stamp_Button_Item;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4805[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_StampMenu_C_SetDragable) == 0x000008, "Wrong alignment on EmotionMenu_StampMenu_C_SetDragable");
static_assert(sizeof(EmotionMenu_StampMenu_C_SetDragable) == 0x000028, "Wrong size on EmotionMenu_StampMenu_C_SetDragable");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, InDragable) == 0x000000, "Member 'EmotionMenu_StampMenu_C_SetDragable::InDragable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, Temp_int_Variable) == 0x000004, "Member 'EmotionMenu_StampMenu_C_SetDragable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'EmotionMenu_StampMenu_C_SetDragable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'EmotionMenu_StampMenu_C_SetDragable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, K2Node_DynamicCast_AsChat_Stamp_Button_Item) == 0x000018, "Member 'EmotionMenu_StampMenu_C_SetDragable::K2Node_DynamicCast_AsChat_Stamp_Button_Item' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EmotionMenu_StampMenu_C_SetDragable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'EmotionMenu_StampMenu_C_SetDragable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SetDragable, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'EmotionMenu_StampMenu_C_SetDragable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SelectStamp
// 0x0040 (0x0040 - 0x0000)
struct EmotionMenu_StampMenu_C_SelectStamp final
{
public:
	int32                                         InStampId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4806[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 InStampItem;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCoolTimeCountStamp_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4807[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeStampMessage_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_StampMenu_C_SelectStamp) == 0x000008, "Wrong alignment on EmotionMenu_StampMenu_C_SelectStamp");
static_assert(sizeof(EmotionMenu_StampMenu_C_SelectStamp) == 0x000040, "Wrong size on EmotionMenu_StampMenu_C_SelectStamp");
static_assert(offsetof(EmotionMenu_StampMenu_C_SelectStamp, InStampId) == 0x000000, "Member 'EmotionMenu_StampMenu_C_SelectStamp::InStampId' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SelectStamp, InStampItem) == 0x000008, "Member 'EmotionMenu_StampMenu_C_SelectStamp::InStampItem' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SelectStamp, CallFunc_GetChatManager_ReturnValue) == 0x000010, "Member 'EmotionMenu_StampMenu_C_SelectStamp::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SelectStamp, CallFunc_IsCoolTimeCountStamp_ReturnValue) == 0x000018, "Member 'EmotionMenu_StampMenu_C_SelectStamp::CallFunc_IsCoolTimeCountStamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SelectStamp, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'EmotionMenu_StampMenu_C_SelectStamp::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_StampMenu_C_SelectStamp, CallFunc_MakeStampMessage_ReturnValue) == 0x000030, "Member 'EmotionMenu_StampMenu_C_SelectStamp::CallFunc_MakeStampMessage_ReturnValue' has a wrong offset!");

}

