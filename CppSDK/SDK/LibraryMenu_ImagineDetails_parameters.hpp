#pragma once

 

// Package: LibraryMenu_ImagineDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.ExecuteUbergraph_LibraryMenu_ImagineDetails
// 0x00D8 (0x00D8 - 0x0000)
struct LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineView_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADA[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InImagineId;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SetTextColor_C>   CallFunc_SetTextColor_self_CastInput;              // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADB[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ADD[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0058(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADE[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5ADF[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE0[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE1[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE2[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetCaptureStudioEnable_Result;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails) == 0x000008, "Wrong alignment on LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails) == 0x0000D8, "Wrong size on LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, EntryPoint) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_Create_ReturnValue) == 0x000008, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_Event_IsDesignTime) == 0x000010, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_CustomEvent_InImagineId) == 0x000014, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_CustomEvent_InImagineId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_SetTextColor_self_CastInput) == 0x000018, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_SetTextColor_self_CastInput' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000030, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_CustomEvent_Loaded) == 0x000048, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_GetGender_ReturnValue) == 0x000050, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000058, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000080, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_CreateDelegate_OutputDelegate) == 0x000084, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, Temp_object_Variable) == 0x000098, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_DynamicCast_AsTexture_2D) == 0x0000A8, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_GetUIManager_IsValid) == 0x0000B2, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_GetUIManager_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_GetUIManager_IsValid_1) == 0x0000C0, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_GetUIManager_ReturnValue_1) == 0x0000C8, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails, CallFunc_SetCaptureStudioEnable_Result) == 0x0000D0, "Member 'LibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails::CallFunc_SetCaptureStudioEnable_Result' has a wrong offset!");

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetEnhanceImage
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_ImagineDetails_C_SetEnhanceImage final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_SetEnhanceImage) == 0x000004, "Wrong alignment on LibraryMenu_ImagineDetails_C_SetEnhanceImage");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_SetEnhanceImage) == 0x000004, "Wrong size on LibraryMenu_ImagineDetails_C_SetEnhanceImage");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetEnhanceImage, InImagineId) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_SetEnhanceImage::InImagineId' has a wrong offset!");

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_ImagineDetails_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_PreConstruct) == 0x000001, "Wrong alignment on LibraryMenu_ImagineDetails_C_PreConstruct");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_PreConstruct) == 0x000001, "Wrong size on LibraryMenu_ImagineDetails_C_PreConstruct");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnLoaded_9077E37640FA46939F1F1AB3BCBE4946
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946) == 0x000008, "Wrong alignment on LibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946) == 0x000008, "Wrong size on LibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946, Loaded) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946::Loaded' has a wrong offset!");

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetDetailsVisibility
// 0x00C0 (0x00C0 - 0x0000)
struct LibraryMenu_ImagineDetails_C_SetDetailsVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       K2Node_MakeStruct_SBMasterImagine;                 // 0x0008(0x00B0)()
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_SetDetailsVisibility) == 0x000008, "Wrong alignment on LibraryMenu_ImagineDetails_C_SetDetailsVisibility");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_SetDetailsVisibility) == 0x0000C0, "Wrong size on LibraryMenu_ImagineDetails_C_SetDetailsVisibility");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetDetailsVisibility, bVisible) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_SetDetailsVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetDetailsVisibility, K2Node_MakeStruct_SBMasterImagine) == 0x000008, "Member 'LibraryMenu_ImagineDetails_C_SetDetailsVisibility::K2Node_MakeStruct_SBMasterImagine' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetDetailsVisibility, CallFunc_GetVisibility_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_ImagineDetails_C_SetDetailsVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetDetailsVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B9, "Member 'LibraryMenu_ImagineDetails_C_SetDetailsVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetImagineData
// 0x02E0 (0x02E0 - 0x0000)
struct LibraryMenu_ImagineDetails_C_SetImagineData final
{
public:
	struct FSBMasterImagine                       InImagineMasterData;                               // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	ELibraryImagineType                           InImagineType;                                     // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AE4[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USizeBox*>                       TmpPosIconArray;                                   // 0x00B8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         TmpLevel;                                          // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE5[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE6[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	TArray<class USizeBox*>                       K2Node_MakeArray_Array_1;                          // 0x0120(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE7[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_1;       // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AE8[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0150(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0168(0x0018)()
	struct FImagineParameter                      CallFunc_GetImagineLevelParam_ReturnValue;         // 0x0180(0x006C)(NoDestructor)
	bool                                          CallFunc_SetImagineId_isExist;                     // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE9[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01F0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0208(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0220(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0238(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x0250(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_6;             // 0x0268(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_7;             // 0x0280(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_8;             // 0x0298(0x0018)()
	class USizeBox*                               CallFunc_Array_Get_Item_1;                         // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x02BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x02BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AEA[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_9;             // 0x02C8(0x0018)()
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_SetImagineData) == 0x000008, "Wrong alignment on LibraryMenu_ImagineDetails_C_SetImagineData");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_SetImagineData) == 0x0002E0, "Wrong size on LibraryMenu_ImagineDetails_C_SetImagineData");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, InImagineMasterData) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::InImagineMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, InImagineType) == 0x0000B0, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::InImagineType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, TmpPosIconArray) == 0x0000B8, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::TmpPosIconArray' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, TmpLevel) == 0x0000C8, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::TmpLevel' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, Temp_int_Loop_Counter_Variable) == 0x0000CC, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, Temp_int_Array_Index_Variable) == 0x0000D4, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, K2Node_SwitchEnum_CmpSuccess) == 0x0000D8, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, K2Node_MakeArray_Array) == 0x0000E0, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_GetMasterImagineText_ReturnValue) == 0x0000F0, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Array_Get_Item) == 0x000100, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, K2Node_MakeArray_Array_1) == 0x000120, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, K2Node_SwitchEnum_CmpSuccess_1) == 0x000130, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_GetMasterImagineText_ReturnValue_1) == 0x000138, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_GetMasterImagineText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000148, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000150, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue) == 0x000168, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_GetImagineLevelParam_ReturnValue) == 0x000180, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_GetImagineLevelParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_SetImagineId_isExist) == 0x0001EC, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_SetImagineId_isExist' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001F0, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000208, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000220, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000238, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_5) == 0x000250, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_6) == 0x000268, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_7) == 0x000280, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_8) == 0x000298, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Array_Get_Item_1) == 0x0002B0, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Array_Length_ReturnValue) == 0x0002B8, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, Temp_bool_Variable) == 0x0002BC, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Less_IntInt_ReturnValue) == 0x0002BD, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_MakeLiteralByte_ReturnValue) == 0x0002BE, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0002BF, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, K2Node_Select_Default) == 0x0002C0, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetImagineData, CallFunc_Conv_IntToText_ReturnValue_9) == 0x0002C8, "Member 'LibraryMenu_ImagineDetails_C_SetImagineData::CallFunc_Conv_IntToText_ReturnValue_9' has a wrong offset!");

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetActiveTab
// 0x0500 (0x0500 - 0x0000)
struct LibraryMenu_ImagineDetails_C_SetActiveTab final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AEB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           SelectedBtn;                                       // 0x0008(0x0278)(Edit, BlueprintVisible)
	struct FButtonStyle                           NormalBtn;                                         // 0x0280(0x0278)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_SetActiveTab) == 0x000008, "Wrong alignment on LibraryMenu_ImagineDetails_C_SetActiveTab");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_SetActiveTab) == 0x000500, "Wrong size on LibraryMenu_ImagineDetails_C_SetActiveTab");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetActiveTab, Param_Index) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_SetActiveTab::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetActiveTab, SelectedBtn) == 0x000008, "Member 'LibraryMenu_ImagineDetails_C_SetActiveTab::SelectedBtn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetActiveTab, NormalBtn) == 0x000280, "Member 'LibraryMenu_ImagineDetails_C_SetActiveTab::NormalBtn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetActiveTab, K2Node_SwitchInteger_CmpSuccess) == 0x0004F8, "Member 'LibraryMenu_ImagineDetails_C_SetActiveTab::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_SetActiveTab, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0004F9, "Member 'LibraryMenu_ImagineDetails_C_SetActiveTab::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.UpdateReadRecipeTab
