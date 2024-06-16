#pragma once

 

// Package: MyCharaMenu_BattleSet

#include "Basic.hpp"

#include "E_BattleSetInfoType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature final
{
public:
	bool                                          InIsHidden;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature, InIsHidden) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature::InIsHidden' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature final
{
public:
	bool                                          InIsRotateActive;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature, InIsRotateActive) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature::InIsRotateActive' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnIsCmnBackBtnVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature, InIsVisible) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature::InIsVisible' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnIsChildWidgetOpened__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature final
{
public:
	bool                                          InIsChildWidgetOpened;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature, InIsChildWidgetOpened) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature::InIsChildWidgetOpened' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ExecuteUbergraph_MyCharaMenu_BattleSet
// 0x0288 (0x0288 - 0x0000)
struct MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88FF[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InEquippedSkillId;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSelectedSkillId;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           K2Node_CustomEvent_InInfoType_1;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIncludesClassInfo;            // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8900[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_2;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8901[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	ESBPlayerPassiveImagineSlotType               Temp_byte_Variable_3;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_4;                              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8902[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8903[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_1;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8904[0x5];                                     // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8905[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEquippedEquipmentUniqueId;    // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InSelectedEquipmentUniqueId;    // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           K2Node_CustomEvent_InBattleSetInfoType_1;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIncludesClassInfoUpdate;      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BattleSetInfoType                           K2Node_CustomEvent_InBattleSetInfoType;            // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsUpdateStop_1;               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_5;                              // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8906[0x1];                                     // 0x00BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8907[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSubPaletteReleased_ReturnValue;         // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestCordeDataReload_OutRequestSuccessed; // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bVisibility;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8908[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8909[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BattleSetInfoType                           K2Node_CustomEvent_InInfoType;                     // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIcludesClassInfo;             // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsRotateActive;               // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsUpdateStop;                 // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_1;               // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSubPaletteReleased_ReturnValue_1;       // 0x0116(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0117(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_6;                              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_890A[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_890B[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_7;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_890C[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0154(0x0010)(ZeroConstructor, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType_1;           // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_890D[0x2];                                     // 0x0166(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeEditForBattleSet_C*         CallFunc_Create_ReturnValue;                       // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          K2Node_ComponentBoundEvent_InTacticalSkillSAP;     // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_890E[0x1];                                     // 0x0173(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InSkillId_1;            // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InSkillLevel;           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          K2Node_ComponentBoundEvent_InBattleImagineSAP;     // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_890F[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InBattleImagineUniqueId; // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8910[0x2];                                     // 0x0192(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InSkillSlotId;          // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InSkillId;              // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default;                             // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_ComponentBoundEvent_InInnerImagineSlotType; // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8911[0x2];                                     // 0x019E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InImagineId;            // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default_1;                           // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8912[0x1];                                     // 0x01A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillStatusDescAndListForBattleSet_C*  CallFunc_Create_ReturnValue_1;                     // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8913[0x2];                                     // 0x01B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x01B4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8914[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEquipmentStatusDescAndListForBattleSet_C* CallFunc_Create_ReturnValue_2;                     // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8915[0x2];                                     // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8916[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8917[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x01E4(0x0010)(ZeroConstructor, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType_2;           // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8918[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8919[0x2];                                     // 0x020A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanChangeSkillPosition_ReturnValue;       // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_891A[0x5];                                     // 0x021B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0230(0x0018)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot_1;          // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_891B[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot_2;          // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_891C[0x6];                                     // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_2;               // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSubPaletteReleased_ReturnValue_2;       // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet");
static_assert(sizeof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet) == 0x000288, "Wrong size on MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, EntryPoint) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable) == 0x000006, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable_1) == 0x000007, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InEquippedSkillId) == 0x00000C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InEquippedSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InSelectedSkillId) == 0x000010, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InSelectedSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InInfoType_1) == 0x000014, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InInfoType_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InIncludesClassInfo) == 0x000015, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InIncludesClassInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_2) == 0x000028, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable_2) == 0x000029, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_3) == 0x00002A, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable_3) == 0x00003C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable_4) == 0x00003D, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_4) == 0x00003E, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_5) == 0x00003F, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_6) == 0x000040, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_Sender) == 0x000048, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_Param) == 0x000050, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_Sender_1) == 0x000058, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_Param_1) == 0x000060, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_AsSBInt_Param) == 0x000068, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_AsSBInt_Param' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_AsSBInt_Param_1) == 0x000078, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_AsSBInt_Param_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000081, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000082, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetEventExecutor_ReturnValue) == 0x000088, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_7) == 0x000090, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InEquippedEquipmentUniqueId) == 0x000098, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InEquippedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InSelectedEquipmentUniqueId) == 0x0000A8, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InSelectedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InBattleSetInfoType_1) == 0x0000B8, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InBattleSetInfoType_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InIncludesClassInfoUpdate) == 0x0000B9, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InIncludesClassInfoUpdate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InBattleSetInfoType) == 0x0000BA, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000BB, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InIsUpdateStop_1) == 0x0000BC, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InIsUpdateStop_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable_5) == 0x0000BD, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_8) == 0x0000BE, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C0, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_9) == 0x0000D0, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000D4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetClassType_ReturnValue) == 0x0000E4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_10) == 0x0000E5, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsSubPaletteReleased_ReturnValue) == 0x0000E6, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsSubPaletteReleased_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_RequestCordeDataReload_OutRequestSuccessed) == 0x0000E7, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_RequestCordeDataReload_OutRequestSuccessed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_bVisibility) == 0x0000E8, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_bVisibility' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_11) == 0x0000E9, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000EC, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_12) == 0x0000FC, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_bool_Variable) == 0x0000FD, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_5) == 0x000100, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_13) == 0x000110, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InInfoType) == 0x000111, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InInfoType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InIcludesClassInfo) == 0x000112, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InIcludesClassInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InIsRotateActive) == 0x000113, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InIsRotateActive' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CustomEvent_InIsUpdateStop) == 0x000114, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CustomEvent_InIsUpdateStop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetClassType_ReturnValue_1) == 0x000115, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetClassType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsSubPaletteReleased_ReturnValue_1) == 0x000116, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsSubPaletteReleased_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_14) == 0x000117, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable_6) == 0x000118, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_Event_IsDesignTime) == 0x000119, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_6) == 0x00011C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_15) == 0x00012C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_7) == 0x000130, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_8) == 0x000140, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_byte_Variable_7) == 0x000150, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_9) == 0x000154, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetPlayerClassType_ClassType) == 0x000164, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetPlayerClassType_ClassType_1) == 0x000165, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetPlayerClassType_ClassType_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_Create_ReturnValue) == 0x000168, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_Less_IntInt_ReturnValue) == 0x000170, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_bool_Variable_1) == 0x000171, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InTacticalSkillSAP) == 0x000172, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InSkillId_1) == 0x000174, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InSkillId_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InSkillLevel) == 0x000178, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InSkillLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InBattleImagineSAP) == 0x00017C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InBattleImagineUniqueId) == 0x000180, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InBattleImagineUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_SwitchEnum_CmpSuccess) == 0x000190, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000191, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InSkillSlotId) == 0x000194, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InSkillSlotId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InSkillId) == 0x000198, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_Select_Default) == 0x00019C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InInnerImagineSlotType) == 0x00019D, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_ComponentBoundEvent_InImagineId) == 0x0001A0, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_ComponentBoundEvent_InImagineId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_Select_Default_1) == 0x0001A4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001A5, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001A6, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_Create_ReturnValue_1) == 0x0001A8, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_Select_Default_2) == 0x0001B0, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_16) == 0x0001B1, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_10) == 0x0001B4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_17) == 0x0001C4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_Create_ReturnValue_2) == 0x0001C8, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_18) == 0x0001D0, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_19) == 0x0001D1, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_int_Variable) == 0x0001D4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_20) == 0x0001D8, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_int_Variable_1) == 0x0001DC, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_21) == 0x0001E0, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_CreateDelegate_OutputDelegate_11) == 0x0001E4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetPlayerClassType_ClassType_2) == 0x0001F4, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetPlayerClassType_ClassType_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_AddChild_ReturnValue) == 0x0001F8, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x000200, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_bSuccess_2) == 0x000208, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, Temp_bool_Variable_2) == 0x000209, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_Select_Default_3) == 0x00020C, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000210, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsValid_ReturnValue_22) == 0x000218, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_CanChangeSkillPosition_ReturnValue) == 0x000219, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_CanChangeSkillPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_Not_PreBool_ReturnValue_1) == 0x00021A, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetTextFromAsset_ReturnValue) == 0x000220, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_Conv_StringToText_ReturnValue) == 0x000230, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_AddChild_ReturnValue_1) == 0x000248, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_AsCanvas_Panel_Slot_1) == 0x000250, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_AsCanvas_Panel_Slot_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_bSuccess_3) == 0x000258, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_AddChild_ReturnValue_2) == 0x000260, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_AsCanvas_Panel_Slot_2) == 0x000268, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_AsCanvas_Panel_Slot_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, K2Node_DynamicCast_bSuccess_4) == 0x000270, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetUIManager_IsValid) == 0x000271, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetUIManager_ReturnValue) == 0x000278, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_GetClassType_ReturnValue_2) == 0x000280, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_GetClassType_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet, CallFunc_IsSubPaletteReleased_ReturnValue_2) == 0x000281, "Member 'MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet::CallFunc_IsSubPaletteReleased_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InInnerImagineSlotType;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_891D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InImagineId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature, InInnerImagineSlotType) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature::InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature, InImagineId) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature::InImagineId' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature final
{
public:
	int32                                         InSkillSlotId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature, InSkillSlotId) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature::InSkillId' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_891E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature) == 0x000018, "Wrong size on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_891F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature");
static_assert(sizeof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature) == 0x00000C, "Wrong size on MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InTacticalSkillSAP) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InSkillLevel) == 0x000008, "Member 'MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InSkillLevel' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_BattleSet_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_BattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI final
{
public:
	bool                                          InIsUpdateStop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI, InIsUpdateStop) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI::InIsUpdateStop' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI final
{
public:
	bool                                          InIsRotateActive;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI, InIsRotateActive) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI::InIsRotateActive' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtBattleCordeEditUI
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIcludesClassInfo;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI) == 0x000002, "Wrong size on MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI, InInfoType) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI::InInfoType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI, InIcludesClassInfo) == 0x000001, "Member 'MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI::InIcludesClassInfo' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI final
{
public:
	bool                                          InIsUpdateStop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI, InIsUpdateStop) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI::InIsUpdateStop' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponSpawnedAtEquipmentChangeUI
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI final
{
public:
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI, InBattleSetInfoType) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI::InBattleSetInfoType' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtEquipmentChangeUI
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI final
{
public:
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIncludesClassInfoUpdate;                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI) == 0x000002, "Wrong size on MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI, InBattleSetInfoType) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI::InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI, InIncludesClassInfoUpdate) == 0x000001, "Member 'MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI::InIncludesClassInfoUpdate' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquipmentChangeUIListItemSelected
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected final
{
public:
	class FString                                 InEquippedEquipmentUniqueId;                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InSelectedEquipmentUniqueId;                       // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected) == 0x000020, "Wrong size on MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected, InEquippedEquipmentUniqueId) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected::InEquippedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected, InSelectedEquipmentUniqueId) == 0x000010, "Member 'MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected::InSelectedEquipmentUniqueId' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIncludesClassInfo;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI) == 0x000002, "Wrong size on MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI, InInfoType) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI::InInfoType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI, InIncludesClassInfo) == 0x000001, "Member 'MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI::InIncludesClassInfo' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSkillOrAbilityChangeUIListItemSelected
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected final
{
public:
	int32                                         InEquippedSkillId;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelectedSkillId;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected) == 0x000008, "Wrong size on MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected, InEquippedSkillId) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected::InEquippedSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected, InSelectedSkillId) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected::InSelectedSkillId' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnUnexistHigherPriorityCapture
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture) == 0x000010, "Wrong size on MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture, Sender) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture::Sender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture, Param) == 0x000008, "Member 'MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture::Param' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnExistHigherPriorityCapture
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture");
static_assert(sizeof(MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture) == 0x000010, "Wrong size on MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture, Sender) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture::Sender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture, Param) == 0x000008, "Member 'MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture::Param' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetPlayerAvatarImageVisibility
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility final
{
public:
	bool                                          bVisibility;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility");
static_assert(sizeof(MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility, bVisibility) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility::bVisibility' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.In Animation
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_BattleSet_C_In_Animation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_In_Animation) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_In_Animation");
static_assert(sizeof(MyCharaMenu_BattleSet_C_In_Animation) == 0x000008, "Wrong size on MyCharaMenu_BattleSet_C_In_Animation");
static_assert(offsetof(MyCharaMenu_BattleSet_C_In_Animation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_In_Animation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetBtnFullScreenForDetailedStatusVisibility
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility");
static_assert(sizeof(MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility, InVisibility) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility::InVisibility' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ImmediateCloseDetailedStatus
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus");
static_assert(sizeof(MyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus) == 0x000001, "Wrong size on MyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus");
static_assert(offsetof(MyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetTopInfoVisibility
// 0x0012 (0x0012 - 0x0000)
struct MyCharaMenu_BattleSet_C_SetTopInfoVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIgnorePlayerCaptureStudio;                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsTopInfoVisible;                             // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_SetTopInfoVisibility");
static_assert(sizeof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility) == 0x000012, "Wrong size on MyCharaMenu_BattleSet_C_SetTopInfoVisibility");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, InIgnorePlayerCaptureStudio) == 0x000001, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::InIgnorePlayerCaptureStudio' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, LocalIsTopInfoVisible) == 0x000002, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::LocalIsTopInfoVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, Temp_bool_Variable_1) == 0x000006, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000007, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000008, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_Not_PreBool_ReturnValue_1) == 0x000009, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_Not_PreBool_ReturnValue_2) == 0x00000A, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, Temp_bool_Variable_2) == 0x00000B, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00000C, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, K2Node_Select_Default) == 0x00000D, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, K2Node_Select_Default_1) == 0x00000E, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00000F, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000010, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetTopInfoVisibility, K2Node_Select_Default_2) == 0x000011, "Member 'MyCharaMenu_BattleSet_C_SetTopInfoVisibility::K2Node_Select_Default_2' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.GetPlayerCharacterEquipStatusDiffRequestRetCode
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode final
{
public:
	class FString                                 InCurrEquipmentUniqueId;                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNewEquipmentUniqueId;                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutRetCode;                                        // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8920[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8921[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipStatusDiffRequestResult_ReturnValue; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode");
static_assert(sizeof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode) == 0x000038, "Wrong size on MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode");
static_assert(offsetof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode, InCurrEquipmentUniqueId) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode::InCurrEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode, InNewEquipmentUniqueId) == 0x000010, "Member 'MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode::InNewEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode, OutRetCode) == 0x000020, "Member 'MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode::OutRetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000028, "Member 'MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode, CallFunc_GetEquipStatusDiffRequestResult_ReturnValue) == 0x000034, "Member 'MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode::CallFunc_GetEquipStatusDiffRequestResult_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetStorageMode
// 0x0070 (0x0070 - 0x0000)
struct MyCharaMenu_BattleSet_C_SetStorageMode final
{
public:
	bool                                          InIsStorageMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8922[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8923[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8924[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8925[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8926[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8927[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8928[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_SetStorageMode) == 0x000008, "Wrong alignment on MyCharaMenu_BattleSet_C_SetStorageMode");
static_assert(sizeof(MyCharaMenu_BattleSet_C_SetStorageMode) == 0x000070, "Wrong size on MyCharaMenu_BattleSet_C_SetStorageMode");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, InIsStorageMode) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_MakeVector2D_ReturnValue_1) == 0x00000C, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000028, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_MakeVector2D_ReturnValue_2) == 0x000034, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_2) == 0x00003C, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_3) == 0x00003D, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_4) == 0x00003E, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000040, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000048, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_5) == 0x000050, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_6) == 0x000051, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_MakeVector2D_ReturnValue_3) == 0x000054, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_7) == 0x00005C, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000060, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_8) == 0x000068, "Member 'MyCharaMenu_BattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UpdateLeftSideParameters
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_BattleSet_C_UpdateLeftSideParameters final
{
public:
	bool                                          InIncludeClassInfo;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_UpdateLeftSideParameters) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_UpdateLeftSideParameters");
