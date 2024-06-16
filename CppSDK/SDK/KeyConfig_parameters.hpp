#pragma once

 

// Package: KeyConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "KeyAssignSet_structs.hpp"
#include "SlateCore_structs.hpp"
#include "KeyConfigType_structs.hpp"
#include "InputCore_structs.hpp"
#include "KeyConfigItemName_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function KeyConfig.KeyConfig_C.ExecuteUbergraph_KeyConfig
// 0x0DA0 (0x0DA0 - 0x0000)
struct KeyConfig_C_ExecuteUbergraph_KeyConfig final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	ESBMoveInputCommandInterval                   Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMoveInputCommandInterval                   Temp_byte_Variable_1;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMoveInputCommandInterval                   Temp_byte_Variable_2;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BD5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNoAssignedTextId_TextId;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD6[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	bool                                          CallFunc_IsClassKeyConfigCustomized_ReturnValue;   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD7[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
	class UKeyConfig_Slider_C*                    K2Node_CustomEvent_Target_1;                       // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GenerateComboBox_LastRet1;                // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_SelectedItem;                   // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_CustomEvent_SelectionType;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_CustomEvent_NextClass;                      // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Map_Find_Value;                           // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD8[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_2;           // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassCommonKeyConfig_ReturnValue;      // 0x0140(0x01C8)()
	bool                                          CallFunc_IsClassKeyConfigCustomized_ReturnValue_1; // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD9[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x0310(0x01C8)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EConfig_KeyconfigItems                        K2Node_CustomEvent_KeyType_1;                      // 0x04D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BDA[0x6];                                     // 0x04DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_CustomEvent_DownKey_1;                      // 0x04E0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsFunction3Key_ReturnValue;               // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BDB[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Key_GetDisplayName_ReturnValue;           // 0x0500(0x0018)()
	bool                                          CallFunc_IsFunction2Key_ReturnValue;               // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFunctionKey_ReturnValue;                // 0x0519(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigGamepadKey                        CallFunc_PadToKeyConfigKey_ReturnValue;            // 0x051A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x051B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x051C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x051D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x051E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EConfig_KeyconfigItems                        K2Node_CustomEvent_KeyType;                        // 0x051F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0521(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0522(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BDC[0x5];                                     // 0x0523(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_CustomEvent_DownKey;                        // 0x0528(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigMouseKey                          CallFunc_MouseToKeyConfigKey_ReturnValue;          // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_KeyToKeyConfigKey_ReturnValue;            // 0x0542(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnassignableMouseKey_IsUnassighnableKey; // 0x0543(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0545(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Key_IsMouseButton_ReturnValue;            // 0x0546(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Key_IsKeyboardKey_ReturnValue;            // 0x0547(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x0549(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_4;                       // 0x054A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnassignableKeyboardKey_IsUnassighnableKey; // 0x054B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x054C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x054D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bLock;                          // 0x054E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BDD[0x1];                                     // 0x054F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_1;                            // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetChangedTop_Target;                     // 0x0558(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChangedTop_bChanged;                   // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0561(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BDE[0x6];                                     // 0x0562(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0568(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0578(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_3;                       // 0x0591(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0592(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BDF[0x1];                                     // 0x0593(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0594(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5BE0[0x4];                                     // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_3;           // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE1[0x3];                                     // 0x05B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InTextId;                       // 0x05B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNone_bHasNone;                         // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE2[0x7];                                     // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x05C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x05D0(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x05E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x05E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE3[0x2];                                     // 0x05EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x05EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x05FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x05FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x05FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x05FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0601(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE4[0x6];                                     // 0x0602(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0619(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChanged_bChanged;                       // 0x061A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x061B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_CustomEvent_Value;                          // 0x061C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Ratio;                          // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        K2Node_CustomEvent_Type_1;                         // 0x0624(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BE5[0x3];                                     // 0x0625(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeyConfig_Slider_C*                    K2Node_CustomEvent_Target;                         // 0x0628(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE6[0x3];                                     // 0x0631(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGamePadCameraSpeedRatePitch_OutValue;  // 0x0634(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGamePadCameraSpeedRateYaw_OutValue;    // 0x0638(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x063C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0640(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        K2Node_CustomEvent_Type;                           // 0x0644(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0645(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0646(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMoveInputCommandInterval                   K2Node_Select_Default_2;                           // 0x0647(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE7[0x3];                                     // 0x0649(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x064C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0650(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0660(0x0018)()
	bool                                          CallFunc_ContainsNoAssignedKey_Assigned;           // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_Map_Find_Value_1;                         // 0x0679(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x067A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x067B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE8[0x4];                                     // 0x067C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0680(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BE9[0x7];                                     // 0x0689(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0690(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BEA[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x06A8(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BEB[0x7];                                     // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x06C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x06D8(0x0018)()
	TDelegate<void(int32 Index, EConfig_KeyconfigItems Type)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x06F0(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BEC[0x7];                                     // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x0708(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BED[0x7];                                     // 0x0719(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0720(0x0018)()
	bool                                          Temp_bool_Variable_5;                              // 0x0738(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BEE[0x3];                                     // 0x0739(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x073C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5BEF[0x4];                                     // 0x074C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_8;           // 0x0750(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0760(0x0018)()
	bool                                          Temp_bool_Variable_6;                              // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF0[0x7];                                     // 0x0779(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverKeyInput_C*                        CallFunc_Create_ReturnValue_1;                     // 0x0780(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            K2Node_Select_Default_3;                           // 0x0788(0x01C8)()
	struct FSBPlayerClassKeyConfigData            K2Node_Select_Default_4;                           // 0x0950(0x01C8)()
	class UOverKeyInput_C*                        CallFunc_Create_ReturnValue_2;                     // 0x0B18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverKeyInput_C*                        CallFunc_Create_ReturnValue_3;                     // 0x0B20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_5;            // 0x0B28(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0B38(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_6;            // 0x0B40(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_5;                     // 0x0B50(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0B58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BF1[0x7];                                     // 0x0B59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0B60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0B68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF2[0x7];                                     // 0x0B69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerControllerBase*                K2Node_DynamicCast_AsSBPlayer_Controller_Base;     // 0x0B70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0B78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF3[0x7];                                     // 0x0B79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerControllerBase*                K2Node_DynamicCast_AsSBPlayer_Controller_Base_1;   // 0x0B80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0B88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0B89(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x0B8A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x0B8B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_7;            // 0x0B8C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5BF4[0x4];                                     // 0x0B9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0BA0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnableKey;                    // 0x0BA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF5[0x7];                                     // 0x0BA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerControllerBase*                K2Node_DynamicCast_AsSBPlayer_Controller_Base_2;   // 0x0BB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0BB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_SaveKeyConfig_ReturnValue;        // 0x0BB9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF6[0x6];                                     // 0x0BBA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_Select_Default_6;                           // 0x0BC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0BC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnassignablePadKey_IsUnassighnableKey;  // 0x0BCC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF7[0x3];                                     // 0x0BCD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_CustomEvent_Key;                            // 0x0BD0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0BE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF8[0x7];                                     // 0x0BE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_9;           // 0x0BF0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0C00(0x0018)()
	bool                                          CallFunc_ContainsNoAssignedKey_Assigned_1;         // 0x0C18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0C19(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BF9[0x6];                                     // 0x0C1A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_6;                     // 0x0C20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FKey& DownKey)>   K2Node_CreateDelegate_OutputDelegate_8;            // 0x0C28(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0C38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BFA[0x3];                                     // 0x0C39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EConfig_KeyconfigItems KeyType)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0C3C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDispNoneDialog_IsNeedNoneDisp;          // 0x0C4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BFB[0x3];                                     // 0x0C4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetKeyConfigSliderMinMax_Min;             // 0x0C50(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetKeyConfigSliderMinMax_Max;             // 0x0C54(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetKeyConfigPersentageBias_ReturnValue;   // 0x0C58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetKeyConfigMouseBias_ReturnValue;        // 0x0C5C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0C60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0C64(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0C68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0C6C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0C70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0C74(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FKey& DownKey)>   K2Node_CreateDelegate_OutputDelegate_10;           // 0x0C78(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDispNoneDialog_IsNeedNoneDisp_1;        // 0x0C88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BFC[0x3];                                     // 0x0C89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0C8C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_7;                     // 0x0C90(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EConfig_KeyconfigItems KeyType)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0C98(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& SelectedItem, ESelectInfo SelectionType)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0CA8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0CB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BFD[0x7];                                     // 0x0CB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0CC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0CC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BFE[0x7];                                     // 0x0CC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerControllerBase*                K2Node_DynamicCast_AsSBPlayer_Controller_Base_3;   // 0x0CD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0CD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_SaveKeyConfig_ReturnValue_1;      // 0x0CD9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BFF[0x2];                                     // 0x0CDA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetKeyConfigMouseFixedValue_ReturnValue;  // 0x0CDC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x0CE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C00[0x3];                                     // 0x0CE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0CE4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidKeyConfigWarnMsg_ReturnValue;        // 0x0CE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C01[0x7];                                     // 0x0CE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_10;          // 0x0CF0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0D00(0x0018)()
	bool                                          CallFunc_IsWarningKey_bIsWarning;                  // 0x0D18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C02[0x7];                                     // 0x0D19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_IsWarningKey_WarningText;                 // 0x0D20(0x0018)()
	bool                                          Temp_bool_Variable_10;                             // 0x0D38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C03[0x7];                                     // 0x0D39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_7;                           // 0x0D40(0x0018)()
	bool                                          K2Node_Select_Default_8;                           // 0x0D58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C04[0x7];                                     // 0x0D59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_CustomEvent_InKey;                          // 0x0D60(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_ValidKeyConfigWarnMsg_ReturnValue_1;      // 0x0D78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWarningKey_bIsWarning_1;                // 0x0D79(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C05[0x6];                                     // 0x0D7A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_IsWarningKey_WarningText_1;               // 0x0D80(0x0018)()
	bool                                          Temp_bool_Variable_11;                             // 0x0D98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_9;                           // 0x0D99(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_ExecuteUbergraph_KeyConfig) == 0x000008, "Wrong alignment on KeyConfig_C_ExecuteUbergraph_KeyConfig");
static_assert(sizeof(KeyConfig_C_ExecuteUbergraph_KeyConfig) == 0x000DA0, "Wrong size on KeyConfig_C_ExecuteUbergraph_KeyConfig");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, EntryPoint) == 0x000000, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable) == 0x000004, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_int_Variable) == 0x000008, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable) == 0x00001C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable_1) == 0x00001D, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable_2) == 0x00001E, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_1) == 0x00001F, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerManager_ReturnValue) == 0x000020, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable_3) == 0x000028, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerManager_ReturnValue_1) == 0x000058, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetNoAssignedTextId_TextId) == 0x000060, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetNoAssignedTextId_TextId' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000064, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000068, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsClassKeyConfigCustomized_ReturnValue) == 0x000090, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsClassKeyConfigCustomized_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_object_Variable) == 0x0000D8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_MakeArray_Array) == 0x0000E0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Target_1) == 0x000108, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Target_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GenerateComboBox_LastRet1) == 0x000110, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GenerateComboBox_LastRet1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_SelectedItem) == 0x000120, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_SelectionType) == 0x000130, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_NextClass) == 0x000131, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_NextClass' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Map_Find_Value) == 0x000132, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Map_Find_ReturnValue) == 0x000133, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerManager_ReturnValue_2) == 0x000138, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetClassCommonKeyConfig_ReturnValue) == 0x000140, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetClassCommonKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsClassKeyConfigCustomized_ReturnValue_1) == 0x000308, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsClassKeyConfigCustomized_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetClassKeyConfig_ReturnValue) == 0x000310, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsValid_ReturnValue) == 0x0004D8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_KeyType_1) == 0x0004D9, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_KeyType_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_DownKey_1) == 0x0004E0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_DownKey_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsFunction3Key_ReturnValue) == 0x0004F8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsFunction3Key_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Key_GetDisplayName_ReturnValue) == 0x000500, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Key_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsFunction2Key_ReturnValue) == 0x000518, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsFunction2Key_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsFunctionKey_ReturnValue) == 0x000519, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsFunctionKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_PadToKeyConfigKey_ReturnValue) == 0x00051A, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_PadToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Key_IsGamepadKey_ReturnValue) == 0x00051B, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Key_IsGamepadKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_BooleanOR_ReturnValue) == 0x00051C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_BooleanOR_ReturnValue_1) == 0x00051D, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_BooleanOR_ReturnValue_2) == 0x00051E, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_KeyType) == 0x00051F, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_KeyType' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000520, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000521, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_BooleanOR_ReturnValue_3) == 0x000522, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_DownKey) == 0x000528, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_DownKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsValid_ReturnValue_1) == 0x000540, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_MouseToKeyConfigKey_ReturnValue) == 0x000541, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_MouseToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_KeyToKeyConfigKey_ReturnValue) == 0x000542, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_KeyToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsUnassignableMouseKey_IsUnassighnableKey) == 0x000543, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsUnassignableMouseKey_IsUnassighnableKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000544, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Not_PreBool_ReturnValue) == 0x000545, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Key_IsMouseButton_ReturnValue) == 0x000546, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Key_IsMouseButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Key_IsKeyboardKey_ReturnValue) == 0x000547, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Key_IsKeyboardKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_BooleanOR_ReturnValue_4) == 0x000548, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_BooleanOR_ReturnValue_5) == 0x000549, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Result_4) == 0x00054A, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsUnassignableKeyboardKey_IsUnassighnableKey) == 0x00054B, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsUnassignableKeyboardKey_IsUnassighnableKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00054C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Not_PreBool_ReturnValue_1) == 0x00054D, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_bLock) == 0x00054E, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_bLock' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_object_Variable_1) == 0x000550, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetChangedTop_Target) == 0x000558, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetChangedTop_Target' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetChangedTop_bChanged) == 0x000560, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetChangedTop_bChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable_4) == 0x000561, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000568, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000578, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_2) == 0x000590, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Result_3) == 0x000591, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000592, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_1) == 0x000594, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerManager_ReturnValue_3) == 0x0005A8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0005B0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_InTextId) == 0x0005B4, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_InTextId' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_HasNone_bHasNone) == 0x0005B8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_HasNone_bHasNone' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0005C0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0005D0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Result_2) == 0x0005E8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0005E9, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_2) == 0x0005EC, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_3) == 0x0005FC, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable_5) == 0x0005FD, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default) == 0x0005FE, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsValid_ReturnValue_2) == 0x0005FF, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsValid_ReturnValue_3) == 0x000600, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_4) == 0x000601, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000608, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000610, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_bSuccess) == 0x000618, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_1) == 0x000619, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsChanged_bChanged) == 0x00061A, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsChanged_bChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x00061B, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Value) == 0x00061C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Ratio) == 0x000620, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Ratio' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Type_1) == 0x000624, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Type_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Target) == 0x000628, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_SwitchEnum_CmpSuccess) == 0x000630, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetGamePadCameraSpeedRatePitch_OutValue) == 0x000634, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetGamePadCameraSpeedRatePitch_OutValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetGamePadCameraSpeedRateYaw_OutValue) == 0x000638, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetGamePadCameraSpeedRateYaw_OutValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00063C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Index) == 0x000640, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Type) == 0x000644, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_SwitchEnum_CmpSuccess_1) == 0x000645, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000646, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_2) == 0x000647, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000648, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_SelectInt_ReturnValue) == 0x00064C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000650, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000660, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_ContainsNoAssignedKey_Assigned) == 0x000678, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_ContainsNoAssignedKey_Assigned' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Map_Find_Value_1) == 0x000679, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Map_Find_ReturnValue_1) == 0x00067A, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Not_PreBool_ReturnValue_2) == 0x00067B, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue) == 0x000680, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_MakeLiteralByte_ReturnValue) == 0x000688, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000690, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x0006A0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0006A8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Not_PreBool_ReturnValue_3) == 0x0006C0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x0006C8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0006D8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_3) == 0x0006F0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Result_1) == 0x000700, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x000708, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000718, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000720, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_5) == 0x000738, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_4) == 0x00073C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_8) == 0x000750, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000760, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_6) == 0x000778, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue_1) == 0x000780, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_3) == 0x000788, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_4) == 0x000950, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue_2) == 0x000B18, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue_3) == 0x000B20, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_5) == 0x000B28, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue_4) == 0x000B38, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_6) == 0x000B40, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue_5) == 0x000B50, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable_6) == 0x000B58, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerController_ReturnValue) == 0x000B60, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Result) == 0x000B68, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_AsSBPlayer_Controller_Base) == 0x000B70, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_AsSBPlayer_Controller_Base' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_bSuccess_1) == 0x000B78, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_AsSBPlayer_Controller_Base_1) == 0x000B80, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_AsSBPlayer_Controller_Base_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_bSuccess_2) == 0x000B88, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_byte_Variable_7) == 0x000B89, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_7) == 0x000B8A, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_5) == 0x000B8B, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_7) == 0x000B8C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerController_ReturnValue_1) == 0x000BA0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_IsEnableKey) == 0x000BA8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_IsEnableKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_AsSBPlayer_Controller_Base_2) == 0x000BB0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_AsSBPlayer_Controller_Base_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_bSuccess_3) == 0x000BB8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Request_SaveKeyConfig_ReturnValue) == 0x000BB9, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Request_SaveKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_6) == 0x000BC0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_PlaySE_ReturnValue) == 0x000BC8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsUnassignablePadKey_IsUnassighnableKey) == 0x000BCC, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsUnassignablePadKey_IsUnassighnableKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_Key) == 0x000BD0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_Key' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Not_PreBool_ReturnValue_4) == 0x000BE8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_9) == 0x000BF0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000C00, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_ContainsNoAssignedKey_Assigned_1) == 0x000C18, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_ContainsNoAssignedKey_Assigned_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Not_PreBool_ReturnValue_5) == 0x000C19, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue_6) == 0x000C20, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_8) == 0x000C28, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Not_PreBool_ReturnValue_6) == 0x000C38, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_9) == 0x000C3C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsDispNoneDialog_IsNeedNoneDisp) == 0x000C4C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsDispNoneDialog_IsNeedNoneDisp' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetKeyConfigSliderMinMax_Min) == 0x000C50, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetKeyConfigSliderMinMax_Min' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetKeyConfigSliderMinMax_Max) == 0x000C54, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetKeyConfigSliderMinMax_Max' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetKeyConfigPersentageBias_ReturnValue) == 0x000C58, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetKeyConfigPersentageBias_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetKeyConfigMouseBias_ReturnValue) == 0x000C5C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetKeyConfigMouseBias_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000C60, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000C64, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_FClamp_ReturnValue) == 0x000C68, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000C6C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000C70, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_FClamp_ReturnValue_1) == 0x000C74, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_10) == 0x000C78, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsDispNoneDialog_IsNeedNoneDisp_1) == 0x000C88, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsDispNoneDialog_IsNeedNoneDisp_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_PlaySE_ReturnValue_1) == 0x000C8C, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Create_ReturnValue_7) == 0x000C90, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_11) == 0x000C98, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CreateDelegate_OutputDelegate_12) == 0x000CA8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsValid_ReturnValue_4) == 0x000CB8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetPlayerController_ReturnValue_2) == 0x000CC0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_8) == 0x000CC8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_AsSBPlayer_Controller_Base_3) == 0x000CD0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_AsSBPlayer_Controller_Base_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_DynamicCast_bSuccess_4) == 0x000CD8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Request_SaveKeyConfig_ReturnValue_1) == 0x000CD9, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Request_SaveKeyConfig_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetKeyConfigMouseFixedValue_ReturnValue) == 0x000CDC, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetKeyConfigMouseFixedValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_9) == 0x000CE0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Add_FloatFloat_ReturnValue) == 0x000CE4, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_ValidKeyConfigWarnMsg_ReturnValue) == 0x000CE8, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_ValidKeyConfigWarnMsg_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_GetTextFromAsset_ReturnValue_10) == 0x000CF0, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_GetTextFromAsset_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000D00, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsWarningKey_bIsWarning) == 0x000D18, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsWarningKey_bIsWarning' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsWarningKey_WarningText) == 0x000D20, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsWarningKey_WarningText' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_10) == 0x000D38, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_7) == 0x000D40, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_8) == 0x000D58, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_CustomEvent_InKey) == 0x000D60, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_CustomEvent_InKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_ValidKeyConfigWarnMsg_ReturnValue_1) == 0x000D78, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_ValidKeyConfigWarnMsg_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsWarningKey_bIsWarning_1) == 0x000D79, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsWarningKey_bIsWarning_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, CallFunc_IsWarningKey_WarningText_1) == 0x000D80, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::CallFunc_IsWarningKey_WarningText_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, Temp_bool_Variable_11) == 0x000D98, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ExecuteUbergraph_KeyConfig, K2Node_Select_Default_9) == 0x000D99, "Member 'KeyConfig_C_ExecuteUbergraph_KeyConfig::K2Node_Select_Default_9' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IfShowWarnMsg
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_C_IfShowWarnMsg final
{
public:
	struct FKey                                   InKey;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_IfShowWarnMsg) == 0x000008, "Wrong alignment on KeyConfig_C_IfShowWarnMsg");
