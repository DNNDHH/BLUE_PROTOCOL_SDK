#pragma once

 

// Package: BattleSetTopInfoForStorageMode

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.SetupBattleCordeInfo
// 0x0430 (0x0430 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSetupByCurrentEquip;                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsStorageMode;                                   // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerPresetEquipItem                      LocalPresetEquipItem;                              // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_832A[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBPlayerPresetEquipItem>              LocalTopInfoItems;                                 // 0x0008(0x0010)(Edit, BlueprintVisible)
	ESBClassType                                  LocalClassType;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_832B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillId;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalArrayIndex;                                   // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalType;                                         // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalUniqueId;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalItemId;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_832C[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               LocalCordeItem;                                    // 0x0040(0x0028)(Edit, BlueprintVisible)
	TArray<struct FSBPlayerPresetEquipItem>       LocalCordeItemArray;                               // 0x0068(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalImagineSlotId;                                // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEquipItemId;                                  // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalEquipItemUniqueId;                            // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_832D[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     LocalCharaEquipTypes;                              // 0x0098(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 LocalClassAbililtySkillIdArrayForCorde;            // 0x00A8(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 LocalTacticalSkillIdArrayForCorde;                 // 0x00B8(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalULTSkillIdForCorde;                           // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_832E[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LocalRegularSkillIdArrayForCorde;                  // 0x00D0(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         LocalInnerImagineUniqueIdArrayForCorde;            // 0x00E0(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         LocalBattleImagineUniqueIdArrayForCorde;           // 0x00F0(0x0010)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueIdForCorde;                       // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalWeaponItemIdForCorde;                         // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsStorageMode;                                // 0x0114(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalSetupByCurrentEquip;                          // 0x0115(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_832F[0x2];                                     // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalCordeId;                                      // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPresetEquipItem                      CallFunc_Array_Get_Item;                           // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8330[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8331[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             CallFunc_Array_Get_Item_1;                         // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8332[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0148(0x0010)(ReferenceParm)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8333[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     K2Node_MakeArray_Array_1;                          // 0x0160(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8334[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0178(0x0028)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8335[0x1];                                     // 0x01A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x01B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x01B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<ESBPlayerPresetEquipItem>              K2Node_MakeArray_Array_2;                          // 0x01B8(0x0010)(ReferenceParm)
	struct FSBPlayerPresetEquipItem               CallFunc_Array_Get_Item_2;                         // 0x01C8(0x0028)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8336[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x01F8(0x00B0)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid_1;              // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8337[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster_1;          // 0x02B0(0x00B0)()
	ESBClassType                                  CallFunc_GetClassTypeFromWeaponId_OutClassType;    // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8338[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x036A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8339[0x1];                                     // 0x036B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0372(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_833A[0x1];                                     // 0x0373(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x037A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_833B[0x1];                                     // 0x037B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue;             // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_1;           // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_833C[0x3];                                     // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_2;           // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_3;           // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveArtsSlotType                  Temp_byte_Variable;                                // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_833D[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_833E[0x3];                                     // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x03B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_4;        // 0x03B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_7;                // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_833F[0x6];                                     // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_GetPlayerPresetEquipItem_OutParam;        // 0x03C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetPlayerPresetEquipItem_ReturnValue;     // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_5;                               // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_4;           // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_8;               // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8340[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassAbilitySlotCnt_OutSlotCnt;        // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTacticalSkillSlotCnt_OutSlotCnt;       // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInnerImagineSlotCnt_OutSlotCnt;        // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBattleImagineSlotCnt_OutSlotCnt;       // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRegularSkillSlotCnt_OutSlotCnt;        // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8341[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveArtsSlotType                  Temp_byte_Variable_1;                              // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8342[0x3];                                     // 0x040D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_9;               // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_8;                // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_5;        // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_6;        // 0x041B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_10;              // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_9;                // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x0421(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0422(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8343[0x1];                                     // 0x0423(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRegularAndULTSkillIdByClassType_OutRegularMainSkillId; // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRegularAndULTSkillIdByClassType_OutRegularSubSkillId; // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRegularAndULTSkillIdByClassType_OutULTSkillId; // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo) == 0x000008, "Wrong alignment on BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo) == 0x000430, "Wrong size on BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, InCordeId) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, InSetupByCurrentEquip) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::InSetupByCurrentEquip' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, InIsStorageMode) == 0x000005, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalPresetEquipItem) == 0x000006, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalPresetEquipItem' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalTopInfoItems) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalTopInfoItems' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalClassType) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalClassType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalSkillId) == 0x00001C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalArrayIndex) == 0x000020, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalArrayIndex' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalType) == 0x000024, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalUniqueId) == 0x000028, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalItemId) == 0x000038, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalItemId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalCordeItem) == 0x000040, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalCordeItem' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalCordeItemArray) == 0x000068, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalCordeItemArray' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalImagineSlotId) == 0x000078, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalImagineSlotId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalEquipItemId) == 0x00007C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalEquipItemId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalEquipItemUniqueId) == 0x000080, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalEquipItemUniqueId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalEquipType) == 0x000090, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalEquipType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalCharaEquipTypes) == 0x000098, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalCharaEquipTypes' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalClassAbililtySkillIdArrayForCorde) == 0x0000A8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalClassAbililtySkillIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalTacticalSkillIdArrayForCorde) == 0x0000B8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalTacticalSkillIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalULTSkillIdForCorde) == 0x0000C8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalULTSkillIdForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalRegularSkillIdArrayForCorde) == 0x0000D0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalRegularSkillIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalInnerImagineUniqueIdArrayForCorde) == 0x0000E0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalInnerImagineUniqueIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalBattleImagineUniqueIdArrayForCorde) == 0x0000F0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalBattleImagineUniqueIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalWeaponUniqueIdForCorde) == 0x000100, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalWeaponUniqueIdForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalWeaponItemIdForCorde) == 0x000110, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalWeaponItemIdForCorde' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalIsStorageMode) == 0x000114, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalSetupByCurrentEquip) == 0x000115, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalSetupByCurrentEquip' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, LocalCordeId) == 0x000118, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Loop_Counter_Variable) == 0x00011C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000120, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Array_Index_Variable) == 0x000124, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Get_Item) == 0x000128, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000134, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Array_Index_Variable_1) == 0x000138, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable) == 0x00013C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_MakeArray_Array) == 0x000148, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_MakeLiteralInt_ReturnValue) == 0x000158, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_MakeArray_Array_1) == 0x000160, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000170, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable_1) == 0x000174, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000178, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001A0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x0001A4, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A5, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x0001A6, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0001A8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable_2) == 0x0001AC, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_2) == 0x0001B0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0001B4, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0001B5, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetValidValue_ReturnValue) == 0x0001B6, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x0001B7, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_MakeArray_Array_2) == 0x0001B8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Get_Item_2) == 0x0001C8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_FindWeaponMaster_bIsValid) == 0x0001F0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_FindWeaponMaster_WeaponMaster) == 0x0001F8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_FindWeaponMaster_bIsValid_1) == 0x0002A8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_FindWeaponMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_FindWeaponMaster_WeaponMaster_1) == 0x0002B0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_FindWeaponMaster_WeaponMaster_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetClassTypeFromWeaponId_OutClassType) == 0x000360, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetClassTypeFromWeaponId_OutClassType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_3) == 0x000364, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x000368, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000369, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_BooleanAND_ReturnValue) == 0x00036A, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_4) == 0x00036C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_3) == 0x000370, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000371, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_BooleanAND_ReturnValue_1) == 0x000372, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_5) == 0x000374, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000378, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_4) == 0x000379, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_BooleanAND_ReturnValue_2) == 0x00037A, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetEquipedArtsId_ReturnValue) == 0x00037C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetEquipedArtsId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetEquipedArtsId_ReturnValue_1) == 0x000380, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetEquipedArtsId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_MakeLiteralBool_ReturnValue) == 0x000384, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetEquipedArtsId_ReturnValue_2) == 0x000388, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetEquipedArtsId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetEquipedArtsId_ReturnValue_3) == 0x00038C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetEquipedArtsId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_byte_Variable) == 0x000390, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_Select_Default) == 0x000394, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Loop_Counter_Variable_1) == 0x000398, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable_3) == 0x00039C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_5) == 0x0003A0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x0003A4, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable_4) == 0x0003A8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_6) == 0x0003AC, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_6) == 0x0003B0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x0003B1, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_BooleanAND_ReturnValue_3) == 0x0003B2, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_4) == 0x0003B3, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_7) == 0x0003B4, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_7) == 0x0003B8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_BooleanAND_ReturnValue_4) == 0x0003B9, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetPlayerPresetEquipItem_OutParam) == 0x0003C0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetPlayerPresetEquipItem_OutParam' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetPlayerPresetEquipItem_ReturnValue) == 0x0003D0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_IsValid_ReturnValue) == 0x0003D1, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_IsValid_ReturnValue_1) == 0x0003D2, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_IsValid_ReturnValue_2) == 0x0003D3, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable_5) == 0x0003D4, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable_6) == 0x0003D8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetEquipedArtsId_ReturnValue_4) == 0x0003DC, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetEquipedArtsId_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_8) == 0x0003E0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x0003E4, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0003E8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Add_IntInt_ReturnValue_3) == 0x0003EC, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetClassAbilitySlotCnt_OutSlotCnt) == 0x0003F0, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetClassAbilitySlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetTacticalSkillSlotCnt_OutSlotCnt) == 0x0003F4, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetTacticalSkillSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetInnerImagineSlotCnt_OutSlotCnt) == 0x0003F8, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetInnerImagineSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetBattleImagineSlotCnt_OutSlotCnt) == 0x0003FC, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetBattleImagineSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetRegularSkillSlotCnt_OutSlotCnt) == 0x000400, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetRegularSkillSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_IsValid_ReturnValue_3) == 0x000404, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_int_Variable_7) == 0x000408, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, Temp_byte_Variable_1) == 0x00040C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_9) == 0x000410, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_Select_Default_1) == 0x000414, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_8) == 0x000418, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_5) == 0x000419, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_BooleanAND_ReturnValue_5) == 0x00041A, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_6) == 0x00041B, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Array_Length_ReturnValue_10) == 0x00041C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Array_Length_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_Less_IntInt_ReturnValue_9) == 0x000420, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_Less_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_BooleanAND_ReturnValue_6) == 0x000421, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, K2Node_SwitchEnum_CmpSuccess_2) == 0x000422, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetRegularAndULTSkillIdByClassType_OutRegularMainSkillId) == 0x000424, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetRegularAndULTSkillIdByClassType_OutRegularMainSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetRegularAndULTSkillIdByClassType_OutRegularSubSkillId) == 0x000428, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetRegularAndULTSkillIdByClassType_OutRegularSubSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo, CallFunc_GetRegularAndULTSkillIdByClassType_OutULTSkillId) == 0x00042C, "Member 'BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo::CallFunc_GetRegularAndULTSkillIdByClassType_OutULTSkillId' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetBattleImagineSlotCnt
// 0x0020 (0x0020 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8344[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt) == 0x000008, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt) == 0x000020, "Wrong size on BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt, OutSlotCnt) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt, K2Node_MakeArray_Array) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetInnerImagineSlotCnt
// 0x0034 (0x0034 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCnt;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8345[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8346[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt) == 0x000004, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt) == 0x000034, "Wrong size on BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, OutSlotCnt) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, LocalCnt) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::LocalCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, Temp_int_Variable) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, Temp_int_Variable_1) == 0x00000C, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, Temp_int_Variable_2) == 0x000020, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_MakeLiteralInt_ReturnValue) == 0x000024, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt, CallFunc_MakeLiteralBool_ReturnValue) == 0x000030, "Member 'BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularSkillSlotCnt
// 0x0020 (0x0020 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8347[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBSkillType>                          K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt) == 0x000008, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt) == 0x000020, "Wrong size on BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt, OutSlotCnt) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt, K2Node_MakeArray_Array) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetTacticalSkillSlotCnt
// 0x0030 (0x0030 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCnt;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8348[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8349[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt) == 0x000004, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt) == 0x000030, "Wrong size on BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, OutSlotCnt) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, LocalCnt) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::LocalCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, Temp_int_Variable) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, Temp_int_Variable_1) == 0x00000C, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, Temp_int_Variable_2) == 0x000020, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_MakeLiteralInt_ReturnValue) == 0x000024, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_MakeLiteralBool_ReturnValue) == 0x000028, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassAbilitySlotCnt
// 0x0030 (0x0030 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCnt;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_834A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_834B[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt) == 0x000004, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt) == 0x000030, "Wrong size on BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, OutSlotCnt) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, LocalCnt) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::LocalCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, Temp_int_Variable) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, Temp_int_Variable_1) == 0x00000C, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, Temp_int_Variable_2) == 0x000020, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_MakeLiteralInt_ReturnValue) == 0x000024, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_MakeLiteralBool_ReturnValue) == 0x000028, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetIsWeaponLost
// 0x0003 (0x0003 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetIsWeaponLost final
{
public:
	bool                                          OutIsWeaponLost;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsWeaponLost_OutIsLost;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetIsWeaponLost) == 0x000001, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetIsWeaponLost");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetIsWeaponLost) == 0x000003, "Wrong size on BattleSetTopInfoForStorageMode_C_GetIsWeaponLost");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetIsWeaponLost, OutIsWeaponLost) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetIsWeaponLost::OutIsWeaponLost' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetIsWeaponLost, CallFunc_GetIsWeaponLost_OutIsLost) == 0x000001, "Member 'BattleSetTopInfoForStorageMode_C_GetIsWeaponLost::CallFunc_GetIsWeaponLost_OutIsLost' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetIsWeaponLost, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BattleSetTopInfoForStorageMode_C_GetIsWeaponLost::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularAndULTSkillIdByClassType
// 0x0278 (0x0278 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_834C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutRegularMainSkillId;                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutRegularSubSkillId;                              // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutULTSkillId;                                     // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_834D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalRowNames;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             LocalSkillDataTable;                               // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalULTSkillId;                                   // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRegularSubSkillId;                            // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRegularMainSkillId;                           // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  CallFunc_GetSkillType_ReturnValue;                 // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_834E[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerSkillData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x0180)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_834F[0x6];                                     // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x01E0(0x0058)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8350[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8351[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8352[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetSkillDataTable_ReturnValue;            // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8353[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0268(0x0010)(ReferenceParm)
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType) == 0x000008, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType) == 0x000278, "Wrong size on BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, InClassType) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::InClassType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, OutRegularMainSkillId) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::OutRegularMainSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, OutRegularSubSkillId) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::OutRegularSubSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, OutULTSkillId) == 0x00000C, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::OutULTSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, LocalSkillId) == 0x000010, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::LocalSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, LocalRowNames) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::LocalRowNames' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, LocalSkillDataTable) == 0x000028, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::LocalSkillDataTable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, LocalClassLevel) == 0x000030, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, LocalULTSkillId) == 0x000034, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::LocalULTSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, LocalRegularSubSkillId) == 0x000038, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::LocalRegularSubSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, LocalRegularMainSkillId) == 0x00003C, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::LocalRegularMainSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000044, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_Array_Get_Item) == 0x000048, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetSkillType_ReturnValue) == 0x000054, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetSkillType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, K2Node_SwitchEnum_CmpSuccess) == 0x000055, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001D8, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_FindSkillDataMaster_bIsValid) == 0x0001D9, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0001E0, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, Temp_int_Loop_Counter_Variable) == 0x000238, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_Less_IntInt_ReturnValue) == 0x00023C, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_Add_IntInt_ReturnValue) == 0x000240, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetPlayerManager_ReturnValue) == 0x000248, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_IsValid_ReturnValue) == 0x000250, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetSkillDataTable_ReturnValue) == 0x000258, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_IsValid_ReturnValue_1) == 0x000260, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000268, "Member 'BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassTypeFromWeaponId
// 0x00C8 (0x00C8 - 0x0000)
struct BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  OutClassType;                                      // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8354[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8355[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0018(0x00B0)()
};
static_assert(alignof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId) == 0x000008, "Wrong alignment on BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId");
static_assert(sizeof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId) == 0x0000C8, "Wrong size on BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId, InWeaponID) == 0x000000, "Member 'BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId::InWeaponID' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId, OutClassType) == 0x000004, "Member 'BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId::OutClassType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId, CallFunc_GetWeaponMasterData_IsExists) == 0x000010, "Member 'BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000018, "Member 'BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");

}

