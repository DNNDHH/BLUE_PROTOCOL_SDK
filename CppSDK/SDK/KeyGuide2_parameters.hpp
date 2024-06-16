#pragma once

 

// Package: KeyGuide2

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "EKeyGuideType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function KeyGuide2.KeyGuide2_C.OnChangeMountEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide2_C_OnChangeMountEvent__DelegateSignature final
{
public:
	bool                                          IsMount;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_OnChangeMountEvent__DelegateSignature) == 0x000001, "Wrong alignment on KeyGuide2_C_OnChangeMountEvent__DelegateSignature");
static_assert(sizeof(KeyGuide2_C_OnChangeMountEvent__DelegateSignature) == 0x000001, "Wrong size on KeyGuide2_C_OnChangeMountEvent__DelegateSignature");
static_assert(offsetof(KeyGuide2_C_OnChangeMountEvent__DelegateSignature, IsMount) == 0x000000, "Member 'KeyGuide2_C_OnChangeMountEvent__DelegateSignature::IsMount' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.OnCheerfulItemEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature final
{
public:
	bool                                          Param_IsCheerfulItem;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature) == 0x000001, "Wrong alignment on KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature");
static_assert(sizeof(KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature) == 0x000001, "Wrong size on KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature");
static_assert(offsetof(KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature, Param_IsCheerfulItem) == 0x000000, "Member 'KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature::Param_IsCheerfulItem' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.ExecuteUbergraph_KeyGuide2
// 0x0148 (0x0148 - 0x0000)
struct KeyGuide2_C_ExecuteUbergraph_KeyGuide2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BE7[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESBOperateMode                                Temp_byte_Variable_2;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_3;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_4;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_5;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4BE8[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_CustomEvent_InKeyGuideType;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BE9[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BEA[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BEB[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_1;             // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_Select_Default;                             // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBOperateMode                                Temp_byte_Variable_6;                              // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BEC[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x00A8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BED[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BEE[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyGuideAuto_bAuto;                     // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyGuideAuto_bAuto_1;                   // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsEdit;                        // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable_7;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_Select_Default_1;                           // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BEF[0x5];                                     // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF0[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x0108(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_2;             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetIsMount_RetValue;                      // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCheerfulItem_RetValue;                 // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetKeyConfig_RetValue;                    // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetKeyConfig_Cty_RetValue;                // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetKeyConfig_OfflineBattle_RetValue;      // 0x010F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF1[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BF2[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2) == 0x000008, "Wrong alignment on KeyGuide2_C_ExecuteUbergraph_KeyGuide2");
static_assert(sizeof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2) == 0x000148, "Wrong size on KeyGuide2_C_ExecuteUbergraph_KeyGuide2");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, EntryPoint) == 0x000000, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable) == 0x000004, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable_1) == 0x000005, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable_2) == 0x000018, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable_3) == 0x000019, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable_4) == 0x00001A, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable_5) == 0x00001B, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CreateDelegate_OutputDelegate_4) == 0x00004C, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000060, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CustomEvent_InKeyGuideType) == 0x000068, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CustomEvent_InKeyGuideType' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetPlayerManager_ReturnValue) == 0x000070, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetConfigSaveManager_IsValid) == 0x000078, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000080, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000088, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000090, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetOperateMode_ReturnValue) == 0x000098, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetOperateMode_ReturnValue_1) == 0x000099, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetOperateMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_Select_Default) == 0x00009A, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_bool_Has_Been_Initd_Variable) == 0x00009B, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_Event_IsDesignTime) == 0x00009C, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable_6) == 0x00009D, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000A0, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CustomEvent_InRetCode) == 0x0000A8, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000B0, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B9, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000C0, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_IsKeyGuideAuto_bAuto) == 0x0000CA, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_IsKeyGuideAuto_bAuto' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_Not_PreBool_ReturnValue) == 0x0000CB, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_IsKeyGuideAuto_bAuto_1) == 0x0000CC, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_IsKeyGuideAuto_bAuto_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_BooleanAND_ReturnValue) == 0x0000CD, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CustomEvent_bIsEdit) == 0x0000CE, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CustomEvent_bIsEdit' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_IsValid_ReturnValue_1) == 0x0000CF, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetPlayerManager_ReturnValue_1) == 0x0000D0, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_bool_IsClosed_Variable) == 0x0000D8, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, Temp_byte_Variable_7) == 0x0000D9, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_Select_Default_1) == 0x0000DA, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetEventExecutor_ReturnValue) == 0x0000E0, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CustomEvent_Sender) == 0x0000E8, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CustomEvent_Param) == 0x0000F0, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0000F8, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000100, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_CustomEvent_SkinType) == 0x000108, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetOperateMode_ReturnValue_2) == 0x000109, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetOperateMode_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00010A, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_SetIsMount_RetValue) == 0x00010B, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_SetIsMount_RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_SetCheerfulItem_RetValue) == 0x00010C, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_SetCheerfulItem_RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_SetKeyConfig_RetValue) == 0x00010D, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_SetKeyConfig_RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_SetKeyConfig_Cty_RetValue) == 0x00010E, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_SetKeyConfig_Cty_RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_SetKeyConfig_OfflineBattle_RetValue) == 0x00010F, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_SetKeyConfig_OfflineBattle_RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000110, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000118, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, K2Node_DynamicCast_bSuccess_2) == 0x000120, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000124, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x000130, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecuteUbergraph_KeyGuide2, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x000140, "Member 'KeyGuide2_C_ExecuteUbergraph_KeyGuide2::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.OnChangePad
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide2_C_OnChangePad final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide2_C_OnChangePad) == 0x000001, "Wrong alignment on KeyGuide2_C_OnChangePad");
static_assert(sizeof(KeyGuide2_C_OnChangePad) == 0x000001, "Wrong size on KeyGuide2_C_OnChangePad");
static_assert(offsetof(KeyGuide2_C_OnChangePad, SkinType) == 0x000000, "Member 'KeyGuide2_C_OnChangePad::SkinType' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct KeyGuide2_C_CustomEvent_0 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide2_C_CustomEvent_0) == 0x000008, "Wrong alignment on KeyGuide2_C_CustomEvent_0");
static_assert(sizeof(KeyGuide2_C_CustomEvent_0) == 0x000010, "Wrong size on KeyGuide2_C_CustomEvent_0");
static_assert(offsetof(KeyGuide2_C_CustomEvent_0, Sender) == 0x000000, "Member 'KeyGuide2_C_CustomEvent_0::Sender' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_CustomEvent_0, Param) == 0x000008, "Member 'KeyGuide2_C_CustomEvent_0::Param' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide2_C_SetEditMode final
{
public:
	bool                                          bIsEdit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_SetEditMode) == 0x000001, "Wrong alignment on KeyGuide2_C_SetEditMode");
static_assert(sizeof(KeyGuide2_C_SetEditMode) == 0x000001, "Wrong size on KeyGuide2_C_SetEditMode");
static_assert(offsetof(KeyGuide2_C_SetEditMode, bIsEdit) == 0x000000, "Member 'KeyGuide2_C_SetEditMode::bIsEdit' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.OnAdventurerRankDelegate_Event
// 0x0004 (0x0004 - 0x0000)
struct KeyGuide2_C_OnAdventurerRankDelegate_Event final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide2_C_OnAdventurerRankDelegate_Event) == 0x000004, "Wrong alignment on KeyGuide2_C_OnAdventurerRankDelegate_Event");
static_assert(sizeof(KeyGuide2_C_OnAdventurerRankDelegate_Event) == 0x000004, "Wrong size on KeyGuide2_C_OnAdventurerRankDelegate_Event");
static_assert(offsetof(KeyGuide2_C_OnAdventurerRankDelegate_Event, InRetCode) == 0x000000, "Member 'KeyGuide2_C_OnAdventurerRankDelegate_Event::InRetCode' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide2_C_PreConstruct final
{
public:
	bool                                          Param_IsDesignTime;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_PreConstruct) == 0x000001, "Wrong alignment on KeyGuide2_C_PreConstruct");