static_assert(sizeof(KeyConfig_C_IfShowWarnMsg) == 0x000018, "Wrong size on KeyConfig_C_IfShowWarnMsg");
static_assert(offsetof(KeyConfig_C_IfShowWarnMsg, InKey) == 0x000000, "Member 'KeyConfig_C_IfShowWarnMsg::InKey' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.RequestUnassignableKeyMsg
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_C_RequestUnassignableKeyMsg final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_RequestUnassignableKeyMsg) == 0x000008, "Wrong alignment on KeyConfig_C_RequestUnassignableKeyMsg");
static_assert(sizeof(KeyConfig_C_RequestUnassignableKeyMsg) == 0x000018, "Wrong size on KeyConfig_C_RequestUnassignableKeyMsg");
static_assert(offsetof(KeyConfig_C_RequestUnassignableKeyMsg, Key) == 0x000000, "Member 'KeyConfig_C_RequestUnassignableKeyMsg::Key' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.PlayKeySetSound
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_PlayKeySetSound final
{
public:
	bool                                          IsEnableKey;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_PlayKeySetSound) == 0x000001, "Wrong alignment on KeyConfig_C_PlayKeySetSound");
static_assert(sizeof(KeyConfig_C_PlayKeySetSound) == 0x000001, "Wrong size on KeyConfig_C_PlayKeySetSound");
static_assert(offsetof(KeyConfig_C_PlayKeySetSound, IsEnableKey) == 0x000000, "Member 'KeyConfig_C_PlayKeySetSound::IsEnableKey' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.OnSavedResetKeyConfig
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_OnSavedResetKeyConfig final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_OnSavedResetKeyConfig) == 0x000001, "Wrong alignment on KeyConfig_C_OnSavedResetKeyConfig");
static_assert(sizeof(KeyConfig_C_OnSavedResetKeyConfig) == 0x000001, "Wrong size on KeyConfig_C_OnSavedResetKeyConfig");
static_assert(offsetof(KeyConfig_C_OnSavedResetKeyConfig, Result) == 0x000000, "Member 'KeyConfig_C_OnSavedResetKeyConfig::Result' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.Cansel_Change
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_Cansel_Change final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_Cansel_Change) == 0x000001, "Wrong alignment on KeyConfig_C_Cansel_Change");
static_assert(sizeof(KeyConfig_C_Cansel_Change) == 0x000001, "Wrong size on KeyConfig_C_Cansel_Change");
static_assert(offsetof(KeyConfig_C_Cansel_Change, Result) == 0x000000, "Member 'KeyConfig_C_Cansel_Change::Result' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.RadioButton
// 0x0008 (0x0008 - 0x0000)
struct KeyConfig_C_RadioButton final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Type;                                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_RadioButton) == 0x000004, "Wrong alignment on KeyConfig_C_RadioButton");
static_assert(sizeof(KeyConfig_C_RadioButton) == 0x000008, "Wrong size on KeyConfig_C_RadioButton");
static_assert(offsetof(KeyConfig_C_RadioButton, Param_Index) == 0x000000, "Member 'KeyConfig_C_RadioButton::Param_Index' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_RadioButton, Type) == 0x000004, "Member 'KeyConfig_C_RadioButton::Type' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.OnSliderChange
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_C_OnSliderChange final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Type;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C06[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeyConfig_Slider_C*                    Target;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_OnSliderChange) == 0x000008, "Wrong alignment on KeyConfig_C_OnSliderChange");
static_assert(sizeof(KeyConfig_C_OnSliderChange) == 0x000018, "Wrong size on KeyConfig_C_OnSliderChange");
static_assert(offsetof(KeyConfig_C_OnSliderChange, Value) == 0x000000, "Member 'KeyConfig_C_OnSliderChange::Value' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_OnSliderChange, Ratio) == 0x000004, "Member 'KeyConfig_C_OnSliderChange::Ratio' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_OnSliderChange, Type) == 0x000008, "Member 'KeyConfig_C_OnSliderChange::Type' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_OnSliderChange, Target) == 0x000010, "Member 'KeyConfig_C_OnSliderChange::Target' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.Result_Agreement
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_Result_Agreement final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_Result_Agreement) == 0x000001, "Wrong alignment on KeyConfig_C_Result_Agreement");
static_assert(sizeof(KeyConfig_C_Result_Agreement) == 0x000001, "Wrong size on KeyConfig_C_Result_Agreement");
static_assert(offsetof(KeyConfig_C_Result_Agreement, Result) == 0x000000, "Member 'KeyConfig_C_Result_Agreement::Result' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.SaveAgreementCheck
// 0x0004 (0x0004 - 0x0000)
struct KeyConfig_C_SaveAgreementCheck final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_SaveAgreementCheck) == 0x000004, "Wrong alignment on KeyConfig_C_SaveAgreementCheck");
static_assert(sizeof(KeyConfig_C_SaveAgreementCheck) == 0x000004, "Wrong size on KeyConfig_C_SaveAgreementCheck");
static_assert(offsetof(KeyConfig_C_SaveAgreementCheck, InTextID) == 0x000000, "Member 'KeyConfig_C_SaveAgreementCheck::InTextID' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.Checked
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_Checked final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_Checked) == 0x000001, "Wrong alignment on KeyConfig_C_Checked");
static_assert(sizeof(KeyConfig_C_Checked) == 0x000001, "Wrong size on KeyConfig_C_Checked");
static_assert(offsetof(KeyConfig_C_Checked, Result) == 0x000000, "Member 'KeyConfig_C_Checked::Result' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.UIBlock
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_UIBlock final
{
public:
	bool                                          bLock;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_UIBlock) == 0x000001, "Wrong alignment on KeyConfig_C_UIBlock");
