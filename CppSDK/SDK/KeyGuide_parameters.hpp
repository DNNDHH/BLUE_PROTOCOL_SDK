#pragma once

 

// Package: KeyGuide

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "EKeyGuideType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function KeyGuide.KeyGuide_C.ExecuteUbergraph_KeyGuide
// 0x08B8 (0x08B8 - 0x0000)
struct KeyGuide_C_ExecuteUbergraph_KeyGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BBE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESBOperateMode                                Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_2;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_3;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_4;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyGuideDisplayType                        Temp_byte_Variable_5;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BBF[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	ESBOperateMode                                Temp_byte_Variable_6;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC0[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_CustomEvent_InKeyGuideType;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC1[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC2[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC3[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyGuideDisplayType                        CallFunc_IsOperateModeGuideVisibility_ReturnValue; // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_Select_Default;                             // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_1;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC4[0x1];                                     // 0x00A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC5[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x00BC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC6[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyGuideAuto_bAuto;                     // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsEdit;                        // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC7[0x2];                                     // 0x00D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC8[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x0108(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_2;             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable_7;                              // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC9[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BCA[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActiveEfficacyType_ReturnValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveEfficacyType_ReturnValue_1;       // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMounting_ReturnValue;                   // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BCB[0x5];                                     // 0x013B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetCurrentMapInfo_OutMapInfo;             // 0x0140(0x01E0)()
	bool                                          CallFunc_GetCurrentMapInfo_ReturnValue;            // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0322(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0323(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable_8;                              // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0325(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 K2Node_Select_Default_2;                           // 0x0326(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0327(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_2;           // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassCommonKeyConfig_ReturnValue;      // 0x0330(0x01C8)()
	bool                                          CallFunc_IsClassKeyConfigCustomized_ReturnValue;   // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BCC[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x0500(0x01C8)()
	struct FSBPlayerClassKeyConfigData            K2Node_Select_Default_3;                           // 0x06C8(0x01C8)()
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0890(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0898(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BCD[0x7];                                     // 0x0899(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x08A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x08B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityOfMapName_ReturnValue;              // 0x08B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x08B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_ExecuteUbergraph_KeyGuide) == 0x000008, "Wrong alignment on KeyGuide_C_ExecuteUbergraph_KeyGuide");
static_assert(sizeof(KeyGuide_C_ExecuteUbergraph_KeyGuide) == 0x0008B8, "Wrong size on KeyGuide_C_ExecuteUbergraph_KeyGuide");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, EntryPoint) == 0x000000, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable) == 0x000004, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_1) == 0x000018, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_2) == 0x000019, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_3) == 0x00001A, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_4) == 0x00001B, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_5) == 0x00001C, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_bool_Variable) == 0x00001D, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_bool_Variable_1) == 0x00001E, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_bool_Variable_2) == 0x00001F, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_bool_Variable_3) == 0x000040, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_6) == 0x000054, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CreateDelegate_OutputDelegate_4) == 0x000058, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000068, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CustomEvent_InKeyGuideType) == 0x000070, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CustomEvent_InKeyGuideType' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CustomEvent_IsVisible) == 0x000071, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetPlayerManager_ReturnValue) == 0x000078, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetConfigSaveManager_IsValid) == 0x000080, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000088, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000090, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000098, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetOperateMode_ReturnValue) == 0x0000A0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsOperateModeGuideVisibility_ReturnValue) == 0x0000A1, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsOperateModeGuideVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_Select_Default) == 0x0000A2, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_Select_Default_1) == 0x0000A3, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetOperateMode_ReturnValue_1) == 0x0000A4, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetOperateMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_bool_IsClosed_Variable) == 0x0000A5, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_Event_IsDesignTime) == 0x0000A6, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000A8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000B0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CustomEvent_InRetCode) == 0x0000BC, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000C8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsKeyGuideAuto_bAuto) == 0x0000D1, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsKeyGuideAuto_bAuto' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_BooleanAND_ReturnValue) == 0x0000D2, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CustomEvent_bIsEdit) == 0x0000D3, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CustomEvent_bIsEdit' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsValid_ReturnValue) == 0x0000D4, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_bool_Has_Been_Initd_Variable) == 0x0000D5, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetPlayerManager_ReturnValue_1) == 0x0000D8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetEventExecutor_ReturnValue) == 0x0000E0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CustomEvent_Sender) == 0x0000E8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CustomEvent_Param) == 0x0000F0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0000F8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000100, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_CustomEvent_SkinType) == 0x000108, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetOperateMode_ReturnValue_2) == 0x000109, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetOperateMode_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00010A, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_7) == 0x00010B, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000110, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetSBPlayerState_ReturnValue) == 0x000118, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000120, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_DynamicCast_bSuccess_2) == 0x000128, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000130, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsActiveEfficacyType_ReturnValue) == 0x000138, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsActiveEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsActiveEfficacyType_ReturnValue_1) == 0x000139, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsActiveEfficacyType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsMounting_ReturnValue) == 0x00013A, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsMounting_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetCurrentMapInfo_OutMapInfo) == 0x000140, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetCurrentMapInfo_OutMapInfo' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetCurrentMapInfo_ReturnValue) == 0x000320, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetCurrentMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_BooleanOR_ReturnValue) == 0x000321, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_BooleanOR_ReturnValue_1) == 0x000322, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000323, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, Temp_byte_Variable_8) == 0x000324, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_SwitchEnum_CmpSuccess) == 0x000325, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_Select_Default_2) == 0x000326, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_SwitchEnum_CmpSuccess_1) == 0x000327, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetPlayerManager_ReturnValue_2) == 0x000328, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetPlayerManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetClassCommonKeyConfig_ReturnValue) == 0x000330, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetClassCommonKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsClassKeyConfigCustomized_ReturnValue) == 0x0004F8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsClassKeyConfigCustomized_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetClassKeyConfig_ReturnValue) == 0x000500, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, K2Node_Select_Default_3) == 0x0006C8, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000890, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsStandalone_ReturnValue) == 0x000898, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x0008A0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x0008B0, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_BooleanOR_ReturnValue_2) == 0x0008B1, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_IsCityOfMapName_ReturnValue) == 0x0008B2, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_IsCityOfMapName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_ExecuteUbergraph_KeyGuide, CallFunc_BooleanOR_ReturnValue_3) == 0x0008B3, "Member 'KeyGuide_C_ExecuteUbergraph_KeyGuide::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.OnChangePad
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide_C_OnChangePad final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_C_OnChangePad) == 0x000001, "Wrong alignment on KeyGuide_C_OnChangePad");
static_assert(sizeof(KeyGuide_C_OnChangePad) == 0x000001, "Wrong size on KeyGuide_C_OnChangePad");
static_assert(offsetof(KeyGuide_C_OnChangePad, SkinType) == 0x000000, "Member 'KeyGuide_C_OnChangePad::SkinType' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct KeyGuide_C_CustomEvent_0 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_C_CustomEvent_0) == 0x000008, "Wrong alignment on KeyGuide_C_CustomEvent_0");
static_assert(sizeof(KeyGuide_C_CustomEvent_0) == 0x000010, "Wrong size on KeyGuide_C_CustomEvent_0");
static_assert(offsetof(KeyGuide_C_CustomEvent_0, Sender) == 0x000000, "Member 'KeyGuide_C_CustomEvent_0::Sender' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_CustomEvent_0, Param) == 0x000008, "Member 'KeyGuide_C_CustomEvent_0::Param' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide_C_SetEditMode final
{
public:
	bool                                          bIsEdit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_SetEditMode) == 0x000001, "Wrong alignment on KeyGuide_C_SetEditMode");
static_assert(sizeof(KeyGuide_C_SetEditMode) == 0x000001, "Wrong size on KeyGuide_C_SetEditMode");
static_assert(offsetof(KeyGuide_C_SetEditMode, bIsEdit) == 0x000000, "Member 'KeyGuide_C_SetEditMode::bIsEdit' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.OnAdventurerRankDelegate_Event
// 0x0004 (0x0004 - 0x0000)
struct KeyGuide_C_OnAdventurerRankDelegate_Event final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_C_OnAdventurerRankDelegate_Event) == 0x000004, "Wrong alignment on KeyGuide_C_OnAdventurerRankDelegate_Event");
static_assert(sizeof(KeyGuide_C_OnAdventurerRankDelegate_Event) == 0x000004, "Wrong size on KeyGuide_C_OnAdventurerRankDelegate_Event");
static_assert(offsetof(KeyGuide_C_OnAdventurerRankDelegate_Event, InRetCode) == 0x000000, "Member 'KeyGuide_C_OnAdventurerRankDelegate_Event::InRetCode' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide_C_PreConstruct final
{
public:
	bool                                          Param_IsDesignTime;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_PreConstruct) == 0x000001, "Wrong alignment on KeyGuide_C_PreConstruct");
