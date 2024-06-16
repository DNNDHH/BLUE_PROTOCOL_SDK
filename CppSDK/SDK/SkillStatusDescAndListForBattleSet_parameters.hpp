#pragma once

 

// Package: SkillStatusDescAndListForBattleSet

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillInfoItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature final
{
public:
	int32                                         InEquippedSkillId;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelectedSkillId;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature, InEquippedSkillId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature::InEquippedSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature, InSelectedSkillId) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature::InSelectedSkillId' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature final
{
public:
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIncludesClassInfoUpdate;                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature) == 0x000002, "Wrong size on SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature, InBattleSetInfoType) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature::InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature, InIncludesClassInfoUpdate) == 0x000001, "Member 'SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature::InIncludesClassInfoUpdate' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ExecuteUbergraph_SkillStatusDescAndListForBattleSet
// 0x04E8 (0x04E8 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423C[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSkillId_1;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InDisarm_1;                     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423D[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_423E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0018(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423F[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4240[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4241[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4242[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerArtsComponent*                 CallFunc_GetPlayerArtsComponent_ReturnValue;       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4243[0x5];                                     // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4244[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerArtsComponent*                 CallFunc_GetPlayerArtsComponent_ReturnValue_1;     // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestEquipPassiveSkill_ReturnValue;     // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestUnequipPassiveSkill_ReturnValue;   // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4245[0x1];                                     // 0x00FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSkillId;                      // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InDisarm;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4246[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0108(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4247[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0120(0x0018)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4248[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0158(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0170(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsArtsAssetLoadRequested;       // 0x0174(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4249[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, bool IsArtsAssetLoadRequested)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, bool IsArtsAssetLoadRequested)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_424A[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerArtsComponent*                 CallFunc_GetPlayerArtsComponent_ReturnValue_2;     // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_424B[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_424C[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerArtsComponent*                 CallFunc_GetPlayerArtsComponent_ReturnValue_3;     // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_424D[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, bool IsArtsAssetLoadRequested)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_ComponentBoundEvent_InSelectedSkillTypeId;  // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InSelectedSkillId;      // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped; // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillAbilityType                           CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType; // 0x01ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424E[0x2];                                     // 0x01EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId; // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue;             // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_424F[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIfTacticalSkillOrAbilityIsActive_ReturnValue; // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4250[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0220(0x0018)()
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSubPaletteReleased_ReturnValue;         // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues K2Node_CustomEvent_InUnchangeableRetValue;         // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           K2Node_CustomEvent_InBattleSetInfoType;            // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4251[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4252[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4253[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0260(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4254[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeSkill_ReturnValue;                  // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4255[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0298(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4256[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02B8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4257[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0300(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsBlock_1;                    // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x030A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4258[0x1];                                     // 0x030B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x030C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue; // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsBlock;                      // 0x031A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x031B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InPressedSwitchBtnId;   // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0320(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4259[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x0328(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x032D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x032E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x032F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425A[0x2];                                     // 0x0332(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_6;                               // 0x0334(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_5;      // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerArtsComponent*                 CallFunc_GetPlayerArtsComponent_ReturnValue_4;     // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_425B[0x2];                                     // 0x034A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x034C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x035C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x036C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsCharaDetailedStatusOpen_OutIsOpen;      // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x037D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_425C[0x2];                                     // 0x037E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x0380(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0384(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425D[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_9;                               // 0x038C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_6;      // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue_1; // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425E[0x1];                                     // 0x039B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_10;                              // 0x039C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InNewEquippedSkillId;           // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsDisarm;                     // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHideWindowAnimePlaying_OutIsPlaying;    // 0x03A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_425F[0x2];                                     // 0x03A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_1;  // 0x03AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x03AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x03AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_2;  // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x03B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4260[0x5];                                     // 0x03B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           K2Node_ComponentBoundEvent_InSelectedInfoItem;     // 0x03B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4261[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSkillId_OutSkillId;                    // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BattleSetInfoType                           Temp_byte_Variable;                                // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           K2Node_ComponentBoundEvent_InInfoType;             // 0x03CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4262[0x1];                                     // 0x03CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InSkillId;              // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x03D0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4263[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4264[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x03F0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0409(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x040A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x040B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 RetCode, bool IsArtsAssetLoadRequested)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x040C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4265[0x3];                                     // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_11;           // 0x0420(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_11;                              // 0x0430(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x0434(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4266[0x3];                                     // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_12;                              // 0x0438(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x043C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0440(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4267[0x3];                                     // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Temp_byte_Variable_1;                              // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0451(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4268[0x2];                                     // 0x0452(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_6;                           // 0x0454(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0468(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0480(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x04C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x04D0(0x0018)()
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet) == 0x0004E8, "Wrong size on SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, EntryPoint) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_bool_Variable) == 0x000005, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InSkillId_1) == 0x000008, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InSkillId_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InDisarm_1) == 0x00000C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InDisarm_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_bool_Variable_1) == 0x00000D, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_RetCode_1) == 0x000010, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBRetMessage_ReturnValue) == 0x000018, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_1) == 0x000054, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetTextFromAsset_ReturnValue) == 0x000068, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable) == 0x000090, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_2) == 0x000094, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000A8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0000B0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_1) == 0x0000B9, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetPlayerArtsComponent_ReturnValue) == 0x0000C0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetPlayerArtsComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_3) == 0x0000C9, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000CA, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000D0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000D8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_4) == 0x0000D9, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetPlayerArtsComponent_ReturnValue_1) == 0x0000E0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetPlayerArtsComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000E8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_5) == 0x0000F8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_RequestEquipPassiveSkill_ReturnValue) == 0x0000F9, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_RequestEquipPassiveSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_RequestUnequipPassiveSkill_ReturnValue) == 0x0000FA, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_RequestUnequipPassiveSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InSkillId) == 0x0000FC, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InDisarm) == 0x000100, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InDisarm' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000108, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_1) == 0x000118, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000120, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000138, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_6) == 0x000140, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000148, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000158, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_RetCode) == 0x000170, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_IsArtsAssetLoadRequested) == 0x000174, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_IsArtsAssetLoadRequested' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_4) == 0x000178, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000188, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_5) == 0x000190, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_7) == 0x0001A0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetPlayerArtsComponent_ReturnValue_2) == 0x0001A8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetPlayerArtsComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_8) == 0x0001B0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x0001B8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001C0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_9) == 0x0001C1, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetPlayerArtsComponent_ReturnValue_3) == 0x0001C8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetPlayerArtsComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_10) == 0x0001D0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001D4, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_ComponentBoundEvent_InSelectedSkillTypeId) == 0x0001E4, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_ComponentBoundEvent_InSelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_ComponentBoundEvent_InSelectedSkillId) == 0x0001E8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_ComponentBoundEvent_InSelectedSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped) == 0x0001EC, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType) == 0x0001ED, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId) == 0x0001F0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_2) == 0x0001F4, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetEquipedArtsId_ReturnValue) == 0x0001F8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetEquipedArtsId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Select_Default) == 0x0001FC, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_bool_Variable_2) == 0x000200, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000201, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000208, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_CheckIfTacticalSkillOrAbilityIsActive_ReturnValue) == 0x000218, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_CheckIfTacticalSkillOrAbilityIsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000220, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetClassType_ReturnValue) == 0x000238, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsSubPaletteReleased_ReturnValue) == 0x000239, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsSubPaletteReleased_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InUnchangeableRetValue) == 0x00023A, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InUnchangeableRetValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InBattleSetInfoType) == 0x00023B, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_SwitchEnum_CmpSuccess) == 0x00023C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Select_Default_1) == 0x000240, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000248, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Clamp_ReturnValue) == 0x000258, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000260, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Add_IntInt_ReturnValue) == 0x000278, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000280, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_ChangeSkill_ReturnValue) == 0x000290, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_ChangeSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000298, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002B0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_MakeStruct_FormatArgumentData) == 0x0002B8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002F8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Event_Animation) == 0x000300, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000308, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InIsBlock_1) == 0x000309, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InIsBlock_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_bool_Variable_3) == 0x00030A, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_3) == 0x00030C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x000310, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_11) == 0x000318, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue) == 0x000319, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InIsBlock) == 0x00031A, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InIsBlock' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Select_Default_2) == 0x00031B, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_ComponentBoundEvent_InPressedSwitchBtnId) == 0x00031C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_ComponentBoundEvent_InPressedSwitchBtnId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_4) == 0x000320, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000324, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_5) == 0x000328, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_SwitchEnum_CmpSuccess_1) == 0x00032C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00032D, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00032E, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Event_IsDesignTime) == 0x00032F, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_BooleanOR_ReturnValue) == 0x000330, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000331, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_6) == 0x000334, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_5) == 0x000338, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetPlayerArtsComponent_ReturnValue_4) == 0x000340, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetPlayerArtsComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_12) == 0x000348, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_13) == 0x000349, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_7) == 0x00034C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_8) == 0x00035C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_9) == 0x00036C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsCharaDetailedStatusOpen_OutIsOpen) == 0x00037C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsCharaDetailedStatusOpen_OutIsOpen' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_14) == 0x00037D, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_7) == 0x000380, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_8) == 0x000384, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000388, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_9) == 0x00038C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_6) == 0x000390, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_15) == 0x000398, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_SwitchEnum_CmpSuccess_2) == 0x000399, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue_1) == 0x00039A, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_10) == 0x00039C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InNewEquippedSkillId) == 0x0003A0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InNewEquippedSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CustomEvent_InIsDisarm) == 0x0003A4, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CustomEvent_InIsDisarm' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsHideWindowAnimePlaying_OutIsPlaying) == 0x0003A5, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsHideWindowAnimePlaying_OutIsPlaying' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Select_Default_3) == 0x0003A8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Not_PreBool_ReturnValue_1) == 0x0003AC, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_1) == 0x0003AD, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_bool_Variable_4) == 0x0003AE, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Not_PreBool_ReturnValue_2) == 0x0003AF, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Select_Default_4) == 0x0003B0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_2) == 0x0003B1, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Not_PreBool_ReturnValue_3) == 0x0003B2, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_ComponentBoundEvent_InSelectedInfoItem) == 0x0003B8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_ComponentBoundEvent_InSelectedInfoItem' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_16) == 0x0003C0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetSkillId_OutSkillId) == 0x0003C4, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetSkillId_OutSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0003C8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_byte_Variable) == 0x0003C9, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_ComponentBoundEvent_InInfoType) == 0x0003CA, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_ComponentBoundEvent_InInfoType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_ComponentBoundEvent_InSkillId) == 0x0003CC, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_ComponentBoundEvent_InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Select_Default_5) == 0x0003D0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0003D8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_17) == 0x0003E8, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0003F0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_18) == 0x000408, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000409, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_19) == 0x00040A, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00040B, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_10) == 0x00040C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_BooleanOR_ReturnValue_1) == 0x00041C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_CreateDelegate_OutputDelegate_11) == 0x000420, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_11) == 0x000430, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_IsValid_ReturnValue_20) == 0x000434, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_12) == 0x000438, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_13) == 0x00043C, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_int_Variable_14) == 0x000440, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetUIManager_IsValid) == 0x000444, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetUIManager_ReturnValue) == 0x000448, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, Temp_byte_Variable_1) == 0x000450, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Not_PreBool_ReturnValue_4) == 0x000451, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_Select_Default_6) == 0x000454, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000458, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000468, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_MakeStruct_FormatArgumentData_1) == 0x000480, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, K2Node_MakeArray_Array) == 0x0004C0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet, CallFunc_Format_ReturnValue) == 0x0004D0, "Member 'SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4269[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature, InInfoType) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature::InInfoType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature::InSkillId' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature final
{
public:
	class USkillInfoItemForBattleSet_C*           InSelectedInfoItem;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature, InSelectedInfoItem) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature::InSelectedInfoItem' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ChangeSkillResultProc
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc final
{
public:
	int32                                         InNewEquippedSkillId;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsDisarm;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc, InNewEquippedSkillId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc::InNewEquippedSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc, InIsDisarm) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc::InIsDisarm' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_PreConstruct");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on SkillStatusDescAndListForBattleSet_C_PreConstruct");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature final
{
public:
	int32                                         InPressedSwitchBtnId;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature) == 0x000004, "Wrong size on SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature, InPressedSwitchBtnId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature::InPressedSwitchBtnId' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UIInputBlockForSkillChange
