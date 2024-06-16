#pragma once

 

// Package: CommunicateSettingMenu_Photo_Thumbnail

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_CheckBox__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature) == 0x000001, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature) == 0x000001, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature, IsChecked) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature::IsChecked' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_LikeBtn__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature final
{
public:
	class FString                                 OutPhotoModeImageId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutLikeCount;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature) == 0x000018, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature, OutPhotoModeImageId) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature::OutPhotoModeImageId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature, OutLikeCount) == 0x000010, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature::OutLikeCount' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail
// 0x0198 (0x0198 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_539B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539C[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 RetCode, struct FSendPhotoLike& OutSendPhotoLike)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_2;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_539D[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0048(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539E[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InScale;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InPosition;                     // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InLikeCount;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsLikeEnableCount;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InPhotoModeImageId;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A0[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00A8(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A1[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A2[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSendPhotoLike                         K2Node_MakeStruct_SendPhotoLike;                   // 0x00E8(0x0030)()
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0118(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A3[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x011C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSendPhotoLike                         K2Node_CustomEvent_outSendPhotoLike;               // 0x0120(0x0030)(ConstParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0150(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A4[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A5[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail) == 0x000198, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, EntryPoint) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, Temp_bool_Variable) == 0x000019, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_GetConcernedList_ReturnValue) == 0x000020, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, Temp_int_Variable) == 0x000028, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, Temp_int_Variable_1) == 0x00002C, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, Temp_int_Variable_2) == 0x000040, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, Temp_byte_Variable) == 0x000060, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, Temp_bool_Variable_1) == 0x000061, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_URL) == 0x000068, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_InScale) == 0x000078, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_InPosition) == 0x00007C, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_InLikeCount) == 0x000084, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_InLikeCount' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_InIsLikeEnableCount) == 0x000088, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_InIsLikeEnableCount' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_InPhotoModeImageId) == 0x000090, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_InPhotoModeImageId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_Select_Default) == 0x0000A0, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000A8, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_IsEmpty_ReturnValue) == 0x0000C0, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_Not_PreBool_ReturnValue) == 0x0000C1, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, Temp_byte_Variable_1) == 0x0000C2, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_Select_Default_1) == 0x0000C3, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000C8, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000D0, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_GetConcernedList_ReturnValue_1) == 0x0000E0, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_MakeStruct_SendPhotoLike) == 0x0000E8, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_MakeStruct_SendPhotoLike' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_bWasSuccessful) == 0x000118, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_RetCode) == 0x00011C, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, K2Node_CustomEvent_outSendPhotoLike) == 0x000120, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::K2Node_CustomEvent_outSendPhotoLike' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_GetSBRetMessage_ReturnValue) == 0x000150, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000160, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_BooleanAND_ReturnValue) == 0x000180, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_Add_IntInt_ReturnValue) == 0x000184, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_DownloadImage_ReturnValue) == 0x000188, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000190, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_IsValid_ReturnValue) == 0x000191, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000192, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnSendPhotoLikeDelegate_Event
// 0x0038 (0x0038 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSendPhotoLike                         OutSendPhotoLike;                                  // 0x0008(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event) == 0x000038, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event, bWasSuccessful) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event, RetCode) == 0x000004, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event::RetCode' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event, OutSendPhotoLike) == 0x000008, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event::OutSendPhotoLike' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.DownLoadPhoto
// 0x0038 (0x0038 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InLikeCount;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsLikeEnableCount;                               // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPhotoModeImageId;                                // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto) == 0x000038, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto, URL) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto::URL' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto, InScale) == 0x000010, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto::InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto, InPosition) == 0x000014, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto::InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto, InLikeCount) == 0x00001C, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto::InLikeCount' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto, InIsLikeEnableCount) == 0x000020, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto::InIsLikeEnableCount' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto, InPhotoModeImageId) == 0x000028, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto::InPhotoModeImageId' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetThumbnail
// 0x00B8 (0x00B8 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize; // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A8[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x0088)()
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail) == 0x0000B8, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail, Texture) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail::Texture' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail, InScale) == 0x000008, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail::InScale' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail, InPosition) == 0x00000C, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail::InPosition' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail, CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize) == 0x000014, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail::CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x00001C, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetURL
// 0x0010 (0x0010 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_SetURL final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_SetURL) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_SetURL");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_SetURL) == 0x000010, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_SetURL");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetURL, URL) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetURL::URL' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetUrl
// 0x0010 (0x0010 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl final
{
public:
	class FString                                 Param_URL_Thumbnail;                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl) == 0x000010, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl, Param_URL_Thumbnail) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl::Param_URL_Thumbnail' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetBtnEnable
// 0x0005 (0x0005 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable) == 0x000001, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable) == 0x000005, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable, bInIsEnabled) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable::bInIsEnabled' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable, Temp_bool_Variable) == 0x000001, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable, Temp_byte_Variable) == 0x000002, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable, Temp_byte_Variable_1) == 0x000003, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable, K2Node_Select_Default) == 0x000004, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable::K2Node_Select_Default' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Init
// 0x0030 (0x0030 - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_Init final
{
public:
	bool                                          InIsMe;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPlayerId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InCharacterId;                                     // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Param_Index;                                       // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_Init) == 0x000008, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_Init");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_Init) == 0x000030, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_Init");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_Init, InIsMe) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_Init::InIsMe' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_Init, InPlayerId) == 0x000008, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_Init::InPlayerId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_Init, InCharacterId) == 0x000018, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_Init::InCharacterId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_Init, Param_Index) == 0x000028, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_Init::Param_Index' has a wrong offset!");

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetBtnStatus
// 0x000C (0x000C - 0x0000)
struct CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53AA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus) == 0x000004, "Wrong alignment on CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus");
static_assert(sizeof(CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus) == 0x00000C, "Wrong size on CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus, ReturnValue) == 0x000000, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus, CallFunc_GetIsEnabled_ReturnValue) == 0x000008, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000009, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus, CallFunc_BooleanAND_ReturnValue) == 0x00000A, "Member 'CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

