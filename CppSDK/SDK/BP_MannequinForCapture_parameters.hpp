#pragma once

 

// Package: BP_MannequinForCapture

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_MannequinForCapture_ArrangementInfo_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK::Params
{

// Function BP_MannequinForCapture.BP_MannequinForCapture_C.ExecuteUbergraph_BP_MannequinForCapture
// 0x0128 (0x0128 - 0x0000)
struct BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_4;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91CB[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_CustomEvent_InCostumeItemId;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsOwnItem;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91CC[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InOwnCostumeColorIndex;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InOwnCostumeColorS;             // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InOwnCostumeColorV;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InOwnCostumeMaterialId;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91CD[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91CE[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0048(0x0088)()
	int32                                         K2Node_Select_Default;                             // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid; // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation; // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91CF[0x2];                                     // 0x00DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateAnimChange_OutAnimChange;           // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D0[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsMale;                         // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D1[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateColorHSV                 K2Node_MakeStruct_SBCharaCreateColorHSV;           // 0x00F0(0x000C)(NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D2[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBActorVisibilityComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_5;                              // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x010F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable_6;                              // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0116(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0117(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            K2Node_Select_Default_4;                           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_7;                              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91D3[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               K2Node_Select_Default_5;                           // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              K2Node_Select_Default_6;                           // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture) == 0x000008, "Wrong alignment on BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture");
static_assert(sizeof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture) == 0x000128, "Wrong size on BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, EntryPoint) == 0x000000, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_bool_Variable) == 0x000004, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_bool_Variable_1) == 0x000005, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_bool_Variable_2) == 0x000006, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable) == 0x000007, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable_1) == 0x000008, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable_2) == 0x000009, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable_3) == 0x00000A, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable_4) == 0x00000B, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_IsDedicatedServer_ReturnValue) == 0x00000C, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_IsLocallyControlled_ReturnValue) == 0x00001A, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_CustomEvent_InCostumeItemId) == 0x00001C, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_CustomEvent_InCostumeItemId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_CustomEvent_IsOwnItem) == 0x000020, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_CustomEvent_IsOwnItem' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_CustomEvent_InOwnCostumeColorIndex) == 0x000024, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_CustomEvent_InOwnCostumeColorIndex' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_CustomEvent_InOwnCostumeColorS) == 0x000028, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_CustomEvent_InOwnCostumeColorS' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_CustomEvent_InOwnCostumeColorV) == 0x00002C, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_CustomEvent_InOwnCostumeColorV' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_CustomEvent_InOwnCostumeMaterialId) == 0x000030, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_CustomEvent_InOwnCostumeMaterialId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_GetMasterDataManager_IsValid) == 0x000034, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000040, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000048, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_Select_Default) == 0x0000D0, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_Conv_StringToName_ReturnValue) == 0x0000D4, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid) == 0x0000DC, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation) == 0x0000DD, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_Select_Default_1) == 0x0000E0, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_UpdateAnimChange_OutAnimChange) == 0x0000E4, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_UpdateAnimChange_OutAnimChange' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_Select_Default_2) == 0x0000E8, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_CustomEvent_IsMale) == 0x0000EC, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_CustomEvent_IsMale' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_MakeStruct_SBCharaCreateColorHSV) == 0x0000F0, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_MakeStruct_SBCharaCreateColorHSV' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_bool_Variable_3) == 0x0000FC, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_GetComponentByClass_ReturnValue) == 0x000100, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_Select_Default_3) == 0x000108, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable_5) == 0x00010C, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00010D, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00010E, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_BooleanAND_ReturnValue_1) == 0x00010F, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_bool_Variable_4) == 0x000110, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_IsValid_ReturnValue_1) == 0x000111, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_IsValid_ReturnValue_2) == 0x000112, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000113, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable_6) == 0x000114, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_IsValid_ReturnValue_3) == 0x000115, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_IsValid_ReturnValue_4) == 0x000116, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_bool_Variable_5) == 0x000117, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_Select_Default_4) == 0x000118, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, Temp_byte_Variable_7) == 0x000119, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_MakeLiteralName_ReturnValue) == 0x00011C, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_Select_Default_5) == 0x000124, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, K2Node_Select_Default_6) == 0x000125, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000126, "Member 'BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetMannequinType
// 0x0001 (0x0001 - 0x0000)
struct BP_MannequinForCapture_C_SetMannequinType final
{
public:
	bool                                          IsMale;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_C_SetMannequinType) == 0x000001, "Wrong alignment on BP_MannequinForCapture_C_SetMannequinType");
static_assert(sizeof(BP_MannequinForCapture_C_SetMannequinType) == 0x000001, "Wrong size on BP_MannequinForCapture_C_SetMannequinType");
static_assert(offsetof(BP_MannequinForCapture_C_SetMannequinType, IsMale) == 0x000000, "Member 'BP_MannequinForCapture_C_SetMannequinType::IsMale' has a wrong offset!");

// Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetCostumeToMannequin
// 0x0018 (0x0018 - 0x0000)
struct BP_MannequinForCapture_C_SetCostumeToMannequin final
{
public:
	int32                                         InCostumeItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOwnItem;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InOwnCostumeColorIndex;                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnCostumeColorS;                                // 0x000C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnCostumeColorV;                                // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnCostumeMaterialId;                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MannequinForCapture_C_SetCostumeToMannequin) == 0x000004, "Wrong alignment on BP_MannequinForCapture_C_SetCostumeToMannequin");
static_assert(sizeof(BP_MannequinForCapture_C_SetCostumeToMannequin) == 0x000018, "Wrong size on BP_MannequinForCapture_C_SetCostumeToMannequin");
static_assert(offsetof(BP_MannequinForCapture_C_SetCostumeToMannequin, InCostumeItemId) == 0x000000, "Member 'BP_MannequinForCapture_C_SetCostumeToMannequin::InCostumeItemId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_SetCostumeToMannequin, IsOwnItem) == 0x000004, "Member 'BP_MannequinForCapture_C_SetCostumeToMannequin::IsOwnItem' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_SetCostumeToMannequin, InOwnCostumeColorIndex) == 0x000008, "Member 'BP_MannequinForCapture_C_SetCostumeToMannequin::InOwnCostumeColorIndex' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_SetCostumeToMannequin, InOwnCostumeColorS) == 0x00000C, "Member 'BP_MannequinForCapture_C_SetCostumeToMannequin::InOwnCostumeColorS' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_SetCostumeToMannequin, InOwnCostumeColorV) == 0x000010, "Member 'BP_MannequinForCapture_C_SetCostumeToMannequin::InOwnCostumeColorV' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_SetCostumeToMannequin, InOwnCostumeMaterialId) == 0x000014, "Member 'BP_MannequinForCapture_C_SetCostumeToMannequin::InOwnCostumeMaterialId' has a wrong offset!");

// Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateMannequin
// 0x0001 (0x0001 - 0x0000)
struct BP_MannequinForCapture_C_UpdateMannequin final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_C_UpdateMannequin) == 0x000001, "Wrong alignment on BP_MannequinForCapture_C_UpdateMannequin");
static_assert(sizeof(BP_MannequinForCapture_C_UpdateMannequin) == 0x000001, "Wrong size on BP_MannequinForCapture_C_UpdateMannequin");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateMannequin, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_MannequinForCapture_C_UpdateMannequin::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MannequinForCapture.BP_MannequinForCapture_C.ResetMannequin
// 0x00A8 (0x00A8 - 0x0000)
struct BP_MannequinForCapture_C_ResetMannequin final
{
public:
	TArray<class FName>                           TmpPartsNames;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<ECharaPartsLocation>                   TmpAccessoryPartsLocationList;                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	class FName                                   TmpCurrPartsName;                                  // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           TmpCurrPartsLocation;                              // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91D5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D6[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D7[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D8[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           CallFunc_Map_Find_Value;                           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91D9[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0088(0x0010)(ReferenceParm)
	ECharaPartsLocation                           CallFunc_Array_Get_Item_1;                         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91DA[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_C_ResetMannequin) == 0x000008, "Wrong alignment on BP_MannequinForCapture_C_ResetMannequin");