// 0x0001 (0x0001 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange final
{
public:
	bool                                          InIsBlock;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange) == 0x000001, "Wrong size on SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange, InIsBlock) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange::InIsBlock' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UiInputBlock
// 0x0001 (0x0001 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_UiInputBlock final
{
public:
	bool                                          InIsBlock;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_UiInputBlock) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_UiInputBlock");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_UiInputBlock) == 0x000001, "Wrong size on SkillStatusDescAndListForBattleSet_C_UiInputBlock");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UiInputBlock, InIsBlock) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_UiInputBlock::InIsBlock' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_OnAnimationFinished) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_OnAnimationFinished");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_OnAnimationFinished) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_OnAnimationFinished");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnAnimationFinished, Animation) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog
// 0x0002 (0x0002 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog final
{
public:
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog) == 0x000002, "Wrong size on SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog, InUnchangeableRetValue) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog::InUnchangeableRetValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog, InBattleSetInfoType) == 0x000001, "Member 'SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog::InBattleSetInfoType' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature final
{
public:
	int32                                         InSelectedSkillTypeId;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelectedSkillId;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature, InSelectedSkillTypeId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature::InSelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature, InSelectedSkillId) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature::InSelectedSkillId' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTacticalSkillChangeCompleted
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsArtsAssetLoadRequested;                          // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted, RetCode) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted::RetCode' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted, IsArtsAssetLoadRequested) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted::IsArtsAssetLoadRequested' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.TacticalSkillChangeProc
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InDisarm;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc, InSkillId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc, InDisarm) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc::InDisarm' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnClassAbilityChangeCompleted
// 0x0004 (0x0004 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted) == 0x000004, "Wrong size on SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted, RetCode) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted::RetCode' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ClassAbilityChangeProc
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InDisarm;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc, InSkillId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc, InDisarm) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc::InDisarm' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowWindow
// 0x01A8 (0x01A8 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_ShowWindow final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InEquipClassType;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_426A[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillSlotId;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InClassAbilityTypeId;                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEquipmentTextId;                              // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             LocalCharaEquipType;                               // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_426B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             Temp_byte_Variable;                                // 0x001C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_426C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_426D[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_426E[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_6;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped; // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillAbilityType                           CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType; // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_426F[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4270[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_9;                               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4271[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_10;                              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           Temp_byte_Variable_1;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4272[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4273[0x1];                                     // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4274[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4275[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x00AC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x00B0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4276[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4277[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             Temp_byte_Variable_4;                              // 0x0100(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4278[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0120(0x0040)(HasGetValueTypeHash)
	ESBPlayerArtsType                             K2Node_Select_Default_6;                           // 0x0160(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4279[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_1;           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_427A[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_427B[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_ShowWindow) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_ShowWindow");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_ShowWindow) == 0x0001A8, "Wrong size on SkillStatusDescAndListForBattleSet_C_ShowWindow");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, InInfoType) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::InInfoType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, InEquipClassType) == 0x000001, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::InEquipClassType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, InSkillSlotId) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, InClassAbilityTypeId) == 0x000008, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::InClassAbilityTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, LocalEquipmentTextId) == 0x00000C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::LocalEquipmentTextId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, LocalCharaEquipType) == 0x000010, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::LocalCharaEquipType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable) == 0x000014, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_1) == 0x000018, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_byte_Variable) == 0x00001C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_2) == 0x000020, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_3) == 0x000024, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_PlaySE_ReturnValue) == 0x000028, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_4) == 0x00002C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_MakeLiteralInt_ReturnValue) == 0x000030, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000034, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00003C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Clamp_ReturnValue) == 0x000040, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Clamp_ReturnValue_1) == 0x000044, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_5) == 0x000048, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x00004C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000050, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetEquipedArtsId_ReturnValue) == 0x000054, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetEquipedArtsId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_6) == 0x00005C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_7) == 0x000060, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000064, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped) == 0x000065, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType) == 0x000066, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId) == 0x000068, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_8) == 0x00006C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Greater_IntInt_ReturnValue) == 0x000070, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000071, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_9) == 0x000074, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000079, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_int_Variable_10) == 0x00007C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_byte_Variable_1) == 0x000080, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_Select_Default) == 0x000084, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000088, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000089, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_BooleanOR_ReturnValue) == 0x00008A, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_Select_Default_1) == 0x00008C, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_byte_Variable_2) == 0x000091, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_1) == 0x000092, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_byte_Variable_3) == 0x000093, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_2) == 0x000094, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_bool_Variable) == 0x000095, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000098, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_3) == 0x0000A0, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_Select_Default_2) == 0x0000A1, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x0000A2, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_bool_Variable_1) == 0x0000A3, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_bool_Variable_2) == 0x0000A4, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_Select_Default_3) == 0x0000A8, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_Select_Default_4) == 0x0000AC, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_Select_Default_5) == 0x0000B0, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetLeftSideParameters_OutLeftSideParameters) == 0x0000B8, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetLeftSideParameters_OutLeftSideParameters' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_4) == 0x0000C0, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_5) == 0x0000C1, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C8, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000F0, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, Temp_byte_Variable_4) == 0x000100, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_MakeStruct_FormatArgumentData) == 0x000120, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_Select_Default_6) == 0x000160, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_MakeArray_Array) == 0x000168, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_GetEquipedArtsId_ReturnValue_1) == 0x000178, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_GetEquipedArtsId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_Format_ReturnValue) == 0x000180, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, K2Node_SwitchEnum_CmpSuccess_1) == 0x000198, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_6) == 0x000199, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_7) == 0x00019A, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00019B, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x0001A0, "Member 'SkillStatusDescAndListForBattleSet_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.HideWindow
