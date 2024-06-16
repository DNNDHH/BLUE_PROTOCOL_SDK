#pragma once

 

// Package: Fishing_Result

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fishing_Result.Fishing_Result_C.ExecuteUbergraph_Fishing_Result
// 0x01B8 (0x01B8 - 0x0000)
struct Fishing_Result_C_ExecuteUbergraph_Fishing_Result final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4712[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4713[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4714[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget_1;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget;         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemId;                         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4715[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F8(0x0040)(HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4716[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0148(0x0010)(ReferenceParm)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4717[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0178(0x0028)(HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_TrueIsItemBox;                  // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result) == 0x000008, "Wrong alignment on Fishing_Result_C_ExecuteUbergraph_Fishing_Result");
static_assert(sizeof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result) == 0x0001B8, "Wrong size on Fishing_Result_C_ExecuteUbergraph_Fishing_Result");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, EntryPoint) == 0x000000, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, Temp_object_Variable) == 0x000010, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_DynamicCast_AsTexture_2D) == 0x000020, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_ComponentBoundEvent_InButtonWidget_1) == 0x000030, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_ComponentBoundEvent_InButtonWidget_1' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_ComponentBoundEvent_InButtonWidget) == 0x000040, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_ComponentBoundEvent_InButtonWidget' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000048, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C0, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_CustomEvent_ItemId) == 0x0000D0, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_CustomEvent_ItemId' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000F0, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F8, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_DynamicCast_AsSBCreation_Character) == 0x000138, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_DynamicCast_bSuccess_1) == 0x000140, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_MakeArray_Array) == 0x000148, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_GetGender_ReturnValue) == 0x000158, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_Format_ReturnValue) == 0x000160, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000178, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001A0, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, K2Node_Event_IsDesignTime) == 0x0001B0, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ExecuteUbergraph_Fishing_Result, CallFunc_IsItemBox_TrueIsItemBox) == 0x0001B1, "Member 'Fishing_Result_C_ExecuteUbergraph_Fishing_Result::CallFunc_IsItemBox_TrueIsItemBox' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Fishing_Result_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Result_C_PreConstruct) == 0x000001, "Wrong alignment on Fishing_Result_C_PreConstruct");
static_assert(sizeof(Fishing_Result_C_PreConstruct) == 0x000001, "Wrong size on Fishing_Result_C_PreConstruct");
static_assert(offsetof(Fishing_Result_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Fishing_Result_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.SetThumnailIcon
// 0x0004 (0x0004 - 0x0000)
struct Fishing_Result_C_SetThumnailIcon final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Result_C_SetThumnailIcon) == 0x000004, "Wrong alignment on Fishing_Result_C_SetThumnailIcon");
static_assert(sizeof(Fishing_Result_C_SetThumnailIcon) == 0x000004, "Wrong size on Fishing_Result_C_SetThumnailIcon");
static_assert(offsetof(Fishing_Result_C_SetThumnailIcon, ItemId) == 0x000000, "Member 'Fishing_Result_C_SetThumnailIcon::ItemId' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(sizeof(Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong size on Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(offsetof(Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.OnLoaded_B741E7294084427C7364DF8A5FD7B5FB
// 0x0008 (0x0008 - 0x0000)
struct Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB) == 0x000008, "Wrong alignment on Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB");
static_assert(sizeof(Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB) == 0x000008, "Wrong size on Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB");
static_assert(offsetof(Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB, Loaded) == 0x000000, "Member 'Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB::Loaded' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.SetFishPlate
// 0x0040 (0x0040 - 0x0000)
struct Fishing_Result_C_SetFishPlate final
{
public:
	bool                                          UploadSuccess;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4718[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnCode;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 FishId;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ItemName;                                          // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         FishLength;                                        // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemAmount;                                        // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNewFish;                                         // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsNewRecord;                                       // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBig;                                             // 0x0032(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4719[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_TrueIsItemBox;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Result_C_SetFishPlate) == 0x000008, "Wrong alignment on Fishing_Result_C_SetFishPlate");
static_assert(sizeof(Fishing_Result_C_SetFishPlate) == 0x000040, "Wrong size on Fishing_Result_C_SetFishPlate");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, UploadSuccess) == 0x000000, "Member 'Fishing_Result_C_SetFishPlate::UploadSuccess' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, ReturnCode) == 0x000004, "Member 'Fishing_Result_C_SetFishPlate::ReturnCode' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, FishId) == 0x000008, "Member 'Fishing_Result_C_SetFishPlate::FishId' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, ItemName) == 0x000018, "Member 'Fishing_Result_C_SetFishPlate::ItemName' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, FishLength) == 0x000028, "Member 'Fishing_Result_C_SetFishPlate::FishLength' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, ItemAmount) == 0x00002C, "Member 'Fishing_Result_C_SetFishPlate::ItemAmount' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, IsNewFish) == 0x000030, "Member 'Fishing_Result_C_SetFishPlate::IsNewFish' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, IsNewRecord) == 0x000031, "Member 'Fishing_Result_C_SetFishPlate::IsNewRecord' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, IsBig) == 0x000032, "Member 'Fishing_Result_C_SetFishPlate::IsBig' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, ItemId) == 0x000034, "Member 'Fishing_Result_C_SetFishPlate::ItemId' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'Fishing_Result_C_SetFishPlate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetFishPlate, CallFunc_IsItemBox_TrueIsItemBox) == 0x000039, "Member 'Fishing_Result_C_SetFishPlate::CallFunc_IsItemBox_TrueIsItemBox' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.CheckItemStorage
// 0x0028 (0x0028 - 0x0000)
struct Fishing_Result_C_CheckItemStorage final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Result_C_CheckItemStorage) == 0x000008, "Wrong alignment on Fishing_Result_C_CheckItemStorage");
static_assert(sizeof(Fishing_Result_C_CheckItemStorage) == 0x000028, "Wrong size on Fishing_Result_C_CheckItemStorage");
static_assert(offsetof(Fishing_Result_C_CheckItemStorage, Ret) == 0x000000, "Member 'Fishing_Result_C_CheckItemStorage::Ret' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckItemStorage, CallFunc_GetCharacterStorage_ReturnValue) == 0x000008, "Member 'Fishing_Result_C_CheckItemStorage::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckItemStorage, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000010, "Member 'Fishing_Result_C_CheckItemStorage::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckItemStorage, CallFunc_GetUseBlockNum_ReturnValue) == 0x000018, "Member 'Fishing_Result_C_CheckItemStorage::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckItemStorage, CallFunc_GetCapacity_ReturnValue) == 0x00001C, "Member 'Fishing_Result_C_CheckItemStorage::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckItemStorage, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'Fishing_Result_C_CheckItemStorage::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.CheckBackPack
// 0x0028 (0x0028 - 0x0000)
struct Fishing_Result_C_CheckBackPack final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Result_C_CheckBackPack) == 0x000008, "Wrong alignment on Fishing_Result_C_CheckBackPack");
static_assert(sizeof(Fishing_Result_C_CheckBackPack) == 0x000028, "Wrong size on Fishing_Result_C_CheckBackPack");
static_assert(offsetof(Fishing_Result_C_CheckBackPack, Ret) == 0x000000, "Member 'Fishing_Result_C_CheckBackPack::Ret' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckBackPack, CallFunc_GetInventory_ReturnValue) == 0x000008, "Member 'Fishing_Result_C_CheckBackPack::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckBackPack, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000010, "Member 'Fishing_Result_C_CheckBackPack::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckBackPack, CallFunc_GetUseBlockNum_ReturnValue) == 0x000018, "Member 'Fishing_Result_C_CheckBackPack::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckBackPack, CallFunc_GetCapacity_ReturnValue) == 0x00001C, "Member 'Fishing_Result_C_CheckBackPack::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckBackPack, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'Fishing_Result_C_CheckBackPack::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.ShowCan'tGetFish
// 0x0030 (0x0030 - 0x0000)
struct Fishing_Result_C_ShowCan_tGetFish final
{
public:
	bool                                          TrueIsVisible;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(Fishing_Result_C_ShowCan_tGetFish) == 0x000008, "Wrong alignment on Fishing_Result_C_ShowCan_tGetFish");