static_assert(sizeof(KeyGuide2_C_PreConstruct) == 0x000001, "Wrong size on KeyGuide2_C_PreConstruct");
static_assert(offsetof(KeyGuide2_C_PreConstruct, Param_IsDesignTime) == 0x000000, "Member 'KeyGuide2_C_PreConstruct::Param_IsDesignTime' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.ChangeKeyGuide
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide2_C_ChangeKeyGuide final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide2_C_ChangeKeyGuide) == 0x000001, "Wrong alignment on KeyGuide2_C_ChangeKeyGuide");
static_assert(sizeof(KeyGuide2_C_ChangeKeyGuide) == 0x000001, "Wrong size on KeyGuide2_C_ChangeKeyGuide");
static_assert(offsetof(KeyGuide2_C_ChangeKeyGuide, InKeyGuideType) == 0x000000, "Member 'KeyGuide2_C_ChangeKeyGuide::InKeyGuideType' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.IsKeyGuideAuto
// 0x0018 (0x0018 - 0x0000)
struct KeyGuide2_C_IsKeyGuideAuto final
{
public:
	bool                                          bAuto;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF3[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyGuideDisplayType                        CallFunc_IsOperateModeGuideVisibility_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_IsKeyGuideAuto) == 0x000008, "Wrong alignment on KeyGuide2_C_IsKeyGuideAuto");
static_assert(sizeof(KeyGuide2_C_IsKeyGuideAuto) == 0x000018, "Wrong size on KeyGuide2_C_IsKeyGuideAuto");
static_assert(offsetof(KeyGuide2_C_IsKeyGuideAuto, bAuto) == 0x000000, "Member 'KeyGuide2_C_IsKeyGuideAuto::bAuto' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_IsKeyGuideAuto, CallFunc_GetConfigSaveManager_IsValid) == 0x000001, "Member 'KeyGuide2_C_IsKeyGuideAuto::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_IsKeyGuideAuto, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'KeyGuide2_C_IsKeyGuideAuto::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_IsKeyGuideAuto, CallFunc_IsOperateModeGuideVisibility_ReturnValue) == 0x000010, "Member 'KeyGuide2_C_IsKeyGuideAuto::CallFunc_IsOperateModeGuideVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_IsKeyGuideAuto, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'KeyGuide2_C_IsKeyGuideAuto::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.SetKeyConfig
// 0x01D8 (0x01D8 - 0x0000)
struct KeyGuide2_C_SetKeyConfig final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetPlayerClassKeyConfigData_ReturnValue;  // 0x0008(0x01C8)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_SetKeyConfig) == 0x000008, "Wrong alignment on KeyGuide2_C_SetKeyConfig");
static_assert(sizeof(KeyGuide2_C_SetKeyConfig) == 0x0001D8, "Wrong size on KeyGuide2_C_SetKeyConfig");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig, RetValue) == 0x000000, "Member 'KeyGuide2_C_SetKeyConfig::RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig, CallFunc_GetPlayerClassKeyConfigData_ReturnValue) == 0x000008, "Member 'KeyGuide2_C_SetKeyConfig::CallFunc_GetPlayerClassKeyConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig, K2Node_SwitchEnum_CmpSuccess) == 0x0001D0, "Member 'KeyGuide2_C_SetKeyConfig::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.SetCheerfulItem
// 0x01F0 (0x01F0 - 0x0000)
struct KeyGuide2_C_SetCheerfulItem final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetPlayerClassKeyConfigData_ReturnValue;  // 0x0008(0x01C8)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF6[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActiveEfficacyType_ReturnValue;         // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveEfficacyType_ReturnValue_1;       // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_SetCheerfulItem) == 0x000008, "Wrong alignment on KeyGuide2_C_SetCheerfulItem");
static_assert(sizeof(KeyGuide2_C_SetCheerfulItem) == 0x0001F0, "Wrong size on KeyGuide2_C_SetCheerfulItem");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, RetValue) == 0x000000, "Member 'KeyGuide2_C_SetCheerfulItem::RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, CallFunc_GetPlayerClassKeyConfigData_ReturnValue) == 0x000008, "Member 'KeyGuide2_C_SetCheerfulItem::CallFunc_GetPlayerClassKeyConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, K2Node_SwitchEnum_CmpSuccess) == 0x0001D0, "Member 'KeyGuide2_C_SetCheerfulItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, CallFunc_GetSBPlayerState_ReturnValue) == 0x0001D8, "Member 'KeyGuide2_C_SetCheerfulItem::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x0001E0, "Member 'KeyGuide2_C_SetCheerfulItem::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, CallFunc_IsActiveEfficacyType_ReturnValue) == 0x0001E8, "Member 'KeyGuide2_C_SetCheerfulItem::CallFunc_IsActiveEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, CallFunc_IsActiveEfficacyType_ReturnValue_1) == 0x0001E9, "Member 'KeyGuide2_C_SetCheerfulItem::CallFunc_IsActiveEfficacyType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetCheerfulItem, CallFunc_BooleanOR_ReturnValue) == 0x0001EA, "Member 'KeyGuide2_C_SetCheerfulItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.SetKeyConfig_Cty
// 0x01F8 (0x01F8 - 0x0000)
struct KeyGuide2_C_SetKeyConfig_Cty final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BF8[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityOfMapName_ReturnValue;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BF9[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetPlayerClassKeyConfigData_ReturnValue;  // 0x0028(0x01C8)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_SetKeyConfig_Cty) == 0x000008, "Wrong alignment on KeyGuide2_C_SetKeyConfig_Cty");
static_assert(sizeof(KeyGuide2_C_SetKeyConfig_Cty) == 0x0001F8, "Wrong size on KeyGuide2_C_SetKeyConfig_Cty");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_Cty, RetValue) == 0x000000, "Member 'KeyGuide2_C_SetKeyConfig_Cty::RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_Cty, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000004, "Member 'KeyGuide2_C_SetKeyConfig_Cty::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_Cty, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x000010, "Member 'KeyGuide2_C_SetKeyConfig_Cty::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_Cty, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x000020, "Member 'KeyGuide2_C_SetKeyConfig_Cty::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_Cty, CallFunc_IsCityOfMapName_ReturnValue) == 0x000021, "Member 'KeyGuide2_C_SetKeyConfig_Cty::CallFunc_IsCityOfMapName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_Cty, CallFunc_GetPlayerClassKeyConfigData_ReturnValue) == 0x000028, "Member 'KeyGuide2_C_SetKeyConfig_Cty::CallFunc_GetPlayerClassKeyConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_Cty, K2Node_SwitchEnum_CmpSuccess) == 0x0001F0, "Member 'KeyGuide2_C_SetKeyConfig_Cty::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.SetKeyConfig_OfflineBattle
// 0x03C0 (0x03C0 - 0x0000)
struct KeyGuide2_C_SetKeyConfig_OfflineBattle final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BFA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetCurrentMapInfo_OutMapInfo;             // 0x0008(0x01E0)()
	bool                                          CallFunc_GetCurrentMapInfo_ReturnValue;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BFB[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetPlayerClassKeyConfigData_ReturnValue;  // 0x01F0(0x01C8)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_SetKeyConfig_OfflineBattle) == 0x000008, "Wrong alignment on KeyGuide2_C_SetKeyConfig_OfflineBattle");
static_assert(sizeof(KeyGuide2_C_SetKeyConfig_OfflineBattle) == 0x0003C0, "Wrong size on KeyGuide2_C_SetKeyConfig_OfflineBattle");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, RetValue) == 0x000000, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, CallFunc_IsStandalone_ReturnValue) == 0x000001, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, CallFunc_GetCurrentMapInfo_OutMapInfo) == 0x000008, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::CallFunc_GetCurrentMapInfo_OutMapInfo' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, CallFunc_GetCurrentMapInfo_ReturnValue) == 0x0001E8, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::CallFunc_GetCurrentMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E9, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, CallFunc_GetPlayerClassKeyConfigData_ReturnValue) == 0x0001F0, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::CallFunc_GetPlayerClassKeyConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, CallFunc_BooleanOR_ReturnValue) == 0x0003B8, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetKeyConfig_OfflineBattle, K2Node_SwitchEnum_CmpSuccess) == 0x0003B9, "Member 'KeyGuide2_C_SetKeyConfig_OfflineBattle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.SetIsMount
// 0x01D8 (0x01D8 - 0x0000)
struct KeyGuide2_C_SetIsMount final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMounting_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BFC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetPlayerClassKeyConfigData_ReturnValue;  // 0x0008(0x01C8)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_SetIsMount) == 0x000008, "Wrong alignment on KeyGuide2_C_SetIsMount");
static_assert(sizeof(KeyGuide2_C_SetIsMount) == 0x0001D8, "Wrong size on KeyGuide2_C_SetIsMount");
static_assert(offsetof(KeyGuide2_C_SetIsMount, RetValue) == 0x000000, "Member 'KeyGuide2_C_SetIsMount::RetValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetIsMount, CallFunc_IsMounting_ReturnValue) == 0x000001, "Member 'KeyGuide2_C_SetIsMount::CallFunc_IsMounting_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetIsMount, CallFunc_GetPlayerClassKeyConfigData_ReturnValue) == 0x000008, "Member 'KeyGuide2_C_SetIsMount::CallFunc_GetPlayerClassKeyConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_SetIsMount, K2Node_SwitchEnum_CmpSuccess) == 0x0001D0, "Member 'KeyGuide2_C_SetIsMount::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.GetPlayerClassKeyConfigData
// 0x0750 (0x0750 - 0x0000)
struct KeyGuide2_C_GetPlayerClassKeyConfigData final
{
public:
	struct FSBPlayerClassKeyConfigData            ReturnValue;                                       // 0x0000(0x01C8)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BFD[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BFE[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassCommonKeyConfig_ReturnValue;      // 0x01F0(0x01C8)()
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x03B8(0x01C8)()
	bool                                          CallFunc_IsClassKeyConfigCustomized_ReturnValue;   // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BFF[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            K2Node_Select_Default;                             // 0x0588(0x01C8)()
};
static_assert(alignof(KeyGuide2_C_GetPlayerClassKeyConfigData) == 0x000008, "Wrong alignment on KeyGuide2_C_GetPlayerClassKeyConfigData");
static_assert(sizeof(KeyGuide2_C_GetPlayerClassKeyConfigData) == 0x000750, "Wrong size on KeyGuide2_C_GetPlayerClassKeyConfigData");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, ReturnValue) == 0x000000, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, Temp_bool_Variable) == 0x0001C8, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001D0, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, CallFunc_GetPlayerManager_ReturnValue) == 0x0001D8, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0001E0, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, CallFunc_GetClassCommonKeyConfig_ReturnValue) == 0x0001F0, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::CallFunc_GetClassCommonKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, CallFunc_GetClassKeyConfig_ReturnValue) == 0x0003B8, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, CallFunc_IsClassKeyConfigCustomized_ReturnValue) == 0x000580, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::CallFunc_IsClassKeyConfigCustomized_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_GetPlayerClassKeyConfigData, K2Node_Select_Default) == 0x000588, "Member 'KeyGuide2_C_GetPlayerClassKeyConfigData::K2Node_Select_Default' has a wrong offset!");

