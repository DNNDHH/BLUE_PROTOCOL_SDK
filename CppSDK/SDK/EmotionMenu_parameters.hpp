#pragma once

 

// Package: EmotionMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EmotionMenu.EmotionMenu_C.OnRequestEmote__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_C_OnRequestEmote__DelegateSignature final
{
public:
	class FName                                   EmotionId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_OnRequestEmote__DelegateSignature) == 0x000004, "Wrong alignment on EmotionMenu_C_OnRequestEmote__DelegateSignature");
static_assert(sizeof(EmotionMenu_C_OnRequestEmote__DelegateSignature) == 0x000008, "Wrong size on EmotionMenu_C_OnRequestEmote__DelegateSignature");
static_assert(offsetof(EmotionMenu_C_OnRequestEmote__DelegateSignature, EmotionId) == 0x000000, "Member 'EmotionMenu_C_OnRequestEmote__DelegateSignature::EmotionId' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.ExecuteUbergraph_EmotionMenu
// 0x0190 (0x0190 - 0x0000)
struct EmotionMenu_C_ExecuteUbergraph_EmotionMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A28[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MainPage;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A29[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A2A[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStampCategoryButton_C*                 CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A2B[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A2C[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLimitedTimeGroupInfo>        CallFunc_GetLimitedTimeGroupInfo_ReturnValue;      // 0x0080(0x0010)(ReferenceParm)
	bool                                          K2Node_CustomEvent_IsCreateCategory;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A2D[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A2E[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A2F[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A30[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue_1;                     // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOtherPCListMenuVisible_Visible;         // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A31[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStampCategoryButton_C*                 CallFunc_Create_ReturnValue_2;                     // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A32[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEmotionMenu_Item_C*                    K2Node_ComponentBoundEvent_InSelectedItem;         // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0140(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Index;                          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A33[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A34[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A35[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu) == 0x000008, "Wrong alignment on EmotionMenu_C_ExecuteUbergraph_EmotionMenu");
static_assert(sizeof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu) == 0x000190, "Wrong size on EmotionMenu_C_ExecuteUbergraph_EmotionMenu");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, EntryPoint) == 0x000000, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_Event_InBookMarkType) == 0x000008, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_Event_MainPage) == 0x000018, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_Event_SubPage) == 0x00001C, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000028, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000038, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000050, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_Create_ReturnValue) == 0x000058, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000060, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_CustomEvent_Index_1) == 0x000068, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_DynamicCast_AsSBPlayer_State) == 0x000070, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetLimitedTimeGroupInfo_ReturnValue) == 0x000080, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetLimitedTimeGroupInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_CustomEvent_IsCreateCategory) == 0x000090, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_CustomEvent_IsCreateCategory' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_MakeStruct_Margin) == 0x000094, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A4, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_MakeStruct_Margin_1) == 0x0000B4, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000C8, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D0, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000E8, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000F0, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetHUD_ReturnValue) == 0x0000F8, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_Create_ReturnValue_1) == 0x000100, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000108, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_DynamicCast_bSuccess_2) == 0x000118, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_IsOtherPCListMenuVisible_Visible) == 0x000119, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_IsOtherPCListMenuVisible_Visible' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_Create_ReturnValue_2) == 0x000120, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000128, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000130, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_ComponentBoundEvent_InSelectedItem) == 0x000138, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_ComponentBoundEvent_InSelectedItem' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_Event_Animation) == 0x000140, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000148, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_CustomEvent_Index) == 0x000149, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetSBPlayerState_ReturnValue) == 0x000150, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000158, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000170, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_IsValid_ReturnValue_1) == 0x000178, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, Temp_int_Variable) == 0x00017C, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000180, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x000184, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000188, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_ExecuteUbergraph_EmotionMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000189, "Member 'EmotionMenu_C_ExecuteUbergraph_EmotionMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.ArrivalBackendMenu
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_C_ArrivalBackendMenu final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_C_ArrivalBackendMenu) == 0x000001, "Wrong alignment on EmotionMenu_C_ArrivalBackendMenu");
static_assert(sizeof(EmotionMenu_C_ArrivalBackendMenu) == 0x000001, "Wrong size on EmotionMenu_C_ArrivalBackendMenu");
static_assert(offsetof(EmotionMenu_C_ArrivalBackendMenu, Param_Index) == 0x000000, "Member 'EmotionMenu_C_ArrivalBackendMenu::Param_Index' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on EmotionMenu_C_OnAnimationFinished");
static_assert(sizeof(EmotionMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on EmotionMenu_C_OnAnimationFinished");
static_assert(offsetof(EmotionMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'EmotionMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature) == 0x000008, "Wrong alignment on EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature");
static_assert(sizeof(EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature) == 0x000008, "Wrong size on EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature");
static_assert(offsetof(EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature, InSelectedItem) == 0x000000, "Member 'EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.UpdateEmotionList
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_C_UpdateEmotionList final
{
public:
	bool                                          IsCreateCategory;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_C_UpdateEmotionList) == 0x000001, "Wrong alignment on EmotionMenu_C_UpdateEmotionList");
static_assert(sizeof(EmotionMenu_C_UpdateEmotionList) == 0x000001, "Wrong size on EmotionMenu_C_UpdateEmotionList");
static_assert(offsetof(EmotionMenu_C_UpdateEmotionList, IsCreateCategory) == 0x000000, "Member 'EmotionMenu_C_UpdateEmotionList::IsCreateCategory' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.OnClickedEvent
// 0x0004 (0x0004 - 0x0000)
struct EmotionMenu_C_OnClickedEvent final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_OnClickedEvent) == 0x000004, "Wrong alignment on EmotionMenu_C_OnClickedEvent");
static_assert(sizeof(EmotionMenu_C_OnClickedEvent) == 0x000004, "Wrong size on EmotionMenu_C_OnClickedEvent");
static_assert(offsetof(EmotionMenu_C_OnClickedEvent, Param_Index) == 0x000000, "Member 'EmotionMenu_C_OnClickedEvent::Param_Index' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct EmotionMenu_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on EmotionMenu_C_OnSubMenuUpdate");
static_assert(sizeof(EmotionMenu_C_OnSubMenuUpdate) == 0x000008, "Wrong size on EmotionMenu_C_OnSubMenuUpdate");
static_assert(offsetof(EmotionMenu_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'EmotionMenu_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'EmotionMenu_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct EmotionMenu_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on EmotionMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(EmotionMenu_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on EmotionMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(EmotionMenu_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'EmotionMenu_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.CreateEmotionEmotionList
// 0x0070 (0x0070 - 0x0000)
struct EmotionMenu_C_CreateEmotionEmotionList final
{
public:
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A36[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1;  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A37[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A38[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A39[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue; // 0x0030(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_ReturnValue;           // 0x0040(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue; // 0x0050(0x0010)(ReferenceParm)
	TArray<class FString>                         K2Node_Select_Default;                             // 0x0060(0x0010)(ReferenceParm)
};
static_assert(alignof(EmotionMenu_C_CreateEmotionEmotionList) == 0x000008, "Wrong alignment on EmotionMenu_C_CreateEmotionEmotionList");
static_assert(sizeof(EmotionMenu_C_CreateEmotionEmotionList) == 0x000070, "Wrong size on EmotionMenu_C_CreateEmotionEmotionList");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000000, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, Temp_bool_Variable) == 0x00000D, "Member 'EmotionMenu_C_CreateEmotionEmotionList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1) == 0x00000E, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000010, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, K2Node_DynamicCast_AsSBPlayer_State) == 0x000020, "Member 'EmotionMenu_C_CreateEmotionEmotionList::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EmotionMenu_C_CreateEmotionEmotionList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue) == 0x000030, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_GetUnlockEmoteData_ReturnValue) == 0x000040, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_GetUnlockEmoteData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue) == 0x000050, "Member 'EmotionMenu_C_CreateEmotionEmotionList::CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_CreateEmotionEmotionList, K2Node_Select_Default) == 0x000060, "Member 'EmotionMenu_C_CreateEmotionEmotionList::K2Node_Select_Default' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.SetRootVisible
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_C_SetRootVisible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_C_SetRootVisible) == 0x000001, "Wrong alignment on EmotionMenu_C_SetRootVisible");
static_assert(sizeof(EmotionMenu_C_SetRootVisible) == 0x000001, "Wrong size on EmotionMenu_C_SetRootVisible");
static_assert(offsetof(EmotionMenu_C_SetRootVisible, InVisible) == 0x000000, "Member 'EmotionMenu_C_SetRootVisible::InVisible' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.SetRootBgVisible
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_C_SetRootBgVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_C_SetRootBgVisible) == 0x000001, "Wrong alignment on EmotionMenu_C_SetRootBgVisible");
static_assert(sizeof(EmotionMenu_C_SetRootBgVisible) == 0x000001, "Wrong size on EmotionMenu_C_SetRootBgVisible");
static_assert(offsetof(EmotionMenu_C_SetRootBgVisible, bVisible) == 0x000000, "Member 'EmotionMenu_C_SetRootBgVisible::bVisible' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.SetLineColor
// 0x0014 (0x0014 - 0x0000)
struct EmotionMenu_C_SetLineColor final
{
public:
	ESBChatLogType                                InChatLogType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A3A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SetColor;                                          // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_SetLineColor) == 0x000004, "Wrong alignment on EmotionMenu_C_SetLineColor");
static_assert(sizeof(EmotionMenu_C_SetLineColor) == 0x000014, "Wrong size on EmotionMenu_C_SetLineColor");
static_assert(offsetof(EmotionMenu_C_SetLineColor, InChatLogType) == 0x000000, "Member 'EmotionMenu_C_SetLineColor::InChatLogType' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SetLineColor, SetColor) == 0x000004, "Member 'EmotionMenu_C_SetLineColor::SetColor' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.SelectEmotionItem
// 0x0060 (0x0060 - 0x0000)
struct EmotionMenu_C_SelectEmotionItem final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotion_OutEmotion;                    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTalkModeContinue_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A3B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A3C[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A3D[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_C_SelectEmotionItem) == 0x000008, "Wrong alignment on EmotionMenu_C_SelectEmotionItem");
static_assert(sizeof(EmotionMenu_C_SelectEmotionItem) == 0x000060, "Wrong size on EmotionMenu_C_SelectEmotionItem");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, InSelectedItem) == 0x000000, "Member 'EmotionMenu_C_SelectEmotionItem::InSelectedItem' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_GetEmotion_OutEmotion) == 0x000008, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_GetEmotion_OutEmotion' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_IsTalkModeContinue_ReturnValue) == 0x000018, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_IsTalkModeContinue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_PlaySE_ReturnValue) == 0x000028, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_GetHUD_ReturnValue) == 0x000030, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000038, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000040, "Member 'EmotionMenu_C_SelectEmotionItem::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'EmotionMenu_C_SelectEmotionItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_Conv_StringToName_ReturnValue) == 0x000054, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_SelectEmotionItem, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00005C, "Member 'EmotionMenu_C_SelectEmotionItem::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.SetDragableItem
// 0x0001 (0x0001 - 0x0000)
struct EmotionMenu_C_SetDragableItem final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EmotionMenu_C_SetDragableItem) == 0x000001, "Wrong alignment on EmotionMenu_C_SetDragableItem");
static_assert(sizeof(EmotionMenu_C_SetDragableItem) == 0x000001, "Wrong size on EmotionMenu_C_SetDragableItem");
static_assert(offsetof(EmotionMenu_C_SetDragableItem, InDragable) == 0x000000, "Member 'EmotionMenu_C_SetDragableItem::InDragable' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.UpdateCategory
// 0x0030 (0x0030 - 0x0000)
struct EmotionMenu_C_UpdateCategory final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A3E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 K2Node_DynamicCast_AsStamp_Category_Button;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A3F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A40[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_UpdateCategory) == 0x000008, "Wrong alignment on EmotionMenu_C_UpdateCategory");
static_assert(sizeof(EmotionMenu_C_UpdateCategory) == 0x000030, "Wrong size on EmotionMenu_C_UpdateCategory");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, Temp_int_Variable) == 0x000000, "Member 'EmotionMenu_C_UpdateCategory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'EmotionMenu_C_UpdateCategory::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'EmotionMenu_C_UpdateCategory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'EmotionMenu_C_UpdateCategory::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, K2Node_DynamicCast_AsStamp_Category_Button) == 0x000010, "Member 'EmotionMenu_C_UpdateCategory::K2Node_DynamicCast_AsStamp_Category_Button' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'EmotionMenu_C_UpdateCategory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, CallFunc_GetChildrenCount_ReturnValue) == 0x00001C, "Member 'EmotionMenu_C_UpdateCategory::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'EmotionMenu_C_UpdateCategory::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'EmotionMenu_C_UpdateCategory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_UpdateCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'EmotionMenu_C_UpdateCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function EmotionMenu.EmotionMenu_C.TermRequest
// 0x0010 (0x0010 - 0x0000)
struct EmotionMenu_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A41[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmotionMenu_C_TermRequest) == 0x000008, "Wrong alignment on EmotionMenu_C_TermRequest");
static_assert(sizeof(EmotionMenu_C_TermRequest) == 0x000010, "Wrong size on EmotionMenu_C_TermRequest");
static_assert(offsetof(EmotionMenu_C_TermRequest, InReason) == 0x000000, "Member 'EmotionMenu_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_TermRequest, ReturnValue) == 0x000001, "Member 'EmotionMenu_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_TermRequest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'EmotionMenu_C_TermRequest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmotionMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'EmotionMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