static_assert(sizeof(Fishing_Result_C_ShowCan_tGetFish) == 0x000030, "Wrong size on Fishing_Result_C_ShowCan_tGetFish");
static_assert(offsetof(Fishing_Result_C_ShowCan_tGetFish, TrueIsVisible) == 0x000000, "Member 'Fishing_Result_C_ShowCan_tGetFish::TrueIsVisible' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ShowCan_tGetFish, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'Fishing_Result_C_ShowCan_tGetFish::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ShowCan_tGetFish, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'Fishing_Result_C_ShowCan_tGetFish::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.ShowCan'tGetItem
// 0x0030 (0x0030 - 0x0000)
struct Fishing_Result_C_ShowCan_tGetItem final
{
public:
	bool                                          TrueIsVisible;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(Fishing_Result_C_ShowCan_tGetItem) == 0x000008, "Wrong alignment on Fishing_Result_C_ShowCan_tGetItem");
static_assert(sizeof(Fishing_Result_C_ShowCan_tGetItem) == 0x000030, "Wrong size on Fishing_Result_C_ShowCan_tGetItem");
static_assert(offsetof(Fishing_Result_C_ShowCan_tGetItem, TrueIsVisible) == 0x000000, "Member 'Fishing_Result_C_ShowCan_tGetItem::TrueIsVisible' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ShowCan_tGetItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'Fishing_Result_C_ShowCan_tGetItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_ShowCan_tGetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'Fishing_Result_C_ShowCan_tGetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.Reuslt Visibility
// 0x0018 (0x0018 - 0x0000)
struct Fishing_Result_C_Reuslt_Visibility final
{
public:
	bool                                          On;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Result_C_Reuslt_Visibility) == 0x000008, "Wrong alignment on Fishing_Result_C_Reuslt_Visibility");
static_assert(sizeof(Fishing_Result_C_Reuslt_Visibility) == 0x000018, "Wrong size on Fishing_Result_C_Reuslt_Visibility");
static_assert(offsetof(Fishing_Result_C_Reuslt_Visibility, On) == 0x000000, "Member 'Fishing_Result_C_Reuslt_Visibility::On' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_Reuslt_Visibility, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'Fishing_Result_C_Reuslt_Visibility::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_Reuslt_Visibility, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'Fishing_Result_C_Reuslt_Visibility::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.SetThumbnail
// 0x0050 (0x0050 - 0x0000)
struct Fishing_Result_C_SetThumbnail final
{
public:
	class FString                                 FishId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsBig;                                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LItemID;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4720[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ArgNameFstring;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          LIsBig;                                            // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4721[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ArgName;                                           // 0x0034(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4722[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           RowNames;                                          // 0x0040(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(Fishing_Result_C_SetThumbnail) == 0x000008, "Wrong alignment on Fishing_Result_C_SetThumbnail");
static_assert(sizeof(Fishing_Result_C_SetThumbnail) == 0x000050, "Wrong size on Fishing_Result_C_SetThumbnail");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, FishId) == 0x000000, "Member 'Fishing_Result_C_SetThumbnail::FishId' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, IsBig) == 0x000010, "Member 'Fishing_Result_C_SetThumbnail::IsBig' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, ItemId) == 0x000014, "Member 'Fishing_Result_C_SetThumbnail::ItemId' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, LItemID) == 0x000018, "Member 'Fishing_Result_C_SetThumbnail::LItemID' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, ArgNameFstring) == 0x000020, "Member 'Fishing_Result_C_SetThumbnail::ArgNameFstring' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, LIsBig) == 0x000030, "Member 'Fishing_Result_C_SetThumbnail::LIsBig' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, ArgName) == 0x000034, "Member 'Fishing_Result_C_SetThumbnail::ArgName' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_SetThumbnail, RowNames) == 0x000040, "Member 'Fishing_Result_C_SetThumbnail::RowNames' has a wrong offset!");

// Function Fishing_Result.Fishing_Result_C.CheckErrorCode
// 0x0008 (0x0008 - 0x0000)
struct Fishing_Result_C_CheckErrorCode final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Result_C_CheckErrorCode) == 0x000004, "Wrong alignment on Fishing_Result_C_CheckErrorCode");
static_assert(sizeof(Fishing_Result_C_CheckErrorCode) == 0x000008, "Wrong size on Fishing_Result_C_CheckErrorCode");
static_assert(offsetof(Fishing_Result_C_CheckErrorCode, RetCode) == 0x000000, "Member 'Fishing_Result_C_CheckErrorCode::RetCode' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckErrorCode, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'Fishing_Result_C_CheckErrorCode::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Result_C_CheckErrorCode, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000005, "Member 'Fishing_Result_C_CheckErrorCode::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

}