static_assert(sizeof(KeyConfig_C_UIBlock) == 0x000001, "Wrong size on KeyConfig_C_UIBlock");
static_assert(offsetof(KeyConfig_C_UIBlock, bLock) == 0x000000, "Member 'KeyConfig_C_UIBlock::bLock' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsInitializable
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_IsInitializable final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_IsInitializable) == 0x000001, "Wrong alignment on KeyConfig_C_IsInitializable");
static_assert(sizeof(KeyConfig_C_IsInitializable) == 0x000001, "Wrong size on KeyConfig_C_IsInitializable");
static_assert(offsetof(KeyConfig_C_IsInitializable, Result) == 0x000000, "Member 'KeyConfig_C_IsInitializable::Result' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.KeyInputed_KeyMouse
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_C_KeyInputed_KeyMouse final
{
public:
	struct FKey                                   DownKey;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_KeyInputed_KeyMouse) == 0x000008, "Wrong alignment on KeyConfig_C_KeyInputed_KeyMouse");
static_assert(sizeof(KeyConfig_C_KeyInputed_KeyMouse) == 0x000018, "Wrong size on KeyConfig_C_KeyInputed_KeyMouse");
static_assert(offsetof(KeyConfig_C_KeyInputed_KeyMouse, DownKey) == 0x000000, "Member 'KeyConfig_C_KeyInputed_KeyMouse::DownKey' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.PadChange
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_PadChange final
{
public:
	EConfig_KeyconfigItems                        KeyType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_PadChange) == 0x000001, "Wrong alignment on KeyConfig_C_PadChange");
