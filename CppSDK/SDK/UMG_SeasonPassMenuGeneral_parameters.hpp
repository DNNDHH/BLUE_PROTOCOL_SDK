#pragma once

 

// Package: UMG_SeasonPassMenuGeneral

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenuGeneral.UMG_SeasonPassMenuGeneral_C.ExecuteUbergraph_UMG_SeasonPassMenuGeneral
// 0x02D8 (0x02D8 - 0x0000)
struct UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61C7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C8[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C9[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61CA[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0074(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61CB[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61CC[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61CD[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B8(0x0018)()
	struct FDateTime                              CallFunc_GetCurrentSeasonEndDate_ReturnValue;      // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentSeasonName_ReturnValue;         // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShopEmancipationRank_ReturnValue;      // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61CE[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	bool                                          CallFunc_IsValidDiscount_ReturnValue;              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61CF[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRequiredRankupPoint_ReturnValue;       // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentSeasonPassName_ReturnValue;     // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonProgressValid_ReturnValue;        // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61D0[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentPaidPlanIndex_ReturnValue;      // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaidPlanSubscribed_ReturnValue;         // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSeasonShopOpened_ReturnValue;           // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMaxRank_ReturnValue;                    // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61D1[0x1];                                     // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPoint_ReturnValue;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanRankup_ReturnValue;                    // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61D2[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0140(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61D3[0x5];                                     // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0168(0x0040)(HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetRequiredRankupPoint_ReturnValue_1;     // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61D4[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0220(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0230(0x0018)()
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue_1;                // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61D5[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0250(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0268(0x0018)()
	bool                                          CallFunc_GetSeasonPassTiming_bValid;               // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61D6[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSeasonPassTiming_Flag;                 // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_1;     // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61D7[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02B0(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPointShop_outValue;                     // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBuyRankUp_outValue;                     // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral");
static_assert(sizeof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral) == 0x0002D8, "Wrong size on UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, Temp_bool_Variable) == 0x000004, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, Temp_name_Variable) == 0x000008, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, Temp_name_Variable_1) == 0x000010, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_MakeLiteralByte_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetGameConfigValueString_OutValue) == 0x000020, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000030, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, Temp_bool_Variable_1) == 0x000031, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000048, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000058, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_Event_IsDesignTime) == 0x000059, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Not_PreBool_ReturnValue_1) == 0x000071, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_BooleanAND_ReturnValue) == 0x000072, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_Select_Default) == 0x000074, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000080, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_BooleanOR_ReturnValue) == 0x000090, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_BooleanAND_ReturnValue_1) == 0x0000B1, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B8, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetCurrentSeasonEndDate_ReturnValue) == 0x0000D0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetCurrentSeasonEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue) == 0x0000D8, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetCurrentSeasonName_ReturnValue) == 0x0000E0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetCurrentSeasonName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetShopEmancipationRank_ReturnValue) == 0x0000F0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetShopEmancipationRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_IsValidDiscount_ReturnValue) == 0x000110, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_IsValidDiscount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetRequiredRankupPoint_ReturnValue) == 0x000114, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetRequiredRankupPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetCurrentSeasonPassName_ReturnValue) == 0x000118, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetCurrentSeasonPassName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_IsSeasonProgressValid_ReturnValue) == 0x000128, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_IsSeasonProgressValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetCurrentPaidPlanIndex_ReturnValue) == 0x00012C, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetCurrentPaidPlanIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_IsPaidPlanSubscribed_ReturnValue) == 0x000130, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_IsPaidPlanSubscribed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_IsSeasonShopOpened_ReturnValue) == 0x000131, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_IsSeasonShopOpened_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_IsMaxRank_ReturnValue) == 0x000132, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_IsMaxRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetPoint_ReturnValue) == 0x000134, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetRank_ReturnValue) == 0x000138, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_CanRankup_ReturnValue) == 0x00013C, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_CanRankup_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, Temp_bool_Variable_2) == 0x00013D, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetText_ReturnValue) == 0x000140, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000158, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_Select_Default_1) == 0x000159, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00015A, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetSBPlayerController_ReturnValue) == 0x000160, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_MakeStruct_FormatArgumentData) == 0x000168, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x0001A8, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_MakeArray_Array) == 0x0001B0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetRequiredRankupPoint_ReturnValue_1) == 0x0001C0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetRequiredRankupPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Format_ReturnValue) == 0x0001C8, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001E0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_MakeArray_Array_1) == 0x000220, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Format_ReturnValue_1) == 0x000230, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_SetDateTime_ReturnValue) == 0x000248, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_SetDateTime_ReturnValue_1) == 0x000249, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_SetDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000250, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000268, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetSeasonPassTiming_bValid) == 0x000280, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetSeasonPassTiming_bValid' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetSeasonPassTiming_Flag) == 0x000284, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetSeasonPassTiming_Flag' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000288, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetSeasonPassComponent_ReturnValue_1) == 0x000290, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetSeasonPassComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, K2Node_Select_Default_2) == 0x000298, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0002A0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002B0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_PlayAnimation_ReturnValue) == 0x0002C8, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_IsPointShop_outValue) == 0x0002D0, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_IsPointShop_outValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral, CallFunc_IsBuyRankUp_outValue) == 0x0002D1, "Member 'UMG_SeasonPassMenuGeneral_C_ExecuteUbergraph_UMG_SeasonPassMenuGeneral::CallFunc_IsBuyRankUp_outValue' has a wrong offset!");

// Function UMG_SeasonPassMenuGeneral.UMG_SeasonPassMenuGeneral_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassMenuGeneral_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuGeneral_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_SeasonPassMenuGeneral_C_PreConstruct");
static_assert(sizeof(UMG_SeasonPassMenuGeneral_C_PreConstruct) == 0x000001, "Wrong size on UMG_SeasonPassMenuGeneral_C_PreConstruct");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_SeasonPassMenuGeneral_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_SeasonPassMenuGeneral.UMG_SeasonPassMenuGeneral_C.IsPointShop
// 0x00B0 (0x00B0 - 0x0000)
struct UMG_SeasonPassMenuGeneral_C_IsPointShop final
{
public:
	bool                                          OutValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61D8[0xF];                                     // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapLevelInfo                        CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo;   // 0x0010(0x0080)()
	bool                                          CallFunc_GetCurrentMapLevelInfo_ReturnValue;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61D9[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuGeneral_C_IsPointShop) == 0x000010, "Wrong alignment on UMG_SeasonPassMenuGeneral_C_IsPointShop");
static_assert(sizeof(UMG_SeasonPassMenuGeneral_C_IsPointShop) == 0x0000B0, "Wrong size on UMG_SeasonPassMenuGeneral_C_IsPointShop");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, OutValue) == 0x000000, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::OutValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo) == 0x000010, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, CallFunc_GetCurrentMapLevelInfo_ReturnValue) == 0x000090, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::CallFunc_GetCurrentMapLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, K2Node_SwitchEnum_CmpSuccess) == 0x000091, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000092, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000093, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000098, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsPointShop, CallFunc_BooleanOR_ReturnValue) == 0x0000A1, "Member 'UMG_SeasonPassMenuGeneral_C_IsPointShop::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UMG_SeasonPassMenuGeneral.UMG_SeasonPassMenuGeneral_C.IsBuyRankUp
// 0x00B0 (0x00B0 - 0x0000)
struct UMG_SeasonPassMenuGeneral_C_IsBuyRankUp final
{
public:
	bool                                          OutValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61DA[0xF];                                     // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapLevelInfo                        CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo;   // 0x0010(0x0080)()
	bool                                          CallFunc_GetCurrentMapLevelInfo_ReturnValue;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61DB[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp) == 0x000010, "Wrong alignment on UMG_SeasonPassMenuGeneral_C_IsBuyRankUp");
static_assert(sizeof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp) == 0x0000B0, "Wrong size on UMG_SeasonPassMenuGeneral_C_IsBuyRankUp");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, OutValue) == 0x000000, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::OutValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo) == 0x000010, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_GetCurrentMapLevelInfo_ReturnValue) == 0x000090, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_GetCurrentMapLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, K2Node_SwitchEnum_CmpSuccess) == 0x000091, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000092, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000093, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000098, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_BooleanOR_ReturnValue) == 0x0000A1, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_Not_PreBool_ReturnValue) == 0x0000A2, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_IsBuyRankUp, CallFunc_BooleanAND_ReturnValue) == 0x0000A3, "Member 'UMG_SeasonPassMenuGeneral_C_IsBuyRankUp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UMG_SeasonPassMenuGeneral.UMG_SeasonPassMenuGeneral_C.UpdateRewardAllButtonState
// 0x0018 (0x0018 - 0x0000)
struct UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState final
{
public:
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnyRewardCanReceived_ReturnValue;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState");
static_assert(sizeof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState) == 0x000018, "Wrong size on UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState, CallFunc_GetSBPlayerController_ReturnValue) == 0x000000, "Member 'UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000008, "Member 'UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState, CallFunc_IsSeasonValid_ReturnValue) == 0x000010, "Member 'UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState, CallFunc_IsAnyRewardCanReceived_ReturnValue) == 0x000011, "Member 'UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState::CallFunc_IsAnyRewardCanReceived_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState, CallFunc_BooleanAND_ReturnValue_1) == 0x000013, "Member 'UMG_SeasonPassMenuGeneral_C_UpdateRewardAllButtonState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

