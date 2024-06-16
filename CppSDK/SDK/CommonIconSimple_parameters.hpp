#pragma once

 

// Package: CommonIconSimple

#include "Basic.hpp"

#include "ST_RewardItemIcon_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ToolTipType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CommonIconSimple.CommonIconSimple_C.ExecuteUbergraph_CommonIconSimple
// 0x07D0 (0x07D0 - 0x0000)
struct CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DAD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DAE[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7DAF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_TextureReference;               // 0x0038(0x0028)(ConstParm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DB0[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_NowLoadTexture;                 // 0x0068(0x0028)(HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DB1[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DB2[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character_1;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue_1;                  // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DB3[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InIndex;                        // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InUniqueId;                     // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character_2;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DB4[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_3;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue_2;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DB5[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character_3;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue_3;                  // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DB6[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0118(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DB7[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DB8[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DB9[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x0168(0x0070)()
	int32                                         K2Node_CustomEvent_InItemIndex_3;                  // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDetailsMode;                  // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DBA[0x3];                                     // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InItemUniqueId;                 // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InStorageNumber;                // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DBB[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x01F8(0x00B0)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture_1;      // 0x02A8(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_2; // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DBC[0x5];                                     // 0x02D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_StampId_1;                      // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DBD[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampData                           CallFunc_FindStampData_Data;                       // 0x02F0(0x0088)()
	bool                                          CallFunc_FindStampData_ReturnValue;                // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x037A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     K2Node_CustomEvent_Selection;                      // 0x037B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemIndex_2;                  // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemIndex_1;                  // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bDisplayLockIcon_1;             // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0385(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DBE[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_4;         // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character_4;       // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue_4;                  // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable;                                // 0x039B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_3;           // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DBF[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_3;       // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_4;           // 0x03AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DC0[0x5];                                     // 0x03AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_4;       // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DC1[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x03C0(0x0088)()
	ESBCharacterGender                            Temp_byte_Variable_2;                              // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_CustomEvent_RewardItemType;                 // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DC2[0x2];                                     // 0x044A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InImagineItemId;                // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageNumber;                  // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DC3[0x4];                                     // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetRewardItemIcon_Icon;                   // 0x0468(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DC4[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0498(0x00B0)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture_2;      // 0x0548(0x0028)(HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CategoryId;                     // 0x0570(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DC5[0x4];                                     // 0x0574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryData                   CallFunc_FindStampCategoryData_Data;               // 0x0578(0x0038)()
	bool                                          CallFunc_FindStampCategoryData_ReturnValue;        // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DC6[0x3];                                     // 0x05B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_id_4;                           // 0x05B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x05B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DC7[0x4];                                     // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture;              // 0x05C0(0x0028)(HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_CustomEvent_Type;                           // 0x05E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DC8[0x3];                                     // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_id_3;                           // 0x05EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_3;                              // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DC9[0x3];                                     // 0x05F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_id_2;                           // 0x05F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            K2Node_Select_Default;                             // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DCA[0x3];                                     // 0x05F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x05FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemAmount;                   // 0x0600(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bDisplayLockIcon;               // 0x0604(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsUnidentified;                 // 0x0605(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DCB[0x2];                                     // 0x0606(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture_3;      // 0x0608(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DCC[0x7];                                     // 0x0631(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0638(0x00D0)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DCD[0x7];                                     // 0x0709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture_4;      // 0x0710(0x0028)(HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_id_1;                           // 0x0738(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StampId;                        // 0x073C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStampData                           CallFunc_FindStampData_Data_1;                     // 0x0740(0x0088)()
	bool                                          CallFunc_FindStampData_ReturnValue_1;              // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DCE[0x3];                                     // 0x07C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_id;                             // 0x07CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple) == 0x000008, "Wrong alignment on CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple");
static_assert(sizeof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple) == 0x0007D0, "Wrong size on CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, EntryPoint) == 0x000000, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, Temp_object_Variable) == 0x000008, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_Loaded) == 0x000010, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_IsValid_ReturnValue_1) == 0x000022, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_TextureReference) == 0x000038, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_TextureReference' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000060, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_NowLoadTexture) == 0x000068, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_NowLoadTexture' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000090, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_AsSBCreation_Character) == 0x000098, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetGender_ReturnValue) == 0x0000A1, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0000A8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_IsValid) == 0x0000B0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_AsSBCreation_Character_1) == 0x0000C0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_AsSBCreation_Character_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetGender_ReturnValue_1) == 0x0000C9, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetGender_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InIndex) == 0x0000CC, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InIndex' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InUniqueId) == 0x0000D0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x0000E0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_AsSBCreation_Character_2) == 0x0000E8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_AsSBCreation_Character_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_bSuccess_3) == 0x0000F0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetPlayerCharacter_ReturnValue_3) == 0x0000F8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetGender_ReturnValue_2) == 0x000100, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetGender_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_AsSBCreation_Character_3) == 0x000108, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_AsSBCreation_Character_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_bSuccess_4) == 0x000110, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetGender_ReturnValue_3) == 0x000111, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetGender_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000118, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_IsValid_1) == 0x000140, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000148, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_IsValid_2) == 0x000150, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x000158, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000160, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x000168, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InItemIndex_3) == 0x0001D8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InItemIndex_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_IsDetailsMode) == 0x0001DC, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_IsDetailsMode' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InItemUniqueId) == 0x0001E0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InItemUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InStorageNumber) == 0x0001F0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetWeaponMasterData_IsExists) == 0x0001F4, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0001F8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetItemIconTexture_OutIconTexture_1) == 0x0002A8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetItemIconTexture_OutIconTexture_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_Greater_IntInt_ReturnValue) == 0x0002D0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x0002D1, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_IsValidSoftObjectReference_ReturnValue_2) == 0x0002D2, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_IsValidSoftObjectReference_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_StampId_1) == 0x0002D8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_StampId_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_Conv_StringToInt_ReturnValue) == 0x0002E8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindStampData_Data) == 0x0002F0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindStampData_Data' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindStampData_ReturnValue) == 0x000378, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindStampData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_MakeLiteralByte_ReturnValue) == 0x000379, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00037A, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_Selection) == 0x00037B, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_Selection' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InItemIndex_2) == 0x00037C, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InItemIndex_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InItemIndex_1) == 0x000380, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InItemIndex_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_bDisplayLockIcon_1) == 0x000384, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_bDisplayLockIcon_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_SwitchEnum_CmpSuccess) == 0x000385, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetPlayerCharacter_ReturnValue_4) == 0x000388, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetPlayerCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_AsSBCreation_Character_4) == 0x000390, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_AsSBCreation_Character_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_DynamicCast_bSuccess_5) == 0x000398, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000399, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetGender_ReturnValue_4) == 0x00039A, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetGender_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, Temp_byte_Variable) == 0x00039B, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_IsValid_3) == 0x00039C, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_ReturnValue_3) == 0x0003A0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, Temp_byte_Variable_1) == 0x0003A8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_NotEqual_SoftObjectReference_ReturnValue) == 0x0003A9, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_NotEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_IsValid_4) == 0x0003AA, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetMasterDataManager_ReturnValue_4) == 0x0003B0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetMasterDataManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0003B8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0003C0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, Temp_byte_Variable_2) == 0x000448, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_RewardItemType) == 0x000449, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_RewardItemType' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InImagineItemId) == 0x00044C, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InImagineItemId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_UniqueId) == 0x000450, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_StorageNumber) == 0x000460, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_StorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetRewardItemIcon_Icon) == 0x000468, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetRewardItemIcon_Icon' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindMasterImagineData_IsExists) == 0x000490, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindMasterImagineData_ReturnValue) == 0x000498, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetItemIconTexture_OutIconTexture_2) == 0x000548, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetItemIconTexture_OutIconTexture_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_CategoryId) == 0x000570, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_CategoryId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindStampCategoryData_Data) == 0x000578, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindStampCategoryData_Data' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindStampCategoryData_ReturnValue) == 0x0005B0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindStampCategoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_id_4) == 0x0005B4, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_id_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_Amount) == 0x0005B8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetTokenIconTexture_Texture) == 0x0005C0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetTokenIconTexture_Texture' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_Type) == 0x0005E8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_id_3) == 0x0005EC, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_id_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, Temp_byte_Variable_3) == 0x0005F0, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_id_2) == 0x0005F4, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_id_2' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_Select_Default) == 0x0005F8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InItemIndex) == 0x0005FC, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_InItemAmount) == 0x000600, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_InItemAmount' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_bDisplayLockIcon) == 0x000604, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_bDisplayLockIcon' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_IsUnidentified) == 0x000605, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_IsUnidentified' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetItemIconTexture_OutIconTexture_3) == 0x000608, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetItemIconTexture_OutIconTexture_3' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetItemMasterData_IsExists) == 0x000630, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetItemMasterData_ReturnValue) == 0x000638, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000708, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_GetItemIconTexture_OutIconTexture_4) == 0x000710, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_GetItemIconTexture_OutIconTexture_4' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_id_1) == 0x000738, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_id_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_StampId) == 0x00073C, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_StampId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindStampData_Data_1) == 0x000740, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindStampData_Data_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, CallFunc_FindStampData_ReturnValue_1) == 0x0007C8, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::CallFunc_FindStampData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple, K2Node_CustomEvent_id) == 0x0007CC, "Member 'CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple::K2Node_CustomEvent_id' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconRecipeSet
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetIconRecipeSet final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconRecipeSet) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconRecipeSet");
static_assert(sizeof(CommonIconSimple_C_SetIconRecipeSet) == 0x000004, "Wrong size on CommonIconSimple_C_SetIconRecipeSet");
static_assert(offsetof(CommonIconSimple_C_SetIconRecipeSet, ID) == 0x000000, "Member 'CommonIconSimple_C_SetIconRecipeSet::ID' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconStampWithToolTip
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetIconStampWithToolTip final
{
public:
	int32                                         StampId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconStampWithToolTip) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconStampWithToolTip");
static_assert(sizeof(CommonIconSimple_C_SetIconStampWithToolTip) == 0x000004, "Wrong size on CommonIconSimple_C_SetIconStampWithToolTip");
static_assert(offsetof(CommonIconSimple_C_SetIconStampWithToolTip, StampId) == 0x000000, "Member 'CommonIconSimple_C_SetIconStampWithToolTip::StampId' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconLiquidMemory
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetIconLiquidMemory final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconLiquidMemory) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconLiquidMemory");
static_assert(sizeof(CommonIconSimple_C_SetIconLiquidMemory) == 0x000004, "Wrong size on CommonIconSimple_C_SetIconLiquidMemory");
static_assert(offsetof(CommonIconSimple_C_SetIconLiquidMemory, ID) == 0x000000, "Member 'CommonIconSimple_C_SetIconLiquidMemory::ID' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconItem
// 0x000C (0x000C - 0x0000)
struct CommonIconSimple_C_SetIconItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InItemAmount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisplayLockIcon;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsUnidentified;                                    // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconSimple_C_SetIconItem) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconItem");
static_assert(sizeof(CommonIconSimple_C_SetIconItem) == 0x00000C, "Wrong size on CommonIconSimple_C_SetIconItem");
static_assert(offsetof(CommonIconSimple_C_SetIconItem, InItemIndex) == 0x000000, "Member 'CommonIconSimple_C_SetIconItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconItem, InItemAmount) == 0x000004, "Member 'CommonIconSimple_C_SetIconItem::InItemAmount' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconItem, bDisplayLockIcon) == 0x000008, "Member 'CommonIconSimple_C_SetIconItem::bDisplayLockIcon' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconItem, IsUnidentified) == 0x000009, "Member 'CommonIconSimple_C_SetIconItem::IsUnidentified' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconAchivement
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetIconAchivement final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconAchivement) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconAchivement");
static_assert(sizeof(CommonIconSimple_C_SetIconAchivement) == 0x000004, "Wrong size on CommonIconSimple_C_SetIconAchivement");
static_assert(offsetof(CommonIconSimple_C_SetIconAchivement, ID) == 0x000000, "Member 'CommonIconSimple_C_SetIconAchivement::ID' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconRecipe
// 0x0008 (0x0008 - 0x0000)
struct CommonIconSimple_C_SetIconRecipe final
{
public:
	ESBRewardItemType                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DCF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconRecipe) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconRecipe");
static_assert(sizeof(CommonIconSimple_C_SetIconRecipe) == 0x000008, "Wrong size on CommonIconSimple_C_SetIconRecipe");
static_assert(offsetof(CommonIconSimple_C_SetIconRecipe, Type) == 0x000000, "Member 'CommonIconSimple_C_SetIconRecipe::Type' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconRecipe, ID) == 0x000004, "Member 'CommonIconSimple_C_SetIconRecipe::ID' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconToken
// 0x0008 (0x0008 - 0x0000)
struct CommonIconSimple_C_SetIconToken final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconToken) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconToken");
static_assert(sizeof(CommonIconSimple_C_SetIconToken) == 0x000008, "Wrong size on CommonIconSimple_C_SetIconToken");
static_assert(offsetof(CommonIconSimple_C_SetIconToken, ID) == 0x000000, "Member 'CommonIconSimple_C_SetIconToken::ID' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconToken, Amount) == 0x000004, "Member 'CommonIconSimple_C_SetIconToken::Amount' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconStampCategory
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetIconStampCategory final
{
public:
	int32                                         CategoryId;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconStampCategory) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconStampCategory");
static_assert(sizeof(CommonIconSimple_C_SetIconStampCategory) == 0x000004, "Wrong size on CommonIconSimple_C_SetIconStampCategory");
static_assert(offsetof(CommonIconSimple_C_SetIconStampCategory, CategoryId) == 0x000000, "Member 'CommonIconSimple_C_SetIconStampCategory::CategoryId' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconImagine
// 0x0020 (0x0020 - 0x0000)
struct CommonIconSimple_C_SetIconImagine final
{
public:
	int32                                         InImagineItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DD0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconImagine) == 0x000008, "Wrong alignment on CommonIconSimple_C_SetIconImagine");
static_assert(sizeof(CommonIconSimple_C_SetIconImagine) == 0x000020, "Wrong size on CommonIconSimple_C_SetIconImagine");
static_assert(offsetof(CommonIconSimple_C_SetIconImagine, InImagineItemId) == 0x000000, "Member 'CommonIconSimple_C_SetIconImagine::InImagineItemId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconImagine, UniqueId) == 0x000008, "Member 'CommonIconSimple_C_SetIconImagine::UniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconImagine, StorageNumber) == 0x000018, "Member 'CommonIconSimple_C_SetIconImagine::StorageNumber' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.Set RewardCategory
// 0x0001 (0x0001 - 0x0000)
struct CommonIconSimple_C_Set_RewardCategory final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_Set_RewardCategory) == 0x000001, "Wrong alignment on CommonIconSimple_C_Set_RewardCategory");
static_assert(sizeof(CommonIconSimple_C_Set_RewardCategory) == 0x000001, "Wrong size on CommonIconSimple_C_Set_RewardCategory");
static_assert(offsetof(CommonIconSimple_C_Set_RewardCategory, RewardItemType) == 0x000000, "Member 'CommonIconSimple_C_Set_RewardCategory::RewardItemType' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconCostume
// 0x0008 (0x0008 - 0x0000)
struct CommonIconSimple_C_SetIconCostume final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisplayLockIcon;                                  // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconSimple_C_SetIconCostume) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconCostume");
static_assert(sizeof(CommonIconSimple_C_SetIconCostume) == 0x000008, "Wrong size on CommonIconSimple_C_SetIconCostume");
static_assert(offsetof(CommonIconSimple_C_SetIconCostume, InItemIndex) == 0x000000, "Member 'CommonIconSimple_C_SetIconCostume::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconCostume, bDisplayLockIcon) == 0x000004, "Member 'CommonIconSimple_C_SetIconCostume::bDisplayLockIcon' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconBasic
// 0x0008 (0x0008 - 0x0000)
struct CommonIconSimple_C_SetIconBasic final
{
public:
	EItemType                                     Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DD1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InItemIndex;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconBasic) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetIconBasic");
static_assert(sizeof(CommonIconSimple_C_SetIconBasic) == 0x000008, "Wrong size on CommonIconSimple_C_SetIconBasic");
static_assert(offsetof(CommonIconSimple_C_SetIconBasic, Selection) == 0x000000, "Member 'CommonIconSimple_C_SetIconBasic::Selection' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconBasic, InItemIndex) == 0x000004, "Member 'CommonIconSimple_C_SetIconBasic::InItemIndex' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconWeapon
// 0x0020 (0x0020 - 0x0000)
struct CommonIconSimple_C_SetIconWeapon final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDetailsMode;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DD2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InItemUniqueId;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconWeapon) == 0x000008, "Wrong alignment on CommonIconSimple_C_SetIconWeapon");
static_assert(sizeof(CommonIconSimple_C_SetIconWeapon) == 0x000020, "Wrong size on CommonIconSimple_C_SetIconWeapon");
static_assert(offsetof(CommonIconSimple_C_SetIconWeapon, InItemIndex) == 0x000000, "Member 'CommonIconSimple_C_SetIconWeapon::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconWeapon, IsDetailsMode) == 0x000004, "Member 'CommonIconSimple_C_SetIconWeapon::IsDetailsMode' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconWeapon, InItemUniqueId) == 0x000008, "Member 'CommonIconSimple_C_SetIconWeapon::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconWeapon, InStorageNumber) == 0x000018, "Member 'CommonIconSimple_C_SetIconWeapon::InStorageNumber' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.IconLoadStart
// 0x0028 (0x0028 - 0x0000)
struct CommonIconSimple_C_IconLoadStart final
{
public:
	TSoftObjectPtr<class UTexture2D>              Param_NowLoadTexture;                              // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_IconLoadStart) == 0x000008, "Wrong alignment on CommonIconSimple_C_IconLoadStart");
static_assert(sizeof(CommonIconSimple_C_IconLoadStart) == 0x000028, "Wrong size on CommonIconSimple_C_IconLoadStart");
static_assert(offsetof(CommonIconSimple_C_IconLoadStart, Param_NowLoadTexture) == 0x000000, "Member 'CommonIconSimple_C_IconLoadStart::Param_NowLoadTexture' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.IconLoadRequest
// 0x0028 (0x0028 - 0x0000)
struct CommonIconSimple_C_IconLoadRequest final
{
public:
	TSoftObjectPtr<class UTexture2D>              TextureReference;                                  // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_IconLoadRequest) == 0x000008, "Wrong alignment on CommonIconSimple_C_IconLoadRequest");
static_assert(sizeof(CommonIconSimple_C_IconLoadRequest) == 0x000028, "Wrong size on CommonIconSimple_C_IconLoadRequest");
static_assert(offsetof(CommonIconSimple_C_IconLoadRequest, TextureReference) == 0x000000, "Member 'CommonIconSimple_C_IconLoadRequest::TextureReference' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconMountImagine
// 0x0018 (0x0018 - 0x0000)
struct CommonIconSimple_C_SetIconMountImagine final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DD3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconMountImagine) == 0x000008, "Wrong alignment on CommonIconSimple_C_SetIconMountImagine");
static_assert(sizeof(CommonIconSimple_C_SetIconMountImagine) == 0x000018, "Wrong size on CommonIconSimple_C_SetIconMountImagine");
static_assert(offsetof(CommonIconSimple_C_SetIconMountImagine, InIndex) == 0x000000, "Member 'CommonIconSimple_C_SetIconMountImagine::InIndex' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetIconMountImagine, InUniqueId) == 0x000008, "Member 'CommonIconSimple_C_SetIconMountImagine::InUniqueId' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetIconStamp
// 0x0010 (0x0010 - 0x0000)
struct CommonIconSimple_C_SetIconStamp final
{
public:
	class FString                                 StampId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetIconStamp) == 0x000008, "Wrong alignment on CommonIconSimple_C_SetIconStamp");
static_assert(sizeof(CommonIconSimple_C_SetIconStamp) == 0x000010, "Wrong size on CommonIconSimple_C_SetIconStamp");
static_assert(offsetof(CommonIconSimple_C_SetIconStamp, StampId) == 0x000000, "Member 'CommonIconSimple_C_SetIconStamp::StampId' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159
// 0x0008 (0x0008 - 0x0000)
struct CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159) == 0x000008, "Wrong alignment on CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159");
static_assert(sizeof(CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159) == 0x000008, "Wrong size on CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159");
static_assert(offsetof(CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159, Loaded) == 0x000000, "Member 'CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159::Loaded' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetMoney
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetMoney final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetMoney) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetMoney");
static_assert(sizeof(CommonIconSimple_C_SetMoney) == 0x000004, "Wrong size on CommonIconSimple_C_SetMoney");
static_assert(offsetof(CommonIconSimple_C_SetMoney, InAmount) == 0x000000, "Member 'CommonIconSimple_C_SetMoney::InAmount' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetEmotion
// 0x0010 (0x0010 - 0x0000)
struct CommonIconSimple_C_SetEmotion final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetEmotionIcon_IconTexture;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetEmotion) == 0x000008, "Wrong alignment on CommonIconSimple_C_SetEmotion");
static_assert(sizeof(CommonIconSimple_C_SetEmotion) == 0x000010, "Wrong size on CommonIconSimple_C_SetEmotion");
static_assert(offsetof(CommonIconSimple_C_SetEmotion, ID) == 0x000000, "Member 'CommonIconSimple_C_SetEmotion::ID' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetEmotion, CallFunc_GetEmotionIcon_IconTexture) == 0x000008, "Member 'CommonIconSimple_C_SetEmotion::CallFunc_GetEmotionIcon_IconTexture' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetBP
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetBP final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetBP) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetBP");
static_assert(sizeof(CommonIconSimple_C_SetBP) == 0x000004, "Wrong size on CommonIconSimple_C_SetBP");
static_assert(offsetof(CommonIconSimple_C_SetBP, InAmount) == 0x000000, "Member 'CommonIconSimple_C_SetBP::InAmount' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetGrayOut
// 0x0034 (0x0034 - 0x0000)
struct CommonIconSimple_C_SetGrayOut final
{
public:
	bool                                          Param_IsGrayOut;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DD4[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetGrayOut) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetGrayOut");
static_assert(sizeof(CommonIconSimple_C_SetGrayOut) == 0x000034, "Wrong size on CommonIconSimple_C_SetGrayOut");
static_assert(offsetof(CommonIconSimple_C_SetGrayOut, Param_IsGrayOut) == 0x000000, "Member 'CommonIconSimple_C_SetGrayOut::Param_IsGrayOut' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetGrayOut, Temp_bool_Variable) == 0x000001, "Member 'CommonIconSimple_C_SetGrayOut::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetGrayOut, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'CommonIconSimple_C_SetGrayOut::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetGrayOut, K2Node_MakeStruct_LinearColor_1) == 0x000014, "Member 'CommonIconSimple_C_SetGrayOut::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetGrayOut, K2Node_Select_Default) == 0x000024, "Member 'CommonIconSimple_C_SetGrayOut::K2Node_Select_Default' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetClassExp
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetClassExp final
{
public:
	int32                                         Exp;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetClassExp) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetClassExp");
static_assert(sizeof(CommonIconSimple_C_SetClassExp) == 0x000004, "Wrong size on CommonIconSimple_C_SetClassExp");
static_assert(offsetof(CommonIconSimple_C_SetClassExp, Exp) == 0x000000, "Member 'CommonIconSimple_C_SetClassExp::Exp' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.ItemTypeToToolTipType
// 0x0003 (0x0003 - 0x0000)
struct CommonIconSimple_C_ItemTypeToToolTipType final
{
public:
	EItemType                                     InItemType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EToolTipType                                  ToolTipType;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconSimple_C_ItemTypeToToolTipType) == 0x000001, "Wrong alignment on CommonIconSimple_C_ItemTypeToToolTipType");
static_assert(sizeof(CommonIconSimple_C_ItemTypeToToolTipType) == 0x000003, "Wrong size on CommonIconSimple_C_ItemTypeToToolTipType");
static_assert(offsetof(CommonIconSimple_C_ItemTypeToToolTipType, InItemType) == 0x000000, "Member 'CommonIconSimple_C_ItemTypeToToolTipType::InItemType' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ItemTypeToToolTipType, ToolTipType) == 0x000001, "Member 'CommonIconSimple_C_ItemTypeToToolTipType::ToolTipType' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_ItemTypeToToolTipType, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'CommonIconSimple_C_ItemTypeToToolTipType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetSkyCoin
// 0x0004 (0x0004 - 0x0000)
struct CommonIconSimple_C_SetSkyCoin final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetSkyCoin) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetSkyCoin");
static_assert(sizeof(CommonIconSimple_C_SetSkyCoin) == 0x000004, "Wrong size on CommonIconSimple_C_SetSkyCoin");
static_assert(offsetof(CommonIconSimple_C_SetSkyCoin, Amount) == 0x000000, "Member 'CommonIconSimple_C_SetSkyCoin::Amount' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.GetRewardItemIcon
// 0x0080 (0x0080 - 0x0000)
struct CommonIconSimple_C_GetRewardItemIcon final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DD5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0008(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         NewLocalVar_0;                                     // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DD6[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ByteToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_RewardItemIcon                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconSimple_C_GetRewardItemIcon) == 0x000008, "Wrong alignment on CommonIconSimple_C_GetRewardItemIcon");
static_assert(sizeof(CommonIconSimple_C_GetRewardItemIcon) == 0x000080, "Wrong size on CommonIconSimple_C_GetRewardItemIcon");
static_assert(offsetof(CommonIconSimple_C_GetRewardItemIcon, RewardItemType) == 0x000000, "Member 'CommonIconSimple_C_GetRewardItemIcon::RewardItemType' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_GetRewardItemIcon, Icon) == 0x000008, "Member 'CommonIconSimple_C_GetRewardItemIcon::Icon' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_GetRewardItemIcon, NewLocalVar_0) == 0x000030, "Member 'CommonIconSimple_C_GetRewardItemIcon::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_GetRewardItemIcon, CallFunc_Conv_ByteToString_ReturnValue) == 0x000038, "Member 'CommonIconSimple_C_GetRewardItemIcon::CallFunc_Conv_ByteToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_GetRewardItemIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000048, "Member 'CommonIconSimple_C_GetRewardItemIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_GetRewardItemIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'CommonIconSimple_C_GetRewardItemIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_GetRewardItemIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'CommonIconSimple_C_GetRewardItemIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.Set Reward Icon
// 0x0058 (0x0058 - 0x0000)
struct CommonIconSimple_C_Set_Reward_Icon final
{
public:
	ESBRewardItemType                             InRewardType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DD7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmountMin;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TempTooltipEnable;                                 // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DD8[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountMin;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Type;                                              // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DD9[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DDA[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     CallFunc_RewardItemTypeToItemType_ItemType;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconSimple_C_Set_Reward_Icon) == 0x000008, "Wrong alignment on CommonIconSimple_C_Set_Reward_Icon");
static_assert(sizeof(CommonIconSimple_C_Set_Reward_Icon) == 0x000058, "Wrong size on CommonIconSimple_C_Set_Reward_Icon");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, InRewardType) == 0x000000, "Member 'CommonIconSimple_C_Set_Reward_Icon::InRewardType' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, InId) == 0x000004, "Member 'CommonIconSimple_C_Set_Reward_Icon::InId' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, InAmount) == 0x000008, "Member 'CommonIconSimple_C_Set_Reward_Icon::InAmount' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, InAmountMin) == 0x00000C, "Member 'CommonIconSimple_C_Set_Reward_Icon::InAmountMin' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, TempTooltipEnable) == 0x000010, "Member 'CommonIconSimple_C_Set_Reward_Icon::TempTooltipEnable' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, AmountMin) == 0x000014, "Member 'CommonIconSimple_C_Set_Reward_Icon::AmountMin' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, Amount) == 0x000018, "Member 'CommonIconSimple_C_Set_Reward_Icon::Amount' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, Type) == 0x00001C, "Member 'CommonIconSimple_C_Set_Reward_Icon::Type' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, ID) == 0x000020, "Member 'CommonIconSimple_C_Set_Reward_Icon::ID' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'CommonIconSimple_C_Set_Reward_Icon::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000038, "Member 'CommonIconSimple_C_Set_Reward_Icon::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, CallFunc_Conv_StringToName_ReturnValue) == 0x000048, "Member 'CommonIconSimple_C_Set_Reward_Icon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, CallFunc_RewardItemTypeToItemType_ItemType) == 0x000050, "Member 'CommonIconSimple_C_Set_Reward_Icon::CallFunc_RewardItemTypeToItemType_ItemType' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_Set_Reward_Icon, K2Node_SwitchEnum_CmpSuccess) == 0x000051, "Member 'CommonIconSimple_C_Set_Reward_Icon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetMasterReward
// 0x0014 (0x0014 - 0x0000)
struct CommonIconSimple_C_SetMasterReward final
{
public:
	struct FSBMasterReward                        Data;                                              // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CommonIconSimple_C_SetMasterReward) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetMasterReward");
static_assert(sizeof(CommonIconSimple_C_SetMasterReward) == 0x000014, "Wrong size on CommonIconSimple_C_SetMasterReward");
static_assert(offsetof(CommonIconSimple_C_SetMasterReward, Data) == 0x000000, "Member 'CommonIconSimple_C_SetMasterReward::Data' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetProductData
// 0x0018 (0x0018 - 0x0000)
struct CommonIconSimple_C_SetProductData final
{
public:
	class UBP_SBProductItemData_C*                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasItemBoxContent_bResult;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasRewardType_bResult;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMasterReward_bResult;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DDB[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemIndex_ItemIndex;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconSimple_C_SetProductData) == 0x000008, "Wrong alignment on CommonIconSimple_C_SetProductData");
static_assert(sizeof(CommonIconSimple_C_SetProductData) == 0x000018, "Wrong size on CommonIconSimple_C_SetProductData");
static_assert(offsetof(CommonIconSimple_C_SetProductData, Target) == 0x000000, "Member 'CommonIconSimple_C_SetProductData::Target' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetProductData, bValid) == 0x000008, "Member 'CommonIconSimple_C_SetProductData::bValid' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetProductData, CallFunc_HasItemBoxContent_bResult) == 0x000009, "Member 'CommonIconSimple_C_SetProductData::CallFunc_HasItemBoxContent_bResult' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetProductData, CallFunc_HasRewardType_bResult) == 0x00000A, "Member 'CommonIconSimple_C_SetProductData::CallFunc_HasRewardType_bResult' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetProductData, CallFunc_HasMasterReward_bResult) == 0x00000B, "Member 'CommonIconSimple_C_SetProductData::CallFunc_HasMasterReward_bResult' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetProductData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000C, "Member 'CommonIconSimple_C_SetProductData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconSimple_C_SetProductData, CallFunc_GetItemIndex_ItemIndex) == 0x000010, "Member 'CommonIconSimple_C_SetProductData::CallFunc_GetItemIndex_ItemIndex' has a wrong offset!");

// Function CommonIconSimple.CommonIconSimple_C.SetItemBoxContent
// 0x0020 (0x0020 - 0x0000)
struct CommonIconSimple_C_SetItemBoxContent final
{
public:
	struct FSBItemBoxContentParam                 Data;                                              // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CommonIconSimple_C_SetItemBoxContent) == 0x000004, "Wrong alignment on CommonIconSimple_C_SetItemBoxContent");
static_assert(sizeof(CommonIconSimple_C_SetItemBoxContent) == 0x000020, "Wrong size on CommonIconSimple_C_SetItemBoxContent");
static_assert(offsetof(CommonIconSimple_C_SetItemBoxContent, Data) == 0x000000, "Member 'CommonIconSimple_C_SetItemBoxContent::Data' has a wrong offset!");

}