static_assert(sizeof(KeyConfig_C_PadChange) == 0x000001, "Wrong size on KeyConfig_C_PadChange");
static_assert(offsetof(KeyConfig_C_PadChange, KeyType) == 0x000000, "Member 'KeyConfig_C_PadChange::KeyType' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.KeyInputed_Pad
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_C_KeyInputed_Pad final
{
public:
	struct FKey                                   DownKey;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_KeyInputed_Pad) == 0x000008, "Wrong alignment on KeyConfig_C_KeyInputed_Pad");
static_assert(sizeof(KeyConfig_C_KeyInputed_Pad) == 0x000018, "Wrong size on KeyConfig_C_KeyInputed_Pad");
static_assert(offsetof(KeyConfig_C_KeyInputed_Pad, DownKey) == 0x000000, "Member 'KeyConfig_C_KeyInputed_Pad::DownKey' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.KeyChange
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_KeyChange final
{
public:
	EConfig_KeyconfigItems                        KeyType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_KeyChange) == 0x000001, "Wrong alignment on KeyConfig_C_KeyChange");
static_assert(sizeof(KeyConfig_C_KeyChange) == 0x000001, "Wrong size on KeyConfig_C_KeyChange");
static_assert(offsetof(KeyConfig_C_KeyChange, KeyType) == 0x000000, "Member 'KeyConfig_C_KeyChange::KeyType' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.OnDropDownSelected
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_OnDropDownSelected final
{
public:
	ESBClassType                                  NextClass;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_OnDropDownSelected) == 0x000001, "Wrong alignment on KeyConfig_C_OnDropDownSelected");