static_assert(sizeof(BP_MannequinForCapture_C_ResetMannequin) == 0x0000A8, "Wrong size on BP_MannequinForCapture_C_ResetMannequin");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, TmpPartsNames) == 0x000000, "Member 'BP_MannequinForCapture_C_ResetMannequin::TmpPartsNames' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, TmpAccessoryPartsLocationList) == 0x000010, "Member 'BP_MannequinForCapture_C_ResetMannequin::TmpAccessoryPartsLocationList' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, TmpCurrPartsName) == 0x000020, "Member 'BP_MannequinForCapture_C_ResetMannequin::TmpCurrPartsName' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, TmpCurrPartsLocation) == 0x000028, "Member 'BP_MannequinForCapture_C_ResetMannequin::TmpCurrPartsLocation' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, K2Node_MakeArray_Array) == 0x000030, "Member 'BP_MannequinForCapture_C_ResetMannequin::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BP_MannequinForCapture_C_ResetMannequin::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'BP_MannequinForCapture_C_ResetMannequin::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'BP_MannequinForCapture_C_ResetMannequin::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_MakeLiteralName_ReturnValue) == 0x000054, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00005C, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00005D, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00005E, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00005F, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000060, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_BooleanOR_ReturnValue) == 0x000061, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_BooleanOR_ReturnValue_1) == 0x000062, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_BooleanOR_ReturnValue_2) == 0x000063, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_BooleanOR_ReturnValue_3) == 0x000064, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000065, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000066, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_BooleanAND_ReturnValue) == 0x000067, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000068, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Array_Get_Item) == 0x00006C, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, Temp_int_Loop_Counter_Variable_1) == 0x000078, "Member 'BP_MannequinForCapture_C_ResetMannequin::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Map_Find_Value) == 0x000084, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Map_Find_ReturnValue) == 0x000085, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Map_Keys_Keys) == 0x000088, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Array_Length_ReturnValue_1) == 0x00009C, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_ResetMannequin, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A0, "Member 'BP_MannequinForCapture_C_ResetMannequin::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateAnimChange
// 0x0090 (0x0090 - 0x0000)
struct BP_MannequinForCapture_C_UpdateAnimChange final
{
public:
	int32                                         InCostumeItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutAnimChange;                                     // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91DB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalRowNames;                                     // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalCostumeItemId;                                // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91DC[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91DD[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FST_MannequinForCapture_ArrangementInfo CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91DE[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91DF[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91E0[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0078(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_C_UpdateAnimChange) == 0x000008, "Wrong alignment on BP_MannequinForCapture_C_UpdateAnimChange");
static_assert(sizeof(BP_MannequinForCapture_C_UpdateAnimChange) == 0x000090, "Wrong size on BP_MannequinForCapture_C_UpdateAnimChange");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, InCostumeItemId) == 0x000000, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::InCostumeItemId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, OutAnimChange) == 0x000004, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::OutAnimChange' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, LocalRowNames) == 0x000008, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::LocalRowNames' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, LocalCostumeItemId) == 0x000018, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::LocalCostumeItemId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, Temp_bool_True_if_break_was_hit_Variable) == 0x00001C, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_Not_PreBool_ReturnValue) == 0x000024, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_Conv_StringToName_ReturnValue) == 0x000064, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00006C, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000078, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_C_UpdateAnimChange, CallFunc_BooleanAND_ReturnValue) == 0x000089, "Member 'BP_MannequinForCapture_C_UpdateAnimChange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