static_assert(sizeof(KeyGuide_C_PreConstruct) == 0x000001, "Wrong size on KeyGuide_C_PreConstruct");
static_assert(offsetof(KeyGuide_C_PreConstruct, Param_IsDesignTime) == 0x000000, "Member 'KeyGuide_C_PreConstruct::Param_IsDesignTime' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.ChangeKeyGuideVisibility
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide_C_ChangeKeyGuideVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_ChangeKeyGuideVisibility) == 0x000001, "Wrong alignment on KeyGuide_C_ChangeKeyGuideVisibility");
static_assert(sizeof(KeyGuide_C_ChangeKeyGuideVisibility) == 0x000001, "Wrong size on KeyGuide_C_ChangeKeyGuideVisibility");
static_assert(offsetof(KeyGuide_C_ChangeKeyGuideVisibility, Param_IsVisible) == 0x000000, "Member 'KeyGuide_C_ChangeKeyGuideVisibility::Param_IsVisible' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.ChangeKeyGuide
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide_C_ChangeKeyGuide final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_C_ChangeKeyGuide) == 0x000001, "Wrong alignment on KeyGuide_C_ChangeKeyGuide");
static_assert(sizeof(KeyGuide_C_ChangeKeyGuide) == 0x000001, "Wrong size on KeyGuide_C_ChangeKeyGuide");
static_assert(offsetof(KeyGuide_C_ChangeKeyGuide, InKeyGuideType) == 0x000000, "Member 'KeyGuide_C_ChangeKeyGuide::InKeyGuideType' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.IsKeyGuideAuto
// 0x0018 (0x0018 - 0x0000)
struct KeyGuide_C_IsKeyGuideAuto final
{
public:
	bool                                          bAuto;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BCE[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyGuideDisplayType                        CallFunc_IsOperateModeGuideVisibility_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_IsKeyGuideAuto) == 0x000008, "Wrong alignment on KeyGuide_C_IsKeyGuideAuto");
static_assert(sizeof(KeyGuide_C_IsKeyGuideAuto) == 0x000018, "Wrong size on KeyGuide_C_IsKeyGuideAuto");
static_assert(offsetof(KeyGuide_C_IsKeyGuideAuto, bAuto) == 0x000000, "Member 'KeyGuide_C_IsKeyGuideAuto::bAuto' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_IsKeyGuideAuto, CallFunc_GetConfigSaveManager_IsValid) == 0x000001, "Member 'KeyGuide_C_IsKeyGuideAuto::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_IsKeyGuideAuto, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'KeyGuide_C_IsKeyGuideAuto::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_IsKeyGuideAuto, CallFunc_IsOperateModeGuideVisibility_ReturnValue) == 0x000010, "Member 'KeyGuide_C_IsKeyGuideAuto::CallFunc_IsOperateModeGuideVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_IsKeyGuideAuto, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'KeyGuide_C_IsKeyGuideAuto::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.SetTextVisible
// 0x0003 (0x0003 - 0x0000)
struct KeyGuide_C_SetTextVisible final
{
public:
	ESkillActionPosition                          Param_SkillActionPosition;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsVisible;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_SetTextVisible) == 0x000001, "Wrong alignment on KeyGuide_C_SetTextVisible");