// 0x0280 (0x0280 - 0x0000)
struct LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab final
{
public:
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBReadLibraryImagineData              K2Node_MakeStruct_SBReadLibraryImagineData;        // 0x0020(0x0008)(NoDestructor)
	bool                                          CallFunc_IsReadImagineData_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AEC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AED[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AEE[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0068(0x0218)()
};
static_assert(alignof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab) == 0x000008, "Wrong alignment on LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab");
static_assert(sizeof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab) == 0x000280, "Wrong size on LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_GetCharacterId_ReturnValue) == 0x000000, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_GetCharacterId_ReturnValue_1) == 0x000010, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, K2Node_MakeStruct_SBReadLibraryImagineData) == 0x000020, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::K2Node_MakeStruct_SBReadLibraryImagineData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_IsReadImagineData_ReturnValue) == 0x000028, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_IsReadImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_GetPlayerId_ReturnValue) == 0x000030, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_GetPlayerId_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_GetLibrarySaveManager_IsValid) == 0x000050, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000058, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_SaveLibraryData_ReturnValue) == 0x000060, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000061, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab, CallFunc_LoadLibraryData_ReturnValue) == 0x000068, "Member 'LibraryMenu_ImagineDetails_C_UpdateReadRecipeTab::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

}

