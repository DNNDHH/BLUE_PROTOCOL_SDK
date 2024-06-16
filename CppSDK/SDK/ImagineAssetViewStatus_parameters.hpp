#pragma once

 

// Package: ImagineAssetViewStatus

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetInfo
// 0x0120 (0x0120 - 0x0000)
struct ImagineAssetViewStatus_C_SetInfo final
{
public:
	struct FOwnItemInfo                           Param_Info;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAssetViewStatus_C_SetInfo) == 0x000008, "Wrong alignment on ImagineAssetViewStatus_C_SetInfo");
static_assert(sizeof(ImagineAssetViewStatus_C_SetInfo) == 0x000120, "Wrong size on ImagineAssetViewStatus_C_SetInfo");
static_assert(offsetof(ImagineAssetViewStatus_C_SetInfo, Param_Info) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetInfo::Param_Info' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'ImagineAssetViewStatus_C_SetInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupParameterImagine
// 0x03C0 (0x03C0 - 0x0000)
struct ImagineAssetViewStatus_C_SetupParameterImagine final
{
public:
	struct FOwnItemInfo                           InItemInfo;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0118(0x00B0)(Edit, BlueprintVisible)
	struct FImagineParameter                      ImagineParams;                                     // 0x01C8(0x006C)(Edit, BlueprintVisible, NoDestructor)
	bool                                          ValidStackable;                                    // 0x0234(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEE[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Level;                                             // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImagineId;                                         // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEF[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue; // 0x0248(0x006C)(NoDestructor)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF0[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x02C0(0x00B0)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CF1[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array;                            // 0x0378(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x0388(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF2[0x3];                                     // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CF3[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x03A8(0x0018)()
};
static_assert(alignof(ImagineAssetViewStatus_C_SetupParameterImagine) == 0x000008, "Wrong alignment on ImagineAssetViewStatus_C_SetupParameterImagine");
static_assert(sizeof(ImagineAssetViewStatus_C_SetupParameterImagine) == 0x0003C0, "Wrong size on ImagineAssetViewStatus_C_SetupParameterImagine");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, InItemInfo) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::InItemInfo' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, MasterImagine) == 0x000118, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::MasterImagine' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, ImagineParams) == 0x0001C8, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::ImagineParams' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, ValidStackable) == 0x000234, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::ValidStackable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, Level) == 0x000238, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::Level' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, ImagineId) == 0x00023C, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::ImagineId' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000240, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, Temp_int_Array_Index_Variable) == 0x000244, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_CalculatedStackBImagineParams_ReturnValue) == 0x000248, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_CalculatedStackBImagineParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_GetItemLevel_ReturnValue) == 0x0002B4, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_FindImagineMaster_bIsValid) == 0x0002B8, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_FindImagineMaster_ImagineMaster) == 0x0002C0, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, Temp_int_Loop_Counter_Variable) == 0x000370, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, K2Node_MakeArray_Array) == 0x000378, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_Array_Get_Item) == 0x000388, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_Array_Length_ReturnValue) == 0x000390, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_Add_IntInt_ReturnValue) == 0x000394, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_Less_IntInt_ReturnValue) == 0x000398, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, Temp_int_Variable) == 0x00039C, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, K2Node_Select_Default) == 0x0003A0, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupParameterImagine, CallFunc_Conv_IntToText_ReturnValue) == 0x0003A8, "Member 'ImagineAssetViewStatus_C_SetupParameterImagine::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetUpName
// 0x0028 (0x0028 - 0x0000)
struct ImagineAssetViewStatus_C_SetUpName final
{
public:
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(ImagineAssetViewStatus_C_SetUpName) == 0x000008, "Wrong alignment on ImagineAssetViewStatus_C_SetUpName");
static_assert(sizeof(ImagineAssetViewStatus_C_SetUpName) == 0x000028, "Wrong size on ImagineAssetViewStatus_C_SetUpName");
static_assert(offsetof(ImagineAssetViewStatus_C_SetUpName, CallFunc_GetNameText_ReturnValue) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetUpName::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetUpName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ImagineAssetViewStatus_C_SetUpName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetAbilityInfoVisibility
// 0x0005 (0x0005 - 0x0000)
struct ImagineAssetViewStatus_C_SetAbilityInfoVisibility final
{
public:
	bool                                          Param_VisibleAbilityInfo;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAssetViewStatus_C_SetAbilityInfoVisibility) == 0x000001, "Wrong alignment on ImagineAssetViewStatus_C_SetAbilityInfoVisibility");