static_assert(sizeof(KeyConfig_C_OnDropDownSelected) == 0x000001, "Wrong size on KeyConfig_C_OnDropDownSelected");
static_assert(offsetof(KeyConfig_C_OnDropDownSelected, NextClass) == 0x000000, "Member 'KeyConfig_C_OnDropDownSelected::NextClass' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.SelectChanged
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_C_SelectChanged final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_SelectChanged) == 0x000008, "Wrong alignment on KeyConfig_C_SelectChanged");
static_assert(sizeof(KeyConfig_C_SelectChanged) == 0x000018, "Wrong size on KeyConfig_C_SelectChanged");
static_assert(offsetof(KeyConfig_C_SelectChanged, SelectedItem) == 0x000000, "Member 'KeyConfig_C_SelectChanged::SelectedItem' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SelectChanged, SelectionType) == 0x000010, "Member 'KeyConfig_C_SelectChanged::SelectionType' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.ApplySlider
// 0x0008 (0x0008 - 0x0000)
struct KeyConfig_C_ApplySlider final
{
public:
	class UKeyConfig_Slider_C*                    Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_ApplySlider) == 0x000008, "Wrong alignment on KeyConfig_C_ApplySlider");
static_assert(sizeof(KeyConfig_C_ApplySlider) == 0x000008, "Wrong size on KeyConfig_C_ApplySlider");
static_assert(offsetof(KeyConfig_C_ApplySlider, Target) == 0x000000, "Member 'KeyConfig_C_ApplySlider::Target' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.GenerateComboBox
// 0x0070 (0x0070 - 0x0000)
struct KeyConfig_C_GenerateComboBox final
{
public:
	class FString                                 LastRet1;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LastRet;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C07[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0028(0x0010)(ReferenceParm)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C08[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C09[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C0A[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_GenerateComboBox) == 0x000008, "Wrong alignment on KeyConfig_C_GenerateComboBox");
static_assert(sizeof(KeyConfig_C_GenerateComboBox) == 0x000070, "Wrong size on KeyConfig_C_GenerateComboBox");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, LastRet1) == 0x000000, "Member 'KeyConfig_C_GenerateComboBox::LastRet1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, LastRet) == 0x000010, "Member 'KeyConfig_C_GenerateComboBox::LastRet' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, Temp_int_Array_Index_Variable) == 0x000020, "Member 'KeyConfig_C_GenerateComboBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000028, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_Array_Get_Item) == 0x000038, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_GetClassNameText_ReturnValue) == 0x000040, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'KeyConfig_C_GenerateComboBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_MakeLiteralByte_ReturnValue) == 0x00005C, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GenerateComboBox, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'KeyConfig_C_GenerateComboBox::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.ResetKeyConfig
// 0x0020 (0x0020 - 0x0000)
struct KeyConfig_C_ResetKeyConfig final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C0B[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_ResetKeyConfig) == 0x000008, "Wrong alignment on KeyConfig_C_ResetKeyConfig");
static_assert(sizeof(KeyConfig_C_ResetKeyConfig) == 0x000020, "Wrong size on KeyConfig_C_ResetKeyConfig");
static_assert(offsetof(KeyConfig_C_ResetKeyConfig, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'KeyConfig_C_ResetKeyConfig::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ResetKeyConfig, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000008, "Member 'KeyConfig_C_ResetKeyConfig::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ResetKeyConfig, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'KeyConfig_C_ResetKeyConfig::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ResetKeyConfig, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'KeyConfig_C_ResetKeyConfig::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ResetKeyConfig, CallFunc_GetPlayerManager_ReturnValue) == 0x000018, "Member 'KeyConfig_C_ResetKeyConfig::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.SetGamePadSetting
// 0x05F0 (0x05F0 - 0x0000)
struct KeyConfig_C_SetGamePadSetting final
{
public:
	struct FSBPlayerClassKeyConfigData            SBPlayerClassKeyConfigData;                        // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EConfig_KeyconfigItems                        Selection;                                         // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C0C[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   DownKey;                                           // 0x01D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<ESBKeyConfigGamepadKey>                IgnorePadKey;                                      // 0x01E8(0x0010)(Edit, BlueprintVisible)
	ESBKeyConfigGamepadKey                        CallFunc_PadToKeyConfigKey_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C0D[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        Temp_byte_Variable;                                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C0E[0x6];                                     // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0210(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C0F[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0230(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigGamepadKey                        K2Node_Select_Default;                             // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C10[0x2];                                     // 0x041A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            CallFunc_OverWriteKeyData_ReturnValue;             // 0x0420(0x01C8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x05E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x05E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_SetGamePadSetting) == 0x000008, "Wrong alignment on KeyConfig_C_SetGamePadSetting");
static_assert(sizeof(KeyConfig_C_SetGamePadSetting) == 0x0005F0, "Wrong size on KeyConfig_C_SetGamePadSetting");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, SBPlayerClassKeyConfigData) == 0x000000, "Member 'KeyConfig_C_SetGamePadSetting::SBPlayerClassKeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, Selection) == 0x0001C8, "Member 'KeyConfig_C_SetGamePadSetting::Selection' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, DownKey) == 0x0001D0, "Member 'KeyConfig_C_SetGamePadSetting::DownKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, IgnorePadKey) == 0x0001E8, "Member 'KeyConfig_C_SetGamePadSetting::IgnorePadKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_PadToKeyConfigKey_ReturnValue) == 0x0001F8, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_PadToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, Temp_int_Array_Index_Variable) == 0x0001FC, "Member 'KeyConfig_C_SetGamePadSetting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, Temp_int_Loop_Counter_Variable) == 0x000200, "Member 'KeyConfig_C_SetGamePadSetting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_Add_IntInt_ReturnValue) == 0x000204, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, Temp_byte_Variable) == 0x000208, "Member 'KeyConfig_C_SetGamePadSetting::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, Temp_bool_Variable) == 0x000209, "Member 'KeyConfig_C_SetGamePadSetting::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000210, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_Array_Get_Item) == 0x000220, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_Array_Contains_ReturnValue) == 0x000228, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_GetDataTableRowFromName_OutRow) == 0x000230, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000418, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, K2Node_Select_Default) == 0x000419, "Member 'KeyConfig_C_SetGamePadSetting::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_Array_Length_ReturnValue) == 0x00041C, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_OverWriteKeyData_ReturnValue) == 0x000420, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_OverWriteKeyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_Less_IntInt_ReturnValue) == 0x0005E8, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetGamePadSetting, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0005E9, "Member 'KeyConfig_C_SetGamePadSetting::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.SetKeyBoardSetting
// 0x05D0 (0x05D0 - 0x0000)
struct KeyConfig_C_SetKeyBoardSetting final
{
public:
	struct FSBPlayerClassKeyConfigData            SBPlayerClassKeyConfigData;                        // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EConfig_KeyconfigItems                        Selection;                                         // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C11[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   DownKey;                                           // 0x01D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       NowInput;                                          // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_KeyToKeyConfigKey_ReturnValue;            // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C12[0x2];                                     // 0x01EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x01F8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x020C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C13[0x3];                                     // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0218(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C14[0x6];                                     // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_OverWriteKeyData_ReturnValue;             // 0x0408(0x01C8)()
};
static_assert(alignof(KeyConfig_C_SetKeyBoardSetting) == 0x000008, "Wrong alignment on KeyConfig_C_SetKeyBoardSetting");
static_assert(sizeof(KeyConfig_C_SetKeyBoardSetting) == 0x0005D0, "Wrong size on KeyConfig_C_SetKeyBoardSetting");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, SBPlayerClassKeyConfigData) == 0x000000, "Member 'KeyConfig_C_SetKeyBoardSetting::SBPlayerClassKeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, Selection) == 0x0001C8, "Member 'KeyConfig_C_SetKeyBoardSetting::Selection' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, DownKey) == 0x0001D0, "Member 'KeyConfig_C_SetKeyBoardSetting::DownKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, NowInput) == 0x0001E8, "Member 'KeyConfig_C_SetKeyBoardSetting::NowInput' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_KeyToKeyConfigKey_ReturnValue) == 0x0001E9, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_KeyToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, Temp_int_Array_Index_Variable) == 0x0001EC, "Member 'KeyConfig_C_SetKeyBoardSetting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, Temp_int_Loop_Counter_Variable) == 0x0001F0, "Member 'KeyConfig_C_SetKeyBoardSetting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_Add_IntInt_ReturnValue) == 0x0001F4, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0001F8, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_Array_Length_ReturnValue) == 0x000208, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_Array_Get_Item) == 0x00020C, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_Less_IntInt_ReturnValue) == 0x000214, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_GetDataTableRowFromName_OutRow) == 0x000218, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000400, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000401, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetKeyBoardSetting, CallFunc_OverWriteKeyData_ReturnValue) == 0x000408, "Member 'KeyConfig_C_SetKeyBoardSetting::CallFunc_OverWriteKeyData_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.SetMouseSetting
// 0x05D8 (0x05D8 - 0x0000)
struct KeyConfig_C_SetMouseSetting final
{
public:
	struct FSBPlayerClassKeyConfigData            SBPlayerClassKeyConfigData;                        // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EConfig_KeyconfigItems                        Selection;                                         // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C15[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   DownKey;                                           // 0x01D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          InputKey;                                          // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C16[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_MouseToKeyConfigKey_ReturnValue;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C17[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C18[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0200(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0214(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C19[0x3];                                     // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0220(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0409(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1A[0x6];                                     // 0x040A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_OverWriteKeyData_ReturnValue;             // 0x0410(0x01C8)()
};
static_assert(alignof(KeyConfig_C_SetMouseSetting) == 0x000008, "Wrong alignment on KeyConfig_C_SetMouseSetting");
static_assert(sizeof(KeyConfig_C_SetMouseSetting) == 0x0005D8, "Wrong size on KeyConfig_C_SetMouseSetting");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, SBPlayerClassKeyConfigData) == 0x000000, "Member 'KeyConfig_C_SetMouseSetting::SBPlayerClassKeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, Selection) == 0x0001C8, "Member 'KeyConfig_C_SetMouseSetting::Selection' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, DownKey) == 0x0001D0, "Member 'KeyConfig_C_SetMouseSetting::DownKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, InputKey) == 0x0001E8, "Member 'KeyConfig_C_SetMouseSetting::InputKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, Temp_int_Array_Index_Variable) == 0x0001EC, "Member 'KeyConfig_C_SetMouseSetting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_MouseToKeyConfigKey_ReturnValue) == 0x0001F0, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_MouseToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, Temp_int_Loop_Counter_Variable) == 0x0001F4, "Member 'KeyConfig_C_SetMouseSetting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_Add_IntInt_ReturnValue) == 0x0001F8, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000200, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_Array_Get_Item) == 0x000214, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_Less_IntInt_ReturnValue) == 0x00021C, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_GetDataTableRowFromName_OutRow) == 0x000220, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000408, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000409, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_SetMouseSetting, CallFunc_OverWriteKeyData_ReturnValue) == 0x000410, "Member 'KeyConfig_C_SetMouseSetting::CallFunc_OverWriteKeyData_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsChanged
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_C_IsChanged final
{
public:
	bool                                          bChanged;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetChangedTop_Target;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChangedTop_bChanged;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_IsChanged) == 0x000008, "Wrong alignment on KeyConfig_C_IsChanged");
