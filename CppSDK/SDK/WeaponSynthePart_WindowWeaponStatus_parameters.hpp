#pragma once

 

// Package: WeaponSynthePart_WindowWeaponStatus

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus
// 0x0030 (0x0030 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CEE[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus) == 0x000030, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus, CallFunc_MakeLiteralName_ReturnValue) == 0x000014, "Member 'WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus, K2Node_CustomEvent_Sender) == 0x000020, "Member 'WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus, K2Node_CustomEvent_Param) == 0x000028, "Member 'WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus::K2Node_CustomEvent_Param' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.OnUpdateReardBoostInfo
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo) == 0x000010, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo, Sender) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo::Sender' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo, Param) == 0x000008, "Member 'WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo::Param' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetWeaponData
// 0x03D8 (0x03D8 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData final
{
public:
	struct FOwnItemInfo                           WeaponData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBWeaponMasterData                    TmpWeaponMasterData;                               // 0x0118(0x00B0)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   Manager;                                           // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           TmpWeaponData;                                     // 0x01D0(0x0118)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CEF[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x02FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetWeaponId_isExist;                      // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF0[0x2];                                     // 0x0302(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF1[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF2[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF3[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0328(0x00B0)()
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData) == 0x0003D8, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, WeaponData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, TmpWeaponMasterData) == 0x000118, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::TmpWeaponMasterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, Manager) == 0x0001C8, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::Manager' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, TmpWeaponData) == 0x0001D0, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::TmpWeaponData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, Temp_int_Variable) == 0x0002E8, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, Temp_int_Variable_1) == 0x0002EC, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_Conv_IntToByte_ReturnValue) == 0x0002F0, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_Add_IntInt_ReturnValue) == 0x0002F4, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_GetValidValue_ReturnValue) == 0x0002F8, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0002F9, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002FA, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x0002FB, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0002FC, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, K2Node_SwitchEnum_CmpSuccess) == 0x000300, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_SetWeaponId_isExist) == 0x000301, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_SetWeaponId_isExist' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_MakeLiteralInt_ReturnValue) == 0x000304, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_Less_IntInt_ReturnValue) == 0x000308, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_GetLevelStatus_ReturnValue) == 0x00030C, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000310, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_GetMasterDataManager_IsValid) == 0x000314, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000318, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_GetWeaponMasterData_IsExists) == 0x000320, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000328, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_PlayAnim) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_PlayAnim");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_PlayAnim) == 0x000008, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_PlayAnim");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextName
// 0x00D8 (0x00D8 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetTextName final
{
public:
	struct FSBWeaponMasterData                    SBWeaponMasterData;                                // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetTextName) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetTextName");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetTextName) == 0x0000D8, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetTextName");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextName, SBWeaponMasterData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextName::SBWeaponMasterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextName, CallFunc_GetWeaponText_ReturnValue) == 0x0000B0, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextName::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextName, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextLV
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetTextLV final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CF4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetTextLV) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetTextLV");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetTextLV) == 0x000020, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetTextLV");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextLV, Value) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextLV::Value' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextLV, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextLV::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextSpecialName
// 0x01A0 (0x01A0 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName final
{
public:
	class USBMasterDataManager*                   Manager;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0130(0x0018)()
	bool                                          CallFunc_BP_GetAbilityEffectMasterData_IsExists;   // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF5[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_BP_GetAbilityEffectMasterData_ReturnValue; // 0x014C(0x0024)(NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF6[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0188(0x0018)()
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName) == 0x0001A0, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, Manager) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::Manager' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, OwnItemInfo) == 0x000008, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, CallFunc_GetTextFromAsset_ReturnValue) == 0x000120, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, CallFunc_Conv_StringToText_ReturnValue) == 0x000130, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, CallFunc_BP_GetAbilityEffectMasterData_IsExists) == 0x000148, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::CallFunc_BP_GetAbilityEffectMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, CallFunc_BP_GetAbilityEffectMasterData_ReturnValue) == 0x00014C, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::CallFunc_BP_GetAbilityEffectMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000170, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000178, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000188, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextParameter
// 0x0080 (0x0080 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter final
{
public:
	ESBWeaponStatus                               Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CF7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CF8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	TArray<ESBWeaponStatus>                       K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF9[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0058(0x0018)()
	class USBRuntimeTextBlock*                    K2Node_Select_Default_1;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter) == 0x000080, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, Param_Index) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, Value) == 0x000004, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::Value' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, Temp_byte_Variable) == 0x000008, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, K2Node_MakeArray_Array) == 0x000040, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, Temp_bool_Variable) == 0x000050, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, CallFunc_Array_Contains_ReturnValue) == 0x000051, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, K2Node_Select_Default) == 0x000058, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, K2Node_Select_Default_1) == 0x000070, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetAttributeIcon
// 0x00E8 (0x00E8 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon final
{
public:
	struct FSBWeaponMasterData                    SBWeaponMasterData;                                // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CFA[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CFB[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon) == 0x0000E8, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon, SBWeaponMasterData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon::SBWeaponMasterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon, Temp_bool_Variable) == 0x0000B0, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon, Temp_struct_Variable) == 0x0000B4, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C4, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon, Temp_struct_Variable_1) == 0x0000C8, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon, K2Node_Select_Default) == 0x0000D8, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.UpdateBoostInfo
// 0x0060 (0x0060 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CFC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CFD[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CFE[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CFF[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectiveFusion_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D00[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetFusionTooltipText_TooltipDataList;     // 0x0048(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo) == 0x000060, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, Temp_bool_Variable) == 0x000010, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000021, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000022, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000038, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_IsEffectiveFusion_ReturnValue) == 0x000040, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_IsEffectiveFusion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, CallFunc_GetFusionTooltipText_TooltipDataList) == 0x000048, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::CallFunc_GetFusionTooltipText_TooltipDataList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo, K2Node_Select_Default) == 0x000058, "Member 'WeaponSynthePart_WindowWeaponStatus_C_UpdateBoostInfo::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetStackB
// 0x0120 (0x0120 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetStackB final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsEffectiveDisplay;                                // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetStackB) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetStackB");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetStackB) == 0x000120, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetStackB");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetStackB, ItemInfo) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetStackB::ItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetStackB, IsEffectiveDisplay) == 0x000118, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetStackB::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetStackB, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000119, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetStackB::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetVisibleStackB
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB) == 0x000001, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB) == 0x000005, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB, Param_IsVisible) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetStackBTag
// 0x00B8 (0x00B8 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag final
{
public:
	struct FSBWeaponMasterData                    WeaponMasterData;                                  // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag) == 0x0000B8, "Wrong size on WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag, WeaponMasterData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag::WeaponMasterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