static_assert(sizeof(MyCharaMenu_BattleSet_C_UpdateLeftSideParameters) == 0x000002, "Wrong size on MyCharaMenu_BattleSet_C_UpdateLeftSideParameters");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UpdateLeftSideParameters, InIncludeClassInfo) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_UpdateLeftSideParameters::InIncludeClassInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UpdateLeftSideParameters, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_BattleSet_C_UpdateLeftSideParameters::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop final
{
public:
	bool                                          InIsUpdateStop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop");
static_assert(sizeof(MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop) == 0x000002, "Wrong size on MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop, InIsUpdateStop) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop::InIsUpdateStop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetUIBlockerFrontRowVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility");
static_assert(sizeof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility) == 0x000006, "Wrong size on MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfEquipmentChangeUI
// 0x00A4 (0x00A4 - 0x0000)
struct MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsUpdateStop)>          K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI) == 0x0000A4, "Wrong size on MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_8) == 0x000080, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_9) == 0x000090, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfEquipmentChangeUI
// 0x00B8 (0x00B8 - 0x0000)
struct MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI final
{
public:
	bool                                          InUnbindTermEnd;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8929[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsUpdateStop)>          K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_892A[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI) == 0x0000B8, "Wrong size on MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, InUnbindTermEnd) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::InUnbindTermEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_6) == 0x000064, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, CallFunc_IsValid_ReturnValue) == 0x000074, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_7) == 0x000078, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_8) == 0x000088, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_9) == 0x000098, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000A8, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfSkillOrAbilityChangeUI
// 0x0054 (0x0054 - 0x0000)
struct MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_892B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InEquippedSkillId, int32 InSelectedSkillId)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI) == 0x000054, "Wrong size on MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfSkillOrAbilityChangeUI
// 0x0068 (0x0068 - 0x0000)
struct MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI final
{
public:
	bool                                          InUnbindTermEnd;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_892C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InEquippedSkillId, int32 InSelectedSkillId)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI) == 0x000068, "Wrong size on MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, InUnbindTermEnd) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::InUnbindTermEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI, CallFunc_IsValid_ReturnValue) == 0x000064, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfBattleCordeEditUI
// 0x00A4 (0x00A4 - 0x0000)
struct MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI final
{
public:
	TDelegate<void(bool InRotateActive)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsUpdateStop)>          K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI) == 0x0000A4, "Wrong size on MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_8) == 0x000080, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_9) == 0x000090, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'MyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfBattleCordeEditUI
// 0x00B8 (0x00B8 - 0x0000)
struct MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI final
{
public:
	bool                                          InUnbindTermEnd;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_892D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool InRotateActive)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsUpdateStop)>          K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI) == 0x000004, "Wrong alignment on MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI");
static_assert(sizeof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI) == 0x0000B8, "Wrong size on MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, InUnbindTermEnd) == 0x000000, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::InUnbindTermEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_6) == 0x000064, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_7) == 0x000074, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_8) == 0x000084, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_9) == 0x000094, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000A4, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI, CallFunc_IsValid_ReturnValue) == 0x0000B4, "Member 'MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

