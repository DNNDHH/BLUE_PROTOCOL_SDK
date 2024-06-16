#pragma once

 

// Package: MyCharaMenu_EffectDetailsList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ExecuteUbergraph_MyCharaMenu_EffectDetailsList
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AF9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AFA[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList");
static_assert(sizeof(MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList) == 0x000018, "Wrong size on MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList, EntryPoint) == 0x000000, "Member 'MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList, K2Node_Event_Animation) == 0x000008, "Member 'MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000011, "Member 'MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList, CallFunc_PlaySE_ReturnValue) == 0x000014, "Member 'MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_EffectDetailsList_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectDetailsList_C_OnAnimationFinished) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsList_C_OnAnimationFinished");
static_assert(sizeof(MyCharaMenu_EffectDetailsList_C_OnAnimationFinished) == 0x000008, "Wrong size on MyCharaMenu_EffectDetailsList_C_OnAnimationFinished");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_OnAnimationFinished, Animation) == 0x000000, "Member 'MyCharaMenu_EffectDetailsList_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ShowWindow
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_EffectDetailsList_C_ShowWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AFB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectDetailsList_C_ShowWindow) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsList_C_ShowWindow");
static_assert(sizeof(MyCharaMenu_EffectDetailsList_C_ShowWindow) == 0x000018, "Wrong size on MyCharaMenu_EffectDetailsList_C_ShowWindow");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ShowWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'MyCharaMenu_EffectDetailsList_C_ShowWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MyCharaMenu_EffectDetailsList_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'MyCharaMenu_EffectDetailsList_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.HideWindow
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_EffectDetailsList_C_HideWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AFC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectDetailsList_C_HideWindow) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsList_C_HideWindow");
static_assert(sizeof(MyCharaMenu_EffectDetailsList_C_HideWindow) == 0x000018, "Wrong size on MyCharaMenu_EffectDetailsList_C_HideWindow");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_HideWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'MyCharaMenu_EffectDetailsList_C_HideWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MyCharaMenu_EffectDetailsList_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'MyCharaMenu_EffectDetailsList_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Setup
// 0x0180 (0x0180 - 0x0000)
struct MyCharaMenu_EffectDetailsList_C_Setup final
{
public:
	class FText                                   TmpEffectDescText;                                 // 0x0000(0x0018)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AFD[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AFE[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AFF[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B00[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B01[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B02[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B03[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B04[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B05[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquippedPassiveSkill_ReturnValue;      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0090(0x0028)(ConstParm)
	class FString                                 CallFunc_GetClassPassiveSkillDescriptionText_ReturnValue; // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	class FString                                 CallFunc_GetClassPassiveSkillNameText_ReturnValue; // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B06[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	TArray<struct FSBWeaponPerkUIInfo>            CallFunc_GetWeaponPerkUIInfoTableByUniqueID_OutWeaponPerkUIInfoTable; // 0x0110(0x0010)(ReferenceParm)
	struct FSBWeaponPerkUIInfo                    CallFunc_Array_Get_Item;                           // 0x0120(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B07[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0148(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B08[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0168(0x0018)()
};
static_assert(alignof(MyCharaMenu_EffectDetailsList_C_Setup) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsList_C_Setup");
static_assert(sizeof(MyCharaMenu_EffectDetailsList_C_Setup) == 0x000180, "Wrong size on MyCharaMenu_EffectDetailsList_C_Setup");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, TmpEffectDescText) == 0x000000, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::TmpEffectDescText' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, Temp_int_Variable) == 0x000018, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, Temp_int_Variable_1) == 0x00001C, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetValidValue_ReturnValue) == 0x000028, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000029, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000030, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000034, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, Temp_int_Array_Index_Variable) == 0x000040, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_MakeLiteralBool_ReturnValue) == 0x000050, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_MakeLiteralInt_ReturnValue) == 0x000054, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000060, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000070, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetPlayerManager_ReturnValue) == 0x000080, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000089, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetEquippedPassiveSkill_ReturnValue) == 0x00008C, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetEquippedPassiveSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000090, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetClassPassiveSkillDescriptionText_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetClassPassiveSkillDescriptionText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetClassPassiveSkillNameText_ReturnValue) == 0x0000E0, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetClassPassiveSkillNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000F0, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_GetWeaponPerkUIInfoTableByUniqueID_OutWeaponPerkUIInfoTable) == 0x000110, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_GetWeaponPerkUIInfoTableByUniqueID_OutWeaponPerkUIInfoTable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Array_Get_Item) == 0x000120, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000148, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x000160, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_Setup, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000168, "Member 'MyCharaMenu_EffectDetailsList_C_Setup::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.AddEffectDetailItemToList
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList final
{
public:
	class FText                                   InEffectNameText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InEffectDescText;                                  // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMyCharaMenu_EffectDetailsListItem_C*   CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList");
static_assert(sizeof(MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList) == 0x000040, "Wrong size on MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList, InEffectNameText) == 0x000000, "Member 'MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList::InEffectNameText' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList, InEffectDescText) == 0x000018, "Member 'MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList::InEffectDescText' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList, CallFunc_Create_ReturnValue) == 0x000030, "Member 'MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

