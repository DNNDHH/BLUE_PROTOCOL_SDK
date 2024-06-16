#pragma once

 

// Package: BP_SkylightControlLibrary

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightToonIntensityScaleDefault
// 0x0010 (0x0010 - 0x0000)
struct BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault final
{
public:
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault) == 0x000008, "Wrong alignment on BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault");
static_assert(sizeof(BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault) == 0x000010, "Wrong size on BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault, DynamicSky) == 0x000000, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault::DynamicSky' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault, __WorldContext) == 0x000008, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault::__WorldContext' has a wrong offset!");

// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightPreviewFlag
// 0x0050 (0x0050 - 0x0000)
struct BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag final
{
public:
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewFlagChange;                                 // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PreviewFlag;                                       // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9832[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SkyLightControlVolume_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9833[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkyLightControlVolume_C*            CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9834[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag) == 0x000008, "Wrong alignment on BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag");
static_assert(sizeof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag) == 0x000050, "Wrong size on BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, DynamicSky) == 0x000000, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::DynamicSky' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, __WorldContext) == 0x000008, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, PreviewFlagChange) == 0x000010, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::PreviewFlagChange' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, PreviewFlag) == 0x000011, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::PreviewFlag' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000048, "Member 'BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightControlLightParam
// 0x0038 (0x0038 - 0x0000)
struct BP_SkylightControlLibrary_C_SetSkyLightControlLightParam final
{
public:
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SkyLightColorOverride;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightIntensityOverride;                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonIntensityOverride;                     // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonSaturationScaleOverride;               // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam) == 0x000008, "Wrong alignment on BP_SkylightControlLibrary_C_SetSkyLightControlLightParam");
static_assert(sizeof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam) == 0x000038, "Wrong size on BP_SkylightControlLibrary_C_SetSkyLightControlLightParam");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, DynamicSky) == 0x000000, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::DynamicSky' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, SkyLightColorOverride) == 0x000008, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::SkyLightColorOverride' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, SkyLightIntensityOverride) == 0x000010, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::SkyLightIntensityOverride' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, SkyLightToonIntensityOverride) == 0x000018, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::SkyLightToonIntensityOverride' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, SkyLightToonSaturationScaleOverride) == 0x000020, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::SkyLightToonSaturationScaleOverride' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, __WorldContext) == 0x000028, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightControlLightParam, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_SkylightControlLibrary_C_SetSkyLightControlLightParam::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightDefaultLightParam
// 0x0018 (0x0018 - 0x0000)
struct BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam final
{
public:
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam) == 0x000008, "Wrong alignment on BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam");
static_assert(sizeof(BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam) == 0x000018, "Wrong size on BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam, DynamicSky) == 0x000000, "Member 'BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam::DynamicSky' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam, __WorldContext) == 0x000008, "Member 'BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

