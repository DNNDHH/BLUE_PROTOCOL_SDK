#pragma once

 

// Package: CommonIconToolTipContent_ActiveImagine

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine
// 0x0158 (0x0158 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1D92[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_InNowLoadIconTexture;           // 0x0018(0x0028)(HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D93[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       K2Node_CustomEvent_InImagineMaster;                // 0x0048(0x00B0)()
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender;                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D94[0x5];                                     // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0100(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D95[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_2; // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D96[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine) == 0x000158, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, EntryPoint) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, K2Node_CustomEvent_InNowLoadIconTexture) == 0x000018, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::K2Node_CustomEvent_InNowLoadIconTexture' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, K2Node_Event_IsDesignTime) == 0x000040, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000041, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, K2Node_CustomEvent_InImagineMaster) == 0x000048, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::K2Node_CustomEvent_InImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x0000F8, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_GetPlayerGender_OutGender) == 0x0000F9, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_GetPlayerGender_OutGender' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_IsValid_ReturnValue) == 0x0000FA, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000100, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_Greater_IntInt_ReturnValue) == 0x000128, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, K2Node_CustomEvent_Loaded) == 0x000130, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_IsValidSoftObjectReference_ReturnValue_2) == 0x000138, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_IsValidSoftObjectReference_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, Temp_object_Variable) == 0x000140, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, K2Node_DynamicCast_AsTexture_2D) == 0x000148, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_IsValid_ReturnValue_1) == 0x000151, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_IsValid_ReturnValue_2) == 0x000152, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine, CallFunc_NotEqual_SoftObjectReference_ReturnValue) == 0x000153, "Member 'CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine::CallFunc_NotEqual_SoftObjectReference_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequest
// 0x00B0 (0x00B0 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest final
{
public:
	struct FSBMasterImagine                       InImagineMaster;                                   // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest) == 0x0000B0, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest, InImagineMaster) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest::InImagineMaster' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadStart
// 0x0028 (0x0028 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart final
{
public:
	TSoftObjectPtr<class UTexture2D>              InNowLoadIconTexture;                              // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart) == 0x000028, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart, InNowLoadIconTexture) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart::InNowLoadIconTexture' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_PreConstruct) == 0x000001, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_PreConstruct");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_PreConstruct) == 0x000001, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_PreConstruct");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54
// 0x0008 (0x0008 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54) == 0x000008, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54, Loaded) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54::Loaded' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineData
// 0x03D8 (0x03D8 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_SetImagineData final
{
public:
	struct FSBMasterImagine                       InMasterImagine;                                   // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InUniqueId;                                        // 0x00B0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Param_InIsImagineIconActive;                       // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InUseClassTypeForLevelSync;                        // 0x00C1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x00C2(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x00C3(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InForceLevelSyncOff;                               // 0x00C4(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  LocalClassTypeForLevelSync;                        // 0x00C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D97[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x00C8(0x0118)(Edit, BlueprintVisible)
	class FString                                 LocalUniqueId;                                     // 0x01E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       LocalMasterImagine;                                // 0x01F0(0x00B0)(Edit, BlueprintVisible)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D98[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D99[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_FindCharacterEquipment_OutResult;         // 0x02B0(0x0118)()
	bool                                          CallFunc_FindCharacterEquipment_ReturnValue;       // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  K2Node_Select_Default;                             // 0x03CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9A[0x1];                                     // 0x03CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x03CC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_SetImagineData");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData) == 0x0003D8, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_SetImagineData");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, InMasterImagine) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::InMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, InUniqueId) == 0x0000B0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, Param_InIsImagineIconActive) == 0x0000C0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::Param_InIsImagineIconActive' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, InUseClassTypeForLevelSync) == 0x0000C1, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::InUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, InClassTypeForLevelSync) == 0x0000C2, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, IsEffectiveDisplay) == 0x0000C3, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, InForceLevelSyncOff) == 0x0000C4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, LocalClassTypeForLevelSync) == 0x0000C5, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::LocalClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, LocalOwnItemInfo) == 0x0000C8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, LocalUniqueId) == 0x0001E0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, LocalMasterImagine) == 0x0001F0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::LocalMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002A0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x0002A4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, CallFunc_GetClassType_ReturnValue) == 0x0002A8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, CallFunc_FindCharacterEquipment_OutResult) == 0x0002B0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::CallFunc_FindCharacterEquipment_OutResult' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, CallFunc_FindCharacterEquipment_ReturnValue) == 0x0003C8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::CallFunc_FindCharacterEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, Temp_bool_Variable) == 0x0003C9, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, K2Node_Select_Default) == 0x0003CA, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, CallFunc_GetStackBMax_ReturnValue) == 0x0003CC, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineData, CallFunc_GetStackBNum_ReturnValue) == 0x0003D0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineData::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineLevel
// 0x0030 (0x0030 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel final
{
public:
	int32                                         InImagineLv;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InClassLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutImagineLv;                                      // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpImagineLv;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpClassLv;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpMapInfoLvSync;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9C[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel) == 0x000030, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, InImagineLv) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::InImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, InClassLevel) == 0x000004, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::InClassLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, OutImagineLv) == 0x000008, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::OutImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, TmpImagineLv) == 0x00000C, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::TmpImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, TmpClassLv) == 0x000010, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::TmpClassLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, TmpMapInfoLvSync) == 0x000014, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::TmpMapInfoLvSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000019, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x00001A, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x00001B, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x00002C, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineIconActive
// 0x0005 (0x0005 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive) == 0x000001, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive) == 0x000005, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive, InIsActive) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive::InIsActive' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive, Temp_bool_Variable) == 0x000003, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive, K2Node_Select_Default) == 0x000004, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive::K2Node_Select_Default' has a wrong offset!");

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineDataBase
// 0x0520 (0x0520 - 0x0000)
struct CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase final
{
public:
	struct FSBMasterImagine                       InMasterImagine;                                   // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InUniqueId;                                        // 0x00B0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Param_InIsImagineIconActive;                       // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InUseClassTypeForLevelSync;                        // 0x00C1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x00C2(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x00C3(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InForceLevelSyncOff;                               // 0x00C4(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9D[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InClassLevel;                                      // 0x00C8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InPerkId;                                          // 0x00CC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBNum;                                       // 0x00D0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBMax;                                       // 0x00D4(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBMax;                                    // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBNum;                                    // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalPerkId;                                       // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSync;                                  // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9E[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalFinalImagineLevel;                            // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalImagineUniqueId;                              // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalRawImagineLevel;                              // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9F[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0108(0x0118)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalMasterImagine;                                // 0x0220(0x00B0)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DA0[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x02D8(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x02F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA1[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_FindCharacterEquipment_OutResult;         // 0x02F8(0x0118)()
	bool                                          CallFunc_FindCharacterEquipment_ReturnValue;       // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0412(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0413(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DA2[0x3];                                     // 0x0415(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x0418(0x0024)(NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x043C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA3[0x3];                                     // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0440(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0450(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0468(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0482(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0483(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x0485(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DA4[0x2];                                     // 0x0486(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DA5[0x3];                                     // 0x0491(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x0494(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeImagineLevelSync_bIsLevelSync;      // 0x049A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeImagineLevelSync_bIsLevelSync_1;    // 0x049B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x049D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA6[0x2];                                     // 0x049E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetImagineLevel_OutImagineLv;             // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x04A8(0x0018)()
	int32                                         K2Node_Select_Default_4;                           // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA7[0x3];                                     // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA8[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x04E0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStackBIconOneItemBase_Visible;         // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x04FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x04FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x04FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA9[0x3];                                     // 0x04FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_7;                           // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DAA[0x4];                                     // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0508(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase");
static_assert(sizeof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase) == 0x000520, "Wrong size on CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InMasterImagine) == 0x000000, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InUniqueId) == 0x0000B0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Param_InIsImagineIconActive) == 0x0000C0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Param_InIsImagineIconActive' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InUseClassTypeForLevelSync) == 0x0000C1, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InClassTypeForLevelSync) == 0x0000C2, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, IsEffectiveDisplay) == 0x0000C3, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InForceLevelSyncOff) == 0x0000C4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InClassLevel) == 0x0000C8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InClassLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InPerkId) == 0x0000CC, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InPerkId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InStackBNum) == 0x0000D0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InStackBNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, InStackBMax) == 0x0000D4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::InStackBMax' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalStackBMax) == 0x0000D8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalStackBMax' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalStackBNum) == 0x0000DC, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalPerkId) == 0x0000E0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalPerkId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalClassLevel) == 0x0000E4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalIsLevelSync) == 0x0000E8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalFinalImagineLevel) == 0x0000EC, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalFinalImagineLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalImagineUniqueId) == 0x0000F0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalRawImagineLevel) == 0x000100, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalRawImagineLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalOwnItemInfo) == 0x000108, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, LocalMasterImagine) == 0x000220, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::LocalMasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable) == 0x0002D0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_text_Variable) == 0x0002D8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable_1) == 0x0002F0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue) == 0x0002F1, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_IsValid_ReturnValue) == 0x0002F2, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable_2) == 0x0002F3, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0002F4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_FindCharacterEquipment_OutResult) == 0x0002F8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_FindCharacterEquipment_OutResult' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_FindCharacterEquipment_ReturnValue) == 0x000410, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_FindCharacterEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default) == 0x000411, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable_3) == 0x000412, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable_4) == 0x000413, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x000414, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x000418, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00043C, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000440, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_Conv_StringToText_ReturnValue) == 0x000450, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default_1) == 0x000468, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_IsValid_ReturnValue_1) == 0x000480, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000481, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000482, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralBool_ReturnValue) == 0x000483, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_Not_PreBool_ReturnValue) == 0x000484, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x000485, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000488, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_IsValid_ReturnValue_2) == 0x000490, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x000494, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000498, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable_5) == 0x000499, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_ChangeImagineLevelSync_bIsLevelSync) == 0x00049A, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_ChangeImagineLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_ChangeImagineLevelSync_bIsLevelSync_1) == 0x00049B, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_ChangeImagineLevelSync_bIsLevelSync_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x00049C, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default_2) == 0x00049D, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_SetImagineLevel_OutImagineLv) == 0x0004A0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_SetImagineLevel_OutImagineLv' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default_3) == 0x0004A4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_Conv_IntToText_ReturnValue) == 0x0004A8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default_4) == 0x0004C0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x0004C4, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_GetMasterImagineText_ReturnValue) == 0x0004C8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x0004D8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0004E0, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default_5) == 0x0004F8, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_SetStackBIconOneItemBase_Visible) == 0x0004F9, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_SetStackBIconOneItemBase_Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable_6) == 0x0004FA, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, Temp_bool_Variable_7) == 0x0004FB, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default_6) == 0x0004FC, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, K2Node_Select_Default_7) == 0x000500, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000508, "Member 'CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

}