static_assert(sizeof(KeyConfig_C_IsChanged) == 0x000018, "Wrong size on KeyConfig_C_IsChanged");
static_assert(offsetof(KeyConfig_C_IsChanged, bChanged) == 0x000000, "Member 'KeyConfig_C_IsChanged::bChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsChanged, CallFunc_GetChangedTop_Target) == 0x000008, "Member 'KeyConfig_C_IsChanged::CallFunc_GetChangedTop_Target' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsChanged, CallFunc_GetChangedTop_bChanged) == 0x000010, "Member 'KeyConfig_C_IsChanged::CallFunc_GetChangedTop_bChanged' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsNothingTypeMouse
// 0x0040 (0x0040 - 0x0000)
struct KeyConfig_C_IsNothingTypeMouse final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBKeyConfigKeyboardKey>               K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	TArray<ESBKeyConfigMouseKey>                  K2Node_MakeArray_Array_1;                          // 0x0020(0x0010)(ReferenceParm)
	ESBKeyConfigKeyboardKey                       CallFunc_Array_Get_Item;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_Array_Get_Item_1;                         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_IsNothingTypeMouse) == 0x000008, "Wrong alignment on KeyConfig_C_IsNothingTypeMouse");
static_assert(sizeof(KeyConfig_C_IsNothingTypeMouse) == 0x000040, "Wrong size on KeyConfig_C_IsNothingTypeMouse");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, ReturnValue) == 0x000000, "Member 'KeyConfig_C_IsNothingTypeMouse::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, Temp_int_Array_Index_Variable) == 0x000004, "Member 'KeyConfig_C_IsNothingTypeMouse::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'KeyConfig_C_IsNothingTypeMouse::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, K2Node_MakeArray_Array) == 0x000010, "Member 'KeyConfig_C_IsNothingTypeMouse::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, K2Node_MakeArray_Array_1) == 0x000020, "Member 'KeyConfig_C_IsNothingTypeMouse::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_Array_Get_Item) == 0x000030, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_Array_Get_Item_1) == 0x000031, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000033, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsNothingTypeMouse, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'KeyConfig_C_IsNothingTypeMouse::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsCommandKeyAsNone
// 0x0009 (0x0009 - 0x0000)
struct KeyConfig_C_IsCommandKeyAsNone final
{
public:
	bool                                          bNone;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_IsCommandKeyAsNone) == 0x000001, "Wrong alignment on KeyConfig_C_IsCommandKeyAsNone");