static_assert(sizeof(KeyGuide_C_SetTextVisible) == 0x000003, "Wrong size on KeyGuide_C_SetTextVisible");
static_assert(offsetof(KeyGuide_C_SetTextVisible, Param_SkillActionPosition) == 0x000000, "Member 'KeyGuide_C_SetTextVisible::Param_SkillActionPosition' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_SetTextVisible, Param_IsVisible) == 0x000001, "Member 'KeyGuide_C_SetTextVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_SetTextVisible, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'KeyGuide_C_SetTextVisible::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.UpdateTextVisible
// 0x0070 (0x0070 - 0x0000)
struct KeyGuide_C_UpdateTextVisible final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BCF[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_3;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_4;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_5;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_6;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_7;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_8;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_9;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_10;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_11;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_12;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_13;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_14;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_15;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_16;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_17;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_18;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_19;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_20;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          Temp_byte_Variable_21;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD0[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEquipedArtsListInfo                   CallFunc_GetEquipedArtsInfoList_ReturnValue;       // 0x0030(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEquipedArtsInfo                       CallFunc_Array_Get_Item;                           // 0x0048(0x000C)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  CallFunc_GetSkillType_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          K2Node_Select_Default;                             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMasterySkill_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD1[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_UpdateTextVisible) == 0x000008, "Wrong alignment on KeyGuide_C_UpdateTextVisible");
static_assert(sizeof(KeyGuide_C_UpdateTextVisible) == 0x000070, "Wrong size on KeyGuide_C_UpdateTextVisible");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_int_Variable) == 0x000000, "Member 'KeyGuide_C_UpdateTextVisible::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_int_Variable_1) == 0x000004, "Member 'KeyGuide_C_UpdateTextVisible::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_GetValidValue_ReturnValue) == 0x000010, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000011, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000012, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, K2Node_SwitchEnum_CmpSuccess) == 0x000013, "Member 'KeyGuide_C_UpdateTextVisible::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000014, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable) == 0x000018, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_1) == 0x000019, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_2) == 0x00001A, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_3) == 0x00001B, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_4) == 0x00001C, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_5) == 0x00001D, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_6) == 0x00001E, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_7) == 0x00001F, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_8) == 0x000020, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_9) == 0x000021, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_10) == 0x000022, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_11) == 0x000023, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_12) == 0x000024, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_13) == 0x000025, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_14) == 0x000026, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_15) == 0x000027, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_16) == 0x000028, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_17) == 0x000029, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_18) == 0x00002A, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_19) == 0x00002B, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_20) == 0x00002C, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_byte_Variable_21) == 0x00002D, "Member 'KeyGuide_C_UpdateTextVisible::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_GetEquipedArtsInfoList_ReturnValue) == 0x000030, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_GetEquipedArtsInfoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_int_Array_Index_Variable) == 0x000044, "Member 'KeyGuide_C_UpdateTextVisible::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Array_Get_Item) == 0x000048, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'KeyGuide_C_UpdateTextVisible::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_GetSkillType_ReturnValue) == 0x000058, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_GetSkillType_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, K2Node_Select_Default) == 0x00005A, "Member 'KeyGuide_C_UpdateTextVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00005B, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_IsMasterySkill_ReturnValue) == 0x000060, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_IsMasterySkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000061, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_MakeLiteralInt_ReturnValue) == 0x000064, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_C_UpdateTextVisible, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'KeyGuide_C_UpdateTextVisible::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function KeyGuide.KeyGuide_C.ExecChangeKeyGuide
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide_C_ExecChangeKeyGuide final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_C_ExecChangeKeyGuide) == 0x000001, "Wrong alignment on KeyGuide_C_ExecChangeKeyGuide");
static_assert(sizeof(KeyGuide_C_ExecChangeKeyGuide) == 0x000001, "Wrong size on KeyGuide_C_ExecChangeKeyGuide");
static_assert(offsetof(KeyGuide_C_ExecChangeKeyGuide, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'KeyGuide_C_ExecChangeKeyGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