static_assert(sizeof(ImagineAssetViewStatus_C_SetAbilityInfoVisibility) == 0x000005, "Wrong size on ImagineAssetViewStatus_C_SetAbilityInfoVisibility");
static_assert(offsetof(ImagineAssetViewStatus_C_SetAbilityInfoVisibility, Param_VisibleAbilityInfo) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetAbilityInfoVisibility::Param_VisibleAbilityInfo' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetAbilityInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'ImagineAssetViewStatus_C_SetAbilityInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetAbilityInfoVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'ImagineAssetViewStatus_C_SetAbilityInfoVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetAbilityInfoVisibility, Temp_bool_Variable) == 0x000003, "Member 'ImagineAssetViewStatus_C_SetAbilityInfoVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetAbilityInfoVisibility, K2Node_Select_Default) == 0x000004, "Member 'ImagineAssetViewStatus_C_SetAbilityInfoVisibility::K2Node_Select_Default' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffBase
// 0x0118 (0x0118 - 0x0000)
struct ImagineAssetViewStatus_C_SetDiffBase final
{
public:
	struct FOwnItemInfo                           InDiffBase;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineAssetViewStatus_C_SetDiffBase) == 0x000008, "Wrong alignment on ImagineAssetViewStatus_C_SetDiffBase");