static_assert(sizeof(KeyConfig_C_IsCommandKeyAsNone) == 0x000009, "Wrong size on KeyConfig_C_IsCommandKeyAsNone");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, bNone) == 0x000000, "Member 'KeyConfig_C_IsCommandKeyAsNone::bNone' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_GetActionKeyMouse_MouseKey) == 0x000001, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x000002, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_GetActionKeyPad_ReturnValue) == 0x000003, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000005, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000006, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsCommandKeyAsNone, CallFunc_BooleanOR_ReturnValue) == 0x000008, "Member 'KeyConfig_C_IsCommandKeyAsNone::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsModify
// 0x0002 (0x0002 - 0x0000)
struct KeyConfig_C_IsModify final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChanged_bChanged;                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_IsModify) == 0x000001, "Wrong alignment on KeyConfig_C_IsModify");
static_assert(sizeof(KeyConfig_C_IsModify) == 0x000002, "Wrong size on KeyConfig_C_IsModify");
static_assert(offsetof(KeyConfig_C_IsModify, ReturnValue) == 0x000000, "Member 'KeyConfig_C_IsModify::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsModify, CallFunc_IsChanged_bChanged) == 0x000001, "Member 'KeyConfig_C_IsModify::CallFunc_IsChanged_bChanged' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.On_ClassSelect_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct KeyConfig_C_On_ClassSelect_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunicateSettingMenu_ComboBoxItem1_C* CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(KeyConfig_C_On_ClassSelect_GenerateWidget_0) == 0x000008, "Wrong alignment on KeyConfig_C_On_ClassSelect_GenerateWidget_0");
static_assert(sizeof(KeyConfig_C_On_ClassSelect_GenerateWidget_0) == 0x000038, "Wrong size on KeyConfig_C_On_ClassSelect_GenerateWidget_0");
static_assert(offsetof(KeyConfig_C_On_ClassSelect_GenerateWidget_0, Item) == 0x000000, "Member 'KeyConfig_C_On_ClassSelect_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_On_ClassSelect_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'KeyConfig_C_On_ClassSelect_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_On_ClassSelect_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'KeyConfig_C_On_ClassSelect_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_On_ClassSelect_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'KeyConfig_C_On_ClassSelect_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsDispNoneDialog
// 0x04A0 (0x04A0 - 0x0000)
struct KeyConfig_C_IsDispNoneDialog final
{
public:
	bool                                          IsNeedNoneDisp;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          AssignData;                                        // 0x0008(0x01E8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKeyConfigType                         SlotData;                                          // 0x01F0(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_Get_Slot_Data_Table_Table;                // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0228(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C1E[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyConfigType                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0248(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x026D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x026E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x026F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1F[0x1];                                     // 0x0273(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C20[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0x0280(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C21[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x02A0(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C22[0x6];                                     // 0x048A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeyConfig_ConfigSlot_C*                CallFunc_GetNoneTop_AsKey_Config_Config_Slot;      // 0x0490(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNoneTop_bChanged;                      // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNone_bHasNone;                         // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x049A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x049B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_IsDispNoneDialog) == 0x000008, "Wrong alignment on KeyConfig_C_IsDispNoneDialog");
static_assert(sizeof(KeyConfig_C_IsDispNoneDialog) == 0x0004A0, "Wrong size on KeyConfig_C_IsDispNoneDialog");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, IsNeedNoneDisp) == 0x000000, "Member 'KeyConfig_C_IsDispNoneDialog::IsNeedNoneDisp' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, AssignData) == 0x000008, "Member 'KeyConfig_C_IsDispNoneDialog::AssignData' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, SlotData) == 0x0001F0, "Member 'KeyConfig_C_IsDispNoneDialog::SlotData' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, Temp_int_Array_Index_Variable) == 0x000210, "Member 'KeyConfig_C_IsDispNoneDialog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, Temp_int_Loop_Counter_Variable) == 0x000214, "Member 'KeyConfig_C_IsDispNoneDialog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Add_IntInt_ReturnValue) == 0x000218, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, Temp_int_Array_Index_Variable_1) == 0x00021C, "Member 'KeyConfig_C_IsDispNoneDialog::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Get_Slot_Data_Table_Table) == 0x000220, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Get_Slot_Data_Table_Table' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000228, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Array_Get_Item) == 0x000238, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Array_Length_ReturnValue) == 0x000240, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetDataTableRowFromName_OutRow) == 0x000248, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000268, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Less_IntInt_ReturnValue) == 0x000269, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00026A, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, K2Node_SwitchEnum_CmpSuccess) == 0x00026B, "Member 'KeyConfig_C_IsDispNoneDialog::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetActionKeyPad_ReturnValue) == 0x00026C, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetActionKeyMouse_MouseKey) == 0x00026D, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x00026E, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00026F, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000270, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000271, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_BooleanAND_ReturnValue) == 0x000272, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, Temp_int_Loop_Counter_Variable_1) == 0x000274, "Member 'KeyConfig_C_IsDispNoneDialog::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Add_IntInt_ReturnValue_1) == 0x000278, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_BooleanOR_ReturnValue) == 0x00027C, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetDataTableRowNames_OutRowNames_1) == 0x000280, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetDataTableRowNames_OutRowNames_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Array_Get_Item_1) == 0x000290, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Array_Length_ReturnValue_1) == 0x000298, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0002A0, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000488, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_Less_IntInt_ReturnValue_1) == 0x000489, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetNoneTop_AsKey_Config_Config_Slot) == 0x000490, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetNoneTop_AsKey_Config_Config_Slot' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_GetNoneTop_bChanged) == 0x000498, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_GetNoneTop_bChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_HasNone_bHasNone) == 0x000499, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_HasNone_bHasNone' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00049A, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsDispNoneDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00049B, "Member 'KeyConfig_C_IsDispNoneDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.On_Cmb_ClassSelect_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0) == 0x000008, "Wrong alignment on KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0");
static_assert(sizeof(KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0) == 0x000038, "Wrong size on KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0");
static_assert(offsetof(KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0, Item) == 0x000000, "Member 'KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.ConvertSliderValueToRealValue
// 0x001C (0x001C - 0x0000)
struct KeyConfig_C_ConvertSliderValueToRealValue final
{
public:
	float                                         InValueRate;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            InValueRange;                                      // 0x0004(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutValue;                                          // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_ConvertSliderValueToRealValue) == 0x000004, "Wrong alignment on KeyConfig_C_ConvertSliderValueToRealValue");
static_assert(sizeof(KeyConfig_C_ConvertSliderValueToRealValue) == 0x00001C, "Wrong size on KeyConfig_C_ConvertSliderValueToRealValue");
static_assert(offsetof(KeyConfig_C_ConvertSliderValueToRealValue, InValueRate) == 0x000000, "Member 'KeyConfig_C_ConvertSliderValueToRealValue::InValueRate' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ConvertSliderValueToRealValue, InValueRange) == 0x000004, "Member 'KeyConfig_C_ConvertSliderValueToRealValue::InValueRange' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ConvertSliderValueToRealValue, OutValue) == 0x000014, "Member 'KeyConfig_C_ConvertSliderValueToRealValue::OutValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_ConvertSliderValueToRealValue, CallFunc_Lerp_ReturnValue) == 0x000018, "Member 'KeyConfig_C_ConvertSliderValueToRealValue::CallFunc_Lerp_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.GetGamePadCameraSpeedRateYaw
// 0x000C (0x000C - 0x0000)
struct KeyConfig_C_GetGamePadCameraSpeedRateYaw final
{
public:
	float                                         InValueRate;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutValue;                                          // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ConvertSliderValueToRealValue_OutValue;   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_GetGamePadCameraSpeedRateYaw) == 0x000004, "Wrong alignment on KeyConfig_C_GetGamePadCameraSpeedRateYaw");
static_assert(sizeof(KeyConfig_C_GetGamePadCameraSpeedRateYaw) == 0x00000C, "Wrong size on KeyConfig_C_GetGamePadCameraSpeedRateYaw");
static_assert(offsetof(KeyConfig_C_GetGamePadCameraSpeedRateYaw, InValueRate) == 0x000000, "Member 'KeyConfig_C_GetGamePadCameraSpeedRateYaw::InValueRate' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetGamePadCameraSpeedRateYaw, OutValue) == 0x000004, "Member 'KeyConfig_C_GetGamePadCameraSpeedRateYaw::OutValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetGamePadCameraSpeedRateYaw, CallFunc_ConvertSliderValueToRealValue_OutValue) == 0x000008, "Member 'KeyConfig_C_GetGamePadCameraSpeedRateYaw::CallFunc_ConvertSliderValueToRealValue_OutValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.GetGamePadCameraSpeedRatePitch
// 0x000C (0x000C - 0x0000)
struct KeyConfig_C_GetGamePadCameraSpeedRatePitch final
{
public:
	float                                         InValueRate;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutValue;                                          // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ConvertSliderValueToRealValue_OutValue;   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_GetGamePadCameraSpeedRatePitch) == 0x000004, "Wrong alignment on KeyConfig_C_GetGamePadCameraSpeedRatePitch");
static_assert(sizeof(KeyConfig_C_GetGamePadCameraSpeedRatePitch) == 0x00000C, "Wrong size on KeyConfig_C_GetGamePadCameraSpeedRatePitch");
static_assert(offsetof(KeyConfig_C_GetGamePadCameraSpeedRatePitch, InValueRate) == 0x000000, "Member 'KeyConfig_C_GetGamePadCameraSpeedRatePitch::InValueRate' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetGamePadCameraSpeedRatePitch, OutValue) == 0x000004, "Member 'KeyConfig_C_GetGamePadCameraSpeedRatePitch::OutValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetGamePadCameraSpeedRatePitch, CallFunc_ConvertSliderValueToRealValue_OutValue) == 0x000008, "Member 'KeyConfig_C_GetGamePadCameraSpeedRatePitch::CallFunc_ConvertSliderValueToRealValue_OutValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsClosed
// 0x0002 (0x0002 - 0x0000)
struct KeyConfig_C_IsClosed final
{
public:
	bool                                          Param_IsClosed;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_IsClosed) == 0x000001, "Wrong alignment on KeyConfig_C_IsClosed");
static_assert(sizeof(KeyConfig_C_IsClosed) == 0x000002, "Wrong size on KeyConfig_C_IsClosed");
static_assert(offsetof(KeyConfig_C_IsClosed, Param_IsClosed) == 0x000000, "Member 'KeyConfig_C_IsClosed::Param_IsClosed' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_IsClosed, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'KeyConfig_C_IsClosed::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.SetCloseState
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_SetCloseState final
{
public:
	bool                                          Close;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_SetCloseState) == 0x000001, "Wrong alignment on KeyConfig_C_SetCloseState");
static_assert(sizeof(KeyConfig_C_SetCloseState) == 0x000001, "Wrong size on KeyConfig_C_SetCloseState");
static_assert(offsetof(KeyConfig_C_SetCloseState, Close) == 0x000000, "Member 'KeyConfig_C_SetCloseState::Close' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.GetNoAssignedTextId
// 0x0068 (0x0068 - 0x0000)
struct KeyConfig_C_GetNoAssignedTextId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C23[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             DTable;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C24[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0020(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        CallFunc_GetNoAssignedItemTop_InputType;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C25[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyConfigItemName                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C26[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C27[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_GetNoAssignedTextId) == 0x000008, "Wrong alignment on KeyConfig_C_GetNoAssignedTextId");
static_assert(sizeof(KeyConfig_C_GetNoAssignedTextId) == 0x000068, "Wrong size on KeyConfig_C_GetNoAssignedTextId");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, TextId) == 0x000000, "Member 'KeyConfig_C_GetNoAssignedTextId::TextId' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, DTable) == 0x000008, "Member 'KeyConfig_C_GetNoAssignedTextId::DTable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, Temp_int_Array_Index_Variable) == 0x000010, "Member 'KeyConfig_C_GetNoAssignedTextId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'KeyConfig_C_GetNoAssignedTextId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000020, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_Array_Get_Item) == 0x000030, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_GetNoAssignedItemTop_InputType) == 0x000038, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_GetNoAssignedItemTop_InputType' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_GetDataTableRowFromName_OutRow) == 0x00003C, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000044, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000045, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000048, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000058, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_GetNoAssignedTextId, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'KeyConfig_C_GetNoAssignedTextId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.IsWaitSaveing?
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_C_IsWaitSaveing_ final
{
public:
	bool                                          IsWaiting;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_IsWaitSaveing_) == 0x000001, "Wrong alignment on KeyConfig_C_IsWaitSaveing_");
static_assert(sizeof(KeyConfig_C_IsWaitSaveing_) == 0x000001, "Wrong size on KeyConfig_C_IsWaitSaveing_");
static_assert(offsetof(KeyConfig_C_IsWaitSaveing_, IsWaiting) == 0x000000, "Member 'KeyConfig_C_IsWaitSaveing_::IsWaiting' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.HasUnassinableSetKey
// 0x0008 (0x0008 - 0x0000)
struct KeyConfig_C_HasUnassinableSetKey final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsNoAssignedKey_Assigned;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EConfig_KeyconfigItems                        CallFunc_GetNoAssignedItemTop_InputType;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNone_bHasNone;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_C_HasUnassinableSetKey) == 0x000001, "Wrong alignment on KeyConfig_C_HasUnassinableSetKey");
static_assert(sizeof(KeyConfig_C_HasUnassinableSetKey) == 0x000008, "Wrong size on KeyConfig_C_HasUnassinableSetKey");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, ReturnValue) == 0x000000, "Member 'KeyConfig_C_HasUnassinableSetKey::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, CallFunc_ContainsNoAssignedKey_Assigned) == 0x000001, "Member 'KeyConfig_C_HasUnassinableSetKey::CallFunc_ContainsNoAssignedKey_Assigned' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, CallFunc_GetNoAssignedItemTop_InputType) == 0x000002, "Member 'KeyConfig_C_HasUnassinableSetKey::CallFunc_GetNoAssignedItemTop_InputType' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'KeyConfig_C_HasUnassinableSetKey::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000004, "Member 'KeyConfig_C_HasUnassinableSetKey::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, CallFunc_HasNone_bHasNone) == 0x000005, "Member 'KeyConfig_C_HasUnassinableSetKey::CallFunc_HasNone_bHasNone' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'KeyConfig_C_HasUnassinableSetKey::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_HasUnassinableSetKey, CallFunc_BooleanAND_ReturnValue_1) == 0x000007, "Member 'KeyConfig_C_HasUnassinableSetKey::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function KeyConfig.KeyConfig_C.Get Slot Data Table
// 0x0030 (0x0030 - 0x0000)
struct KeyConfig_C_Get_Slot_Data_Table final
{
public:
	class UDataTable*                             Table;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C28[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCSPlatform_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C29[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_C_Get_Slot_Data_Table) == 0x000008, "Wrong alignment on KeyConfig_C_Get_Slot_Data_Table");
static_assert(sizeof(KeyConfig_C_Get_Slot_Data_Table) == 0x000030, "Wrong size on KeyConfig_C_Get_Slot_Data_Table");
static_assert(offsetof(KeyConfig_C_Get_Slot_Data_Table, Table) == 0x000000, "Member 'KeyConfig_C_Get_Slot_Data_Table::Table' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_Get_Slot_Data_Table, Temp_bool_Variable) == 0x000008, "Member 'KeyConfig_C_Get_Slot_Data_Table::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_Get_Slot_Data_Table, Temp_object_Variable) == 0x000010, "Member 'KeyConfig_C_Get_Slot_Data_Table::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_Get_Slot_Data_Table, Temp_object_Variable_1) == 0x000018, "Member 'KeyConfig_C_Get_Slot_Data_Table::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_Get_Slot_Data_Table, CallFunc_IsCSPlatform_ReturnValue) == 0x000020, "Member 'KeyConfig_C_Get_Slot_Data_Table::CallFunc_IsCSPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_C_Get_Slot_Data_Table, K2Node_Select_Default) == 0x000028, "Member 'KeyConfig_C_Get_Slot_Data_Table::K2Node_Select_Default' has a wrong offset!");

}