// Function KeyGuide2.KeyGuide2_C.ExecChangeKeyGuide
// 0x01E8 (0x01E8 - 0x0000)
struct KeyGuide2_C_ExecChangeKeyGuide final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C00[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C01[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetPlayerClassKeyConfigData_ReturnValue;  // 0x0018(0x01C8)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide2_C_ExecChangeKeyGuide) == 0x000008, "Wrong alignment on KeyGuide2_C_ExecChangeKeyGuide");
static_assert(sizeof(KeyGuide2_C_ExecChangeKeyGuide) == 0x0001E8, "Wrong size on KeyGuide2_C_ExecChangeKeyGuide");
static_assert(offsetof(KeyGuide2_C_ExecChangeKeyGuide, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'KeyGuide2_C_ExecChangeKeyGuide::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecChangeKeyGuide, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'KeyGuide2_C_ExecChangeKeyGuide::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecChangeKeyGuide, CallFunc_GetOperateMode_ReturnValue) == 0x000010, "Member 'KeyGuide2_C_ExecChangeKeyGuide::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecChangeKeyGuide, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'KeyGuide2_C_ExecChangeKeyGuide::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecChangeKeyGuide, CallFunc_GetPlayerClassKeyConfigData_ReturnValue) == 0x000018, "Member 'KeyGuide2_C_ExecChangeKeyGuide::CallFunc_GetPlayerClassKeyConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide2_C_ExecChangeKeyGuide, CallFunc_IsValid_ReturnValue) == 0x0001E0, "Member 'KeyGuide2_C_ExecChangeKeyGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

