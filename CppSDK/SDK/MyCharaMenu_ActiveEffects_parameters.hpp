#pragma once

 

// Package: MyCharaMenu_ActiveEffects

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FreeBuffTypeToText_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.ExecuteUbergraph_MyCharaMenu_ActiveEffects
// 0x08B0 (0x08B0 - 0x0000)
struct MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMyCharaPioneerAbilityWidget*         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F7A[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Container_C*                    CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x0068(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F7B[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_5;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_6;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F7C[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F7D[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F7E[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Map_Find_Value;                           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F7F[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBCharaEquipType>                     K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	ESBCharaEquipType                             CallFunc_Array_Get_Item;                           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F80[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Map_Find_Value_1;                         // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F81[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0100(0x0118)(ConstParm)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F82[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0228(0x0118)(ConstParm)
	struct FSBCharacterWeaponPerkData             CallFunc_Array_Get_Item_1;                         // 0x0340(0x001C)(NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_GetAbilityEffectMasterData_IsExists;   // 0x035D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F83[0x2];                                     // 0x035E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_BP_GetAbilityEffectMasterData_ReturnValue; // 0x0360(0x0024)(NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F84[0x3];                                     // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFusionItemTextCollection_bIsValid;     // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F85[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetFusionItemTextCollection_ReturnValue;  // 0x03A0(0x0050)(ConstParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F86[0x3];                                     // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBSkillDataMasterData>         CallFunc_Get_Base_Skill_List;                      // 0x03F8(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0415(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F87[0x2];                                     // 0x0416(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F88[0x3];                                     // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_6;                  // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F89[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            CallFunc_GetLiquidMemoryInfos_ReturnValue;         // 0x0430(0x0010)(ConstParm, ReferenceParm)
	struct FSBLiquidMemoryInfo                    CallFunc_Array_Get_Item_2;                         // 0x0440(0x0028)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x046C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x046D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F8A[0x2];                                     // 0x046E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0474(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F8B[0x3];                                     // 0x0475(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F8C[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x0488(0x0038)()
	int32                                         Temp_int_Variable_1;                               // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F8D[0x3];                                     // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLiquidMemoryText_ReturnValue;          // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F8E[0x3];                                     // 0x04D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue; // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x04E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F8F[0x3];                                     // 0x04E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquippedPassiveSkill_ReturnValue;      // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F90[0x3];                                     // 0x04ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x04F0(0x0058)()
	class FString                                 CallFunc_GetClassPassiveSkillNameText_ReturnValue; // 0x0548(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0559(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x055A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F91[0x5];                                     // 0x055B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F92[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBActiveItemData>              CallFunc_GetActiveItems_BP_ReturnValue;            // 0x0578(0x0010)(ReferenceParm)
	class USBNetworkCafeMessageManager*           CallFunc_GetNetworkCafeMessageManager_ReturnValue; // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBActiveItemData                      CallFunc_Array_Get_Item_3;                         // 0x0590(0x0020)()
	bool                                          CallFunc_IsNetworkCafe_ReturnValue;                // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x05B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F93[0x6];                                     // 0x05B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x05B8(0x00D0)()
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x068C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EOutGameBuffType                              CallFunc_GetBuffType_ReturnValue;                  // 0x068D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F94[0x2];                                     // 0x068E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameBuffTypeText_ReturnValue;          // 0x0690(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_3;           // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F95[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_3;       // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBNetworkCafeBuffsMasterData>  CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue; // 0x06B0(0x0010)(ReferenceParm)
	struct FSBNetworkCafeBuffsMasterData          CallFunc_Array_Get_Item_4;                         // 0x06C0(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x06CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F96[0x3];                                     // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x06D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameBuffTypeText_ReturnValue_1;        // 0x06D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_7;                   // 0x06E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F97[0x4];                                     // 0x06EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_Array_Get_Item_5;                         // 0x06F0(0x0058)()
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x0748(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0760(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F98[0x7];                                     // 0x0761(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerFreeBuffPointComponent*        CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue; // 0x0768(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F99[0x7];                                     // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBFreeBuffPlayerBuffTimeInfo>  CallFunc_GetFreeBuffPlayerBuffTimeInfoLists_ReturnValue; // 0x0778(0x0010)(ConstParm, ReferenceParm)
	struct FSBFreeBuffPlayerBuffTimeInfo          CallFunc_Array_Get_Item_6;                         // 0x0788(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x07A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x07A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F9A[0x3];                                     // 0x07A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFreeBuffText_Text;                     // 0x07A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x07B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F9B[0x4];                                     // 0x07BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x07C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x07D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_7;                  // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x07E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F9C[0x3];                                     // 0x07E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x07E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F9D[0x4];                                     // 0x07EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x07F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x07F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x07FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_7;                // 0x07FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F9E[0x2];                                     // 0x07FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0800(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0808(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F9F[0x7];                                     // 0x0809(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWarehouseAbilityComponent*           CallFunc_GetWarehouseAbilityComponent_ReturnValue; // 0x0810(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0818(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA0[0x7];                                     // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FPioneerAbilityList> CallFunc_GetPioneerAbilityMap_ReturnValue;         // 0x0828(0x0050)()
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0878(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_7;                         // 0x0888(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_8;               // 0x0890(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FA1[0x4];                                     // 0x0894(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPioneerAbilityList                    CallFunc_Map_Find_Value_2;                         // 0x0898(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x08A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_8;                // 0x08A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects) == 0x000008, "Wrong alignment on MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects");
static_assert(sizeof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects) == 0x0008B0, "Wrong size on MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, EntryPoint) == 0x000000, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetClassLevel_ReturnValue) == 0x000004, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable) == 0x000018, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable_2) == 0x000038, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable_2) == 0x000048, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable_3) == 0x00004C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_2) == 0x000050, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_3) == 0x000054, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable_3) == 0x000058, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable_4) == 0x00005C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable_4) == 0x000060, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_4) == 0x000064, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_byte_Variable) == 0x000068, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable_5) == 0x00006C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable_5) == 0x000070, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_5) == 0x000074, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable_6) == 0x000078, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_bool_Has_Been_Initd_Variable) == 0x00007C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetPlayerManager_ReturnValue) == 0x000080, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000088, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000098, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_MakeLiteralBool_ReturnValue) == 0x0000A1, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsValid_ReturnValue_2) == 0x0000A2, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Map_Find_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_IsValid) == 0x0000B9, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000C0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, K2Node_MakeArray_Array) == 0x0000C8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue) == 0x0000DC, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetEquipmentBag_ReturnValue) == 0x0000E0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Map_Find_Value_1) == 0x0000E8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Map_Find_ReturnValue_1) == 0x0000F8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000F9, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000100, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x000218, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000220, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000228, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item_1) == 0x000340, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00035C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_GetAbilityEffectMasterData_IsExists) == 0x00035D, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_GetAbilityEffectMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_GetAbilityEffectMasterData_ReturnValue) == 0x000360, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_GetAbilityEffectMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000384, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000388, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetFusionItemTextCollection_bIsValid) == 0x000398, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetFusionItemTextCollection_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetFusionItemTextCollection_ReturnValue) == 0x0003A0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetFusionItemTextCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_1) == 0x0003F0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue) == 0x0003F4, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Get_Base_Skill_List) == 0x0003F8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Get_Base_Skill_List' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Variable) == 0x000408, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_2) == 0x00040C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_6) == 0x000410, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Conv_IntToByte_ReturnValue) == 0x000414, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000415, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000418, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetNetworkDataCache_IsValid) == 0x00041C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000420, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable_6) == 0x000428, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetLiquidMemoryInfos_ReturnValue) == 0x000430, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetLiquidMemoryInfos_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item_2) == 0x000440, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_3) == 0x000468, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_1) == 0x00046C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_2) == 0x00046D, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_7) == 0x000470, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_IsValid_1) == 0x000474, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000478, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x000480, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x000488, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Variable_1) == 0x0004C0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0004C4, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetLiquidMemoryText_ReturnValue) == 0x0004C8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetLiquidMemoryText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetValidValue_ReturnValue) == 0x0004D8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue) == 0x0004DC, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0004E0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, K2Node_SwitchEnum_CmpSuccess) == 0x0004E4, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetEquippedPassiveSkill_ReturnValue) == 0x0004E8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetEquippedPassiveSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_FindSkillDataMaster_bIsValid) == 0x0004EC, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0004F0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetClassPassiveSkillNameText_ReturnValue) == 0x000548, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetClassPassiveSkillNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000558, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000559, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_bool_IsClosed_Variable) == 0x00055A, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000560, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_IsValid_2) == 0x000568, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x000570, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetActiveItems_BP_ReturnValue) == 0x000578, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetActiveItems_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetNetworkCafeMessageManager_ReturnValue) == 0x000588, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetNetworkCafeMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item_3) == 0x000590, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsNetworkCafe_ReturnValue) == 0x0005B0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsNetworkCafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetItemMasterData_IsExists) == 0x0005B1, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetItemMasterData_ReturnValue) == 0x0005B8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_4) == 0x000688, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_3) == 0x00068C, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetBuffType_ReturnValue) == 0x00068D, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetBuffType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetGameBuffTypeText_ReturnValue) == 0x000690, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetGameBuffTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_IsValid_3) == 0x0006A0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterDataManager_ReturnValue_3) == 0x0006A8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterDataManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue) == 0x0006B0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item_4) == 0x0006C0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_5) == 0x0006CC, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_4) == 0x0006D0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_FTrunc_ReturnValue) == 0x0006D4, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetGameBuffTypeText_ReturnValue_1) == 0x0006D8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetGameBuffTypeText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Array_Index_Variable_7) == 0x0006E8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Array_Index_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item_5) == 0x0006F0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x000748, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetSBPlayerController_ReturnValue) == 0x000758, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsValid_ReturnValue_3) == 0x000760, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue) == 0x000768, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsValid_ReturnValue_4) == 0x000770, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetFreeBuffPlayerBuffTimeInfoLists_ReturnValue) == 0x000778, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetFreeBuffPlayerBuffTimeInfoLists_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item_6) == 0x000788, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_6) == 0x0007A0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_5) == 0x0007A4, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetFreeBuffText_Text) == 0x0007A8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetFreeBuffText_Text' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_7) == 0x0007B8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Conv_IntToString_ReturnValue) == 0x0007C0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Concat_StrStr_ReturnValue) == 0x0007D0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, Temp_int_Loop_Counter_Variable_7) == 0x0007E0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::Temp_int_Loop_Counter_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_6) == 0x0007E4, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Add_IntInt_ReturnValue_8) == 0x0007E8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetPlayerController_ReturnValue) == 0x0007F0, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_MakeLiteralInt_ReturnValue) == 0x0007F8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsValid_ReturnValue_5) == 0x0007FC, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_7) == 0x0007FD, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000800, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, K2Node_DynamicCast_bSuccess_1) == 0x000808, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetWarehouseAbilityComponent_ReturnValue) == 0x000810, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetWarehouseAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000818, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_IsValid_ReturnValue_6) == 0x000820, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_GetPioneerAbilityMap_ReturnValue) == 0x000828, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_GetPioneerAbilityMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Map_Keys_Keys) == 0x000878, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Get_Item_7) == 0x000888, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Array_Length_ReturnValue_8) == 0x000890, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Map_Find_Value_2) == 0x000898, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Map_Find_ReturnValue_2) == 0x0008A8, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects, CallFunc_Less_IntInt_ReturnValue_8) == 0x0008A9, "Member 'MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects::CallFunc_Less_IntInt_ReturnValue_8' has a wrong offset!");

// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Unique Ids
// 0x0050 (0x0050 - 0x0000)
struct MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FA2[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             CallFunc_Array_Get_Item;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA3[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0028(0x0028)(ConstParm)
};
static_assert(alignof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids) == 0x000008, "Wrong alignment on MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids");
static_assert(sizeof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids) == 0x000050, "Wrong size on MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, K2Node_MakeArray_Array) == 0x000010, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, CallFunc_Array_Get_Item) == 0x000024, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000028, "Member 'MyCharaMenu_ActiveEffects_C_Collect_Unique_Ids::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Add Lists
// 0x0058 (0x0058 - 0x0000)
struct MyCharaMenu_ActiveEffects_C_Add_Lists final
{
public:
	class UVerticalBox*                           Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowTooltip;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA4[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_Name;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FA5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_ToolTipText;                                 // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ValueVisible;                                      // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Active_C*                       CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA7[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ActiveEffects_C_Add_Lists) == 0x000008, "Wrong alignment on MyCharaMenu_ActiveEffects_C_Add_Lists");
static_assert(sizeof(MyCharaMenu_ActiveEffects_C_Add_Lists) == 0x000058, "Wrong size on MyCharaMenu_ActiveEffects_C_Add_Lists");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, Target) == 0x000000, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::Target' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, IsShowTooltip) == 0x000008, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::IsShowTooltip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, Param_Name) == 0x000010, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::Param_Name' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, Value) == 0x000020, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, Param_ToolTipText) == 0x000028, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::Param_ToolTipText' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, ValueVisible) == 0x000038, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::ValueVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, CallFunc_Create_ReturnValue) == 0x000040, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_Add_Lists, CallFunc_AddChild_ReturnValue) == 0x000050, "Member 'MyCharaMenu_ActiveEffects_C_Add_Lists::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByFloatValue
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_ActiveEffects_C_AddListsByFloatValue final
{
public:
	class UVerticalBox*                           Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ValueVisible;                                      // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA8[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Active_C*                       CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue) == 0x000008, "Wrong alignment on MyCharaMenu_ActiveEffects_C_AddListsByFloatValue");
static_assert(sizeof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue) == 0x000038, "Wrong size on MyCharaMenu_ActiveEffects_C_AddListsByFloatValue");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue, Target) == 0x000000, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByFloatValue::Target' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue, Param_Name) == 0x000008, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByFloatValue::Param_Name' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue, Value) == 0x000018, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByFloatValue::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue, ValueVisible) == 0x00001C, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByFloatValue::ValueVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue, CallFunc_Create_ReturnValue) == 0x000020, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByFloatValue::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByFloatValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByFloatValue, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByFloatValue::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByDateTime
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_ActiveEffects_C_AddListsByDateTime final
{
public:
	class UVerticalBox*                           Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              Value;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideYear;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ValueVisible;                                      // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FAA[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Active_C*                       CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FAB[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime) == 0x000008, "Wrong alignment on MyCharaMenu_ActiveEffects_C_AddListsByDateTime");
static_assert(sizeof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime) == 0x000040, "Wrong size on MyCharaMenu_ActiveEffects_C_AddListsByDateTime");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, Target) == 0x000000, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::Target' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, Param_Name) == 0x000008, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::Param_Name' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, Value) == 0x000018, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, bHideYear) == 0x000020, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::bHideYear' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, ValueVisible) == 0x000021, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::ValueVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_AddListsByDateTime, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'MyCharaMenu_ActiveEffects_C_AddListsByDateTime::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.GetFreeBuffText
// 0x0090 (0x0090 - 0x0000)
struct MyCharaMenu_ActiveEffects_C_GetFreeBuffText final
{
public:
	ESBFreeBuffPointType                          Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FAC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FAD[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FAE[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0048(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFreeBuffTypeToText                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FAF[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FB0[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText) == 0x000008, "Wrong alignment on MyCharaMenu_ActiveEffects_C_GetFreeBuffText");
static_assert(sizeof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText) == 0x000090, "Wrong size on MyCharaMenu_ActiveEffects_C_GetFreeBuffText");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, Type) == 0x000000, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::Type' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, Text) == 0x000008, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::Text' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, Temp_int_Array_Index_Variable) == 0x000028, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000048, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_Array_Get_Item) == 0x000058, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_GetDataTableRowFromName_OutRow) == 0x000064, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x00006C, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_Less_IntInt_ReturnValue) == 0x00006D, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000078, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ActiveEffects_C_GetFreeBuffText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'MyCharaMenu_ActiveEffects_C_GetFreeBuffText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