// 0x0018 (0x0018 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_HideWindow final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_427C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_HideWindow) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_HideWindow");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_HideWindow) == 0x000018, "Wrong size on SkillStatusDescAndListForBattleSet_C_HideWindow");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_HideWindow, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_HideWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_HideWindow, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_HideWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillStatusDescAndListForBattleSet_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'SkillStatusDescAndListForBattleSet_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateEquippedSkillDesc
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc final
{
public:
	int32                                         InEquippedSkillId;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InForceUpdate;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc) == 0x000004, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc) == 0x000008, "Wrong size on SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc, InEquippedSkillId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc::InEquippedSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc, InForceUpdate) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc::InForceUpdate' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000005, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateSelectedSkillDesc
// 0x0020 (0x0020 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InForceUpdate;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_427D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEquipmentUniqueId;                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc) == 0x000020, "Wrong size on SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc, InSkillId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc, InForceUpdate) == 0x000004, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc::InForceUpdate' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc, InEquipmentUniqueId) == 0x000008, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc::InEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000019, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.SwitchStatusType
// 0x0048 (0x0048 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_SwitchStatusType final
{
public:
	int32                                         InStatusTypeId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_427E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkillStatusDescForBattleSet_C*> LocalSkillStatusDescArray;                         // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_427F[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillStatusDescForBattleSet_C*         CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4280[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkillStatusDescForBattleSet_C*> K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_SwitchStatusType");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType) == 0x000048, "Wrong size on SkillStatusDescAndListForBattleSet_C_SwitchStatusType");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, InStatusTypeId) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::InStatusTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, LocalSkillStatusDescArray) == 0x000008, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::LocalSkillStatusDescArray' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, Temp_int_Array_Index_Variable) == 0x000020, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, CallFunc_Array_Get_Item) == 0x000028, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_SwitchStatusType, K2Node_MakeArray_Array) == 0x000038, "Member 'SkillStatusDescAndListForBattleSet_C_SwitchStatusType::K2Node_MakeArray_Array' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus
// 0x0028 (0x0028 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus final
{
public:
	bool                                          InIncludesClassInfoUpdate;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4281[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      LocalLeftSideParameters;                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4282[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus) == 0x000008, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus) == 0x000028, "Wrong size on SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus, InIncludesClassInfoUpdate) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus::InIncludesClassInfoUpdate' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus, LocalLeftSideParameters) == 0x000008, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus::LocalLeftSideParameters' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus, CallFunc_GetLeftSideParameters_OutLeftSideParameters) == 0x000018, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus::CallFunc_GetLeftSideParameters_OutLeftSideParameters' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.GetBattleSetInfoType
// 0x0001 (0x0001 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType final
{
public:
	E_BattleSetInfoType                           OutBattleSetInfoType;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType) == 0x000001, "Wrong size on SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType, OutBattleSetInfoType) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType::OutBattleSetInfoType' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen
// 0x0004 (0x0004 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen final
{
public:
	bool                                          OutIsOpen;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen) == 0x000004, "Wrong size on SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen, OutIsOpen) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen::OutIsOpen' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000003, "Member 'SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying
// 0x0003 (0x0003 - 0x0000)
struct SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying final
{
public:
	bool                                          OutIsPlaying;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying) == 0x000001, "Wrong alignment on SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying");
static_assert(sizeof(SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying) == 0x000003, "Wrong size on SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying, OutIsPlaying) == 0x000000, "Member 'SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying::OutIsPlaying' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000002, "Member 'SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