static_assert(sizeof(ImagineAssetViewStatus_C_SetDiffBase) == 0x000118, "Wrong size on ImagineAssetViewStatus_C_SetDiffBase");
static_assert(offsetof(ImagineAssetViewStatus_C_SetDiffBase, InDiffBase) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetDiffBase::InDiffBase' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.UpdateDiffParamImagine
// 0x02D0 (0x02D0 - 0x0000)
struct ImagineAssetViewStatus_C_UpdateDiffParamImagine final
{
public:
	struct FSBStackBImagineParam                  StackBParam;                                       // 0x0000(0x0060)(Edit, BlueprintVisible)
	struct FImagineParameter                      BaseParam;                                         // 0x0060(0x006C)(Edit, BlueprintVisible, NoDestructor)
	struct FImagineParameter                      TargetParam;                                       // 0x00CC(0x006C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF4[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue_1;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF5[0x2];                                     // 0x0156(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0158(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0180(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x01A8(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF6[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array;                            // 0x01D8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF7[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0200(0x0028)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF8[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0230(0x0018)()
	struct FSlateColor                            K2Node_Select_Default_2;                           // 0x0248(0x0028)()
	struct FSBStackBImagineParam                  CallFunc_CalcStackBImagineDiffParam_ReturnValue;   // 0x0270(0x0060)()
};
static_assert(alignof(ImagineAssetViewStatus_C_UpdateDiffParamImagine) == 0x000008, "Wrong alignment on ImagineAssetViewStatus_C_UpdateDiffParamImagine");
static_assert(sizeof(ImagineAssetViewStatus_C_UpdateDiffParamImagine) == 0x0002D0, "Wrong size on ImagineAssetViewStatus_C_UpdateDiffParamImagine");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, StackBParam) == 0x000000, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::StackBParam' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, BaseParam) == 0x000060, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::BaseParam' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, TargetParam) == 0x0000CC, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::TargetParam' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, Temp_int_Variable) == 0x000138, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, Temp_int_Array_Index_Variable) == 0x00013C, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, Temp_int_Loop_Counter_Variable) == 0x000140, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, Temp_bool_Variable) == 0x000148, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_GetStackBNum_ReturnValue) == 0x00014C, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_GetStackBNum_ReturnValue_1) == 0x000150, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_GetStackBNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000154, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000155, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, K2Node_MakeStruct_SlateColor) == 0x000158, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, K2Node_MakeStruct_SlateColor_1) == 0x000180, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, K2Node_MakeStruct_SlateColor_2) == 0x0001A8, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, Temp_bool_Variable_1) == 0x0001D0, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, K2Node_MakeArray_Array) == 0x0001D8, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_Array_Get_Item) == 0x0001E8, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, K2Node_Select_Default) == 0x0001F0, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_Array_Length_ReturnValue) == 0x0001F4, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_Greater_IntInt_ReturnValue) == 0x0001F8, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_Less_IntInt_ReturnValue) == 0x0001F9, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, K2Node_Select_Default_1) == 0x000200, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000228, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_Conv_IntToText_ReturnValue) == 0x000230, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, K2Node_Select_Default_2) == 0x000248, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_UpdateDiffParamImagine, CallFunc_CalcStackBImagineDiffParam_ReturnValue) == 0x000270, "Member 'ImagineAssetViewStatus_C_UpdateDiffParamImagine::CallFunc_CalcStackBImagineDiffParam_ReturnValue' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffVisible
// 0x0005 (0x0005 - 0x0000)
struct ImagineAssetViewStatus_C_SetDiffVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAssetViewStatus_C_SetDiffVisible) == 0x000001, "Wrong alignment on ImagineAssetViewStatus_C_SetDiffVisible");
static_assert(sizeof(ImagineAssetViewStatus_C_SetDiffVisible) == 0x000005, "Wrong size on ImagineAssetViewStatus_C_SetDiffVisible");
static_assert(offsetof(ImagineAssetViewStatus_C_SetDiffVisible, bVisible) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetDiffVisible::bVisible' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetDiffVisible, Temp_bool_Variable) == 0x000001, "Member 'ImagineAssetViewStatus_C_SetDiffVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetDiffVisible, Temp_byte_Variable) == 0x000002, "Member 'ImagineAssetViewStatus_C_SetDiffVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetDiffVisible, Temp_byte_Variable_1) == 0x000003, "Member 'ImagineAssetViewStatus_C_SetDiffVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetViewStatus_C_SetDiffVisible, K2Node_Select_Default) == 0x000004, "Member 'ImagineAssetViewStatus_C_SetDiffVisible::K2Node_Select_Default' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupImagineAbilities
// 0x0118 (0x0118 - 0x0000)
struct ImagineAssetViewStatus_C_SetupImagineAbilities final
{
public:
	struct FOwnItemInfo                           InputPin;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineAssetViewStatus_C_SetupImagineAbilities) == 0x000008, "Wrong alignment on ImagineAssetViewStatus_C_SetupImagineAbilities");
static_assert(sizeof(ImagineAssetViewStatus_C_SetupImagineAbilities) == 0x000118, "Wrong size on ImagineAssetViewStatus_C_SetupImagineAbilities");
static_assert(offsetof(ImagineAssetViewStatus_C_SetupImagineAbilities, InputPin) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetupImagineAbilities::InputPin' has a wrong offset!");

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetEnableFlatStyle
// 0x0001 (0x0001 - 0x0000)
struct ImagineAssetViewStatus_C_SetEnableFlatStyle final
{
public:
	bool                                          Param_bEnableFlatStyle;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAssetViewStatus_C_SetEnableFlatStyle) == 0x000001, "Wrong alignment on ImagineAssetViewStatus_C_SetEnableFlatStyle");
static_assert(sizeof(ImagineAssetViewStatus_C_SetEnableFlatStyle) == 0x000001, "Wrong size on ImagineAssetViewStatus_C_SetEnableFlatStyle");
static_assert(offsetof(ImagineAssetViewStatus_C_SetEnableFlatStyle, Param_bEnableFlatStyle) == 0x000000, "Member 'ImagineAssetViewStatus_C_SetEnableFlatStyle::Param_bEnableFlatStyle' has a wrong offset!");

}

