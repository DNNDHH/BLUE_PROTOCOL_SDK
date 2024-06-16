#pragma once

 

// Package: CommonIconToolTipContent_PassiveImagine

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineData
// 0x03D8 (0x03D8 - 0x0000)
struct CommonIconToolTipContent_PassiveImagine_C_SetImagineData final
{
public:
	struct FSBMasterImagine                       InMasterImagine;                                   // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InUniqueId;                                        // 0x00B0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InUseClassTypeForLevelSync;                        // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x00C1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x00C2(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInForceLevelSyncOff;                              // 0x00C3(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C26[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x00C8(0x0118)(Edit, BlueprintVisible)
	ESBClassType                                  LocalClassTypeForLevelSync;                        // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C27[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x01E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       LocalMasterImagine;                                // 0x01F8(0x00B0)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C28[0x2];                                     // 0x02AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x02AC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_FindCharacterEquipment_OutResult;         // 0x02B8(0x0118)()
	bool                                          CallFunc_FindCharacterEquipment_ReturnValue;       // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_Select_Default;                             // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData) == 0x000008, "Wrong alignment on CommonIconToolTipContent_PassiveImagine_C_SetImagineData");
static_assert(sizeof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData) == 0x0003D8, "Wrong size on CommonIconToolTipContent_PassiveImagine_C_SetImagineData");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, InMasterImagine) == 0x000000, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::InMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, InUniqueId) == 0x0000B0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, InUseClassTypeForLevelSync) == 0x0000C0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::InUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, InClassTypeForLevelSync) == 0x0000C1, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, IsEffectiveDisplay) == 0x0000C2, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, bInForceLevelSyncOff) == 0x0000C3, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::bInForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, LocalOwnItemInfo) == 0x0000C8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, LocalClassTypeForLevelSync) == 0x0001E0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::LocalClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, LocalImagineUniqueId) == 0x0001E8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, LocalMasterImagine) == 0x0001F8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::LocalMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, Temp_bool_Variable) == 0x0002A8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002A9, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, CallFunc_GetStackBMax_ReturnValue) == 0x0002AC, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, CallFunc_GetStackBNum_ReturnValue) == 0x0002B0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x0002B4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, CallFunc_FindCharacterEquipment_OutResult) == 0x0002B8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::CallFunc_FindCharacterEquipment_OutResult' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, CallFunc_FindCharacterEquipment_ReturnValue) == 0x0003D0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::CallFunc_FindCharacterEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, CallFunc_GetClassType_ReturnValue) == 0x0003D1, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineData, K2Node_Select_Default) == 0x0003D2, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineData::K2Node_Select_Default' has a wrong offset!");

// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineLevel
// 0x0030 (0x0030 - 0x0000)
struct CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel final
{
public:
	int32                                         InImagineLv;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InClassLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutImagineLv;                                      // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpClassLv;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpMapInfoLvSync;                                  // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpImagineLv;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C29[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C2A[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel) == 0x000008, "Wrong alignment on CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel");
static_assert(sizeof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel) == 0x000030, "Wrong size on CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, InImagineLv) == 0x000000, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::InImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, InClassLevel) == 0x000004, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::InClassLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, OutImagineLv) == 0x000008, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::OutImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, TmpClassLv) == 0x00000C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::TmpClassLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, TmpMapInfoLvSync) == 0x000010, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::TmpMapInfoLvSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, TmpImagineLv) == 0x000014, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::TmpImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000019, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x00001A, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x00001B, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x00002C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetIntToText
// 0x0028 (0x0028 - 0x0000)
struct CommonIconToolTipContent_PassiveImagine_C_SetIntToText final
{
public:
	class UTextBlock*                             InTextWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InInteger;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InUseGrouping;                                     // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C2B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_PassiveImagine_C_SetIntToText) == 0x000008, "Wrong alignment on CommonIconToolTipContent_PassiveImagine_C_SetIntToText");
static_assert(sizeof(CommonIconToolTipContent_PassiveImagine_C_SetIntToText) == 0x000028, "Wrong size on CommonIconToolTipContent_PassiveImagine_C_SetIntToText");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetIntToText, InTextWidget) == 0x000000, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetIntToText::InTextWidget' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetIntToText, InInteger) == 0x000008, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetIntToText::InInteger' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetIntToText, InUseGrouping) == 0x00000C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetIntToText::InUseGrouping' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetIntToText, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetIntToText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineDataBase
// 0x0540 (0x0540 - 0x0000)
struct CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase final
{
public:
	struct FSBMasterImagine                       InMasterImagine;                                   // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InUniqueId;                                        // 0x00B0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InUseClassTypeForLevelSync;                        // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x00C1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x00C2(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInForceLevelSyncOff;                              // 0x00C3(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         InClassLevel;                                      // 0x00C4(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InPerkId;                                          // 0x00C8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBNum;                                       // 0x00CC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBMax;                                       // 0x00D0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBMax;                                    // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBNum;                                    // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalPerkId;                                       // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalFinalImagineLevel;                            // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSync;                                  // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C2C[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalRawImagineLevel;                              // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C2D[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0108(0x0118)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalMasterImagine;                                // 0x0220(0x00B0)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x02D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x02D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C2E[0x5];                                     // 0x02DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x02E0(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C2F[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0305(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0306(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C30[0x1];                                     // 0x0307(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C31[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x0310(0x0024)(NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C32[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0348(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0360(0x0018)()
	bool                                          Temp_bool_Variable_6;                              // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x037A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x037B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C33[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C34[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C35[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeImagineLevelSync_bIsLevelSync;      // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeImagineLevelSync_bIsLevelSync_1;    // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C36[0x1];                                     // 0x039B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetImagineLevel_OutImagineLv;             // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C37[0x3];                                     // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C38[0x3];                                     // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_5;                           // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x03BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x03BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x03BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default_6;                           // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x03C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C39[0x2];                                     // 0x03C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_7;                           // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_8;                           // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_9;                           // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_10;                          // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x03D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x03D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x03D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C3A[0x1];                                     // 0x03D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x03E8(0x0018)()
	int32                                         K2Node_Select_Default_11;                          // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C3B[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0408(0x0018)()
	struct FOwnItemInfo                           CallFunc_FindCharacterEquipment_OutResult;         // 0x0420(0x0118)()
	bool                                          CallFunc_FindCharacterEquipment_ReturnValue;       // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBIconOneItemBase_Visible;         // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x053A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_12;                          // 0x053B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x053C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x053D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_13;                          // 0x053E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase) == 0x000008, "Wrong alignment on CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase");
static_assert(sizeof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase) == 0x000540, "Wrong size on CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InMasterImagine) == 0x000000, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InUniqueId) == 0x0000B0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InUseClassTypeForLevelSync) == 0x0000C0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InClassTypeForLevelSync) == 0x0000C1, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, IsEffectiveDisplay) == 0x0000C2, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, bInForceLevelSyncOff) == 0x0000C3, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::bInForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InClassLevel) == 0x0000C4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InClassLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InPerkId) == 0x0000C8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InPerkId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InStackBNum) == 0x0000CC, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InStackBNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, InStackBMax) == 0x0000D0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::InStackBMax' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalStackBMax) == 0x0000D4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalStackBMax' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalStackBNum) == 0x0000D8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalPerkId) == 0x0000DC, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalPerkId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalClassLevel) == 0x0000E0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalFinalImagineLevel) == 0x0000E4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalFinalImagineLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalIsLevelSync) == 0x0000E8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalImagineUniqueId) == 0x0000F0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalRawImagineLevel) == 0x000100, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalRawImagineLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalOwnItemInfo) == 0x000108, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, LocalMasterImagine) == 0x000220, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::LocalMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_int_Variable) == 0x0002D0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue) == 0x0002D4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable) == 0x0002D5, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0002D6, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0002D7, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_1) == 0x0002D8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_2) == 0x0002D9, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_3) == 0x0002DA, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_text_Variable) == 0x0002E0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_int_Variable_1) == 0x0002F8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_4) == 0x0002FC, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_int_Variable_2) == 0x000300, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default) == 0x000304, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_IsValid_ReturnValue) == 0x000305, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_5) == 0x000306, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_int_Variable_3) == 0x000308, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x00030C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x000310, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000334, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000338, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_Conv_StringToText_ReturnValue) == 0x000348, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_1) == 0x000360, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_6) == 0x000378, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_Not_PreBool_ReturnValue) == 0x000379, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00037A, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralBool_ReturnValue) == 0x00037B, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000380, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_IsValid_ReturnValue_1) == 0x000388, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x00038C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000390, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_int_Variable_4) == 0x000394, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_ChangeImagineLevelSync_bIsLevelSync) == 0x000398, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_ChangeImagineLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_ChangeImagineLevelSync_bIsLevelSync_1) == 0x000399, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_ChangeImagineLevelSync_bIsLevelSync_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_7) == 0x00039A, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_SetImagineLevel_OutImagineLv) == 0x00039C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_SetImagineLevel_OutImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0003A0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_int_Variable_5) == 0x0003A4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_2) == 0x0003A8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_3) == 0x0003AC, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_4) == 0x0003B0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_BooleanOR_ReturnValue) == 0x0003B4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_5) == 0x0003B8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_BooleanOR_ReturnValue_1) == 0x0003BC, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_8) == 0x0003BD, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_BooleanOR_ReturnValue_2) == 0x0003BE, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_BooleanOR_ReturnValue_3) == 0x0003BF, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_6) == 0x0003C0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_9) == 0x0003C4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_10) == 0x0003C5, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_7) == 0x0003C8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_8) == 0x0003CC, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x0003D0, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_9) == 0x0003D1, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_10) == 0x0003D2, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x0003D3, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_IsValid_ReturnValue_2) == 0x0003D4, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_11) == 0x0003D5, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_12) == 0x0003D6, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_GetMasterImagineText_ReturnValue) == 0x0003D8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0003E8, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_11) == 0x000400, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_Conv_IntToText_ReturnValue) == 0x000408, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_FindCharacterEquipment_OutResult) == 0x000420, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_FindCharacterEquipment_OutResult' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_FindCharacterEquipment_ReturnValue) == 0x000538, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_FindCharacterEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_SetStackBIconOneItemBase_Visible) == 0x000539, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_SetStackBIconOneItemBase_Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, Temp_bool_Variable_13) == 0x00053A, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_12) == 0x00053B, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x00053C, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x00053D, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase, K2Node_Select_Default_13) == 0x00053E, "Member 'CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase::K2Node_Select_Default_13' has a wrong offset!");

}

