#pragma once

 

// Package: CommunicateSettingMenu_FaceBgData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.ClickedBtnAwardItemIconList__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature final
{
public:
	int32                                         AwardId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature) == 0x000004, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature) == 0x000004, "Wrong size on CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature, AwardId) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature::AwardId' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.ExecuteUbergraph_CommunicateSettingMenu_FaceBgData
// 0x0240 (0x0240 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CAC[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CAD[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerCharacterCardData             K2Node_CustomEvent_InPlayerCharacterCardData;      // 0x0040(0x00B0)()
	bool                                          K2Node_CustomEvent_bIsUGC;                         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CAE[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F8(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CAF[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0118(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB0[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_InScale;                        // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InPosition;                     // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB1[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_CustomEvent_InCurrentClassType;             // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB2[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InClassLevel;                   // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB3[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_InAwardIdList_2;                // 0x0168(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_Value_1;                        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB4[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0180(0x0018)()
	ESBClassType                                  K2Node_CustomEvent_InClassType;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB5[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_InAwardIdList_1;                // 0x01A0(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_Value;                          // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CB6[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01B8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x01D0(0x0018)()
	int32                                         K2Node_CustomEvent_InCharacterCardFrameId;         // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CB7[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_AwardId;                // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CB8[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_InAwardIdList;                  // 0x01F8(0x0010)(ConstParm, ReferenceParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetFrameData_TextureL;                    // 0x0208(0x0028)(HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0230(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData) == 0x000240, "Wrong size on CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, EntryPoint) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, Temp_bool_Variable) == 0x000004, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, Temp_bool_Variable_1) == 0x000005, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, Temp_text_Variable) == 0x000008, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_Loaded) == 0x000020, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, Temp_object_Variable) == 0x000028, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_DynamicCast_AsTexture_2D) == 0x000030, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_IsValid_ReturnValue_1) == 0x00003A, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InPlayerCharacterCardData) == 0x000040, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InPlayerCharacterCardData' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_bIsUGC) == 0x0000F0, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_bIsUGC' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F8, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, Temp_byte_Variable) == 0x000110, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_GetRestrictText_ReturnValue) == 0x000118, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, Temp_byte_Variable_1) == 0x000130, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InScale) == 0x000134, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InPosition) == 0x000138, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_URL) == 0x000140, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_Select_Default) == 0x000150, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_GetAdventurerRank_ReturnValue) == 0x000154, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_GetTotalPower_ReturnValue) == 0x000158, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InCurrentClassType) == 0x00015C, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InCurrentClassType' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InClassLevel) == 0x000160, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InClassLevel' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InAwardIdList_2) == 0x000168, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InAwardIdList_2' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_Value_1) == 0x000178, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_Conv_IntToText_ReturnValue) == 0x000180, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InClassType) == 0x000198, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InClassType' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InAwardIdList_1) == 0x0001A0, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InAwardIdList_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_Value) == 0x0001B0, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001B4, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001B8, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_Select_Default_1) == 0x0001D0, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InCharacterCardFrameId) == 0x0001E8, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InCharacterCardFrameId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001EC, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_ComponentBoundEvent_AwardId) == 0x0001F0, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_ComponentBoundEvent_AwardId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_Event_IsDesignTime) == 0x0001F4, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CustomEvent_InAwardIdList) == 0x0001F8, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CustomEvent_InAwardIdList' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, CallFunc_GetFrameData_TextureL) == 0x000208, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::CallFunc_GetFrameData_TextureL' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData, K2Node_CreateDelegate_OutputDelegate) == 0x000230, "Member 'CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAwardId
// 0x0010 (0x0010 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetAwardId final
{
public:
	TArray<int32>                                 InAwardIdList;                                     // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetAwardId) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetAwardId");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetAwardId) == 0x000010, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetAwardId");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAwardId, InAwardIdList) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAwardId::InAwardIdList' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_PreConstruct) == 0x000001, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_PreConstruct");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_PreConstruct) == 0x000001, "Wrong size on CommunicateSettingMenu_FaceBgData_C_PreConstruct");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature final
{
public:
	int32                                         AwardId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature) == 0x000004, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature) == 0x000004, "Wrong size on CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature, AwardId) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature::AwardId' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetFrame
// 0x0004 (0x0004 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetFrame final
{
public:
	int32                                         InCharacterCardFrameId;                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetFrame) == 0x000004, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetFrame");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetFrame) == 0x000004, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetFrame");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetFrame, InCharacterCardFrameId) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetFrame::InCharacterCardFrameId' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAdventureRankText
// 0x0004 (0x0004 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText) == 0x000004, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText) == 0x000004, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText, Value) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText::Value' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetClassType
// 0x0018 (0x0018 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetClassType final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CB9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 InAwardIdList;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetClassType) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetClassType");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetClassType) == 0x000018, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetClassType");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetClassType, InClassType) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetClassType::InClassType' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetClassType, InAwardIdList) == 0x000008, "Member 'CommunicateSettingMenu_FaceBgData_C_SetClassType::InAwardIdList' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetTotalPowerText
// 0x0004 (0x0004 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText) == 0x000004, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText) == 0x000004, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText, Value) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText::Value' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetClassData
// 0x0018 (0x0018 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetClassData final
{
public:
	ESBClassType                                  InCurrentClassType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CBA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InClassLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 InAwardIdList;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetClassData) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetClassData");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetClassData) == 0x000018, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetClassData");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetClassData, InCurrentClassType) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetClassData::InCurrentClassType' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetClassData, InClassLevel) == 0x000004, "Member 'CommunicateSettingMenu_FaceBgData_C_SetClassData::InClassLevel' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetClassData, InAwardIdList) == 0x000008, "Member 'CommunicateSettingMenu_FaceBgData_C_SetClassData::InAwardIdList' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetFaceBG
// 0x0020 (0x0020 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetFaceBG final
{
public:
	float                                         InScale;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CBB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetFaceBG) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetFaceBG");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetFaceBG) == 0x000020, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetFaceBG");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetFaceBG, InScale) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetFaceBG::InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetFaceBG, InPosition) == 0x000004, "Member 'CommunicateSettingMenu_FaceBgData_C_SetFaceBG::InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetFaceBG, URL) == 0x000010, "Member 'CommunicateSettingMenu_FaceBgData_C_SetFaceBG::URL' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetCharacterCardData
// 0x00B8 (0x00B8 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData final
{
public:
	struct FSBPlayerCharacterCardData             InPlayerCharacterCardData;                         // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsUGC;                                            // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData) == 0x0000B8, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData, InPlayerCharacterCardData) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData::InPlayerCharacterCardData' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData, bIsUGC) == 0x0000B0, "Member 'CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData::bIsUGC' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7
// 0x0008 (0x0008 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7) == 0x000008, "Wrong size on CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7, Loaded) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7::Loaded' has a wrong offset!");

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAdventurerRankAndTotalPowerVisibility
// 0x0040 (0x0040 - 0x0000)
struct CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility final
{
public:
	bool                                          bInIsVisible;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalIsVisible;                                   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CBC[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CBD[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CBE[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility) == 0x000008, "Wrong alignment on CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility");
static_assert(sizeof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility) == 0x000040, "Wrong size on CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, bInIsVisible) == 0x000000, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::bInIsVisible' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, bLocalIsVisible) == 0x000001, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::bLocalIsVisible' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_float_Variable) == 0x000004, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_bool_Variable) == 0x000008, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_byte_Variable) == 0x000009, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_byte_Variable_1) == 0x00000A, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_bool_Variable_1) == 0x00000B, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, K2Node_Select_Default) == 0x00000C, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_byte_Variable_2) == 0x00000D, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_byte_Variable_3) == 0x00000E, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, K2Node_Select_Default_1) == 0x00000F, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_float_Variable_1) == 0x000018, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, CallFunc_GetPosition_ReturnValue) == 0x000020, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, Temp_bool_Variable_2) == 0x000028, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, CallFunc_BreakVector2D_X) == 0x00002C, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, K2Node_Select_Default_2) == 0x000034, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility, CallFunc_MakeVector2D_ReturnValue) == 0x000038, "Member 'CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

