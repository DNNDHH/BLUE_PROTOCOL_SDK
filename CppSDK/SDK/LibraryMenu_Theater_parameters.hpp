#pragma once

 

// Package: LibraryMenu_Theater

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ELibraryMenuType_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.UpdateNewIcon__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature");
static_assert(sizeof(LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature");
static_assert(offsetof(LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature::Param_Index' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExecuteUbergraph_LibraryMenu_Theater
// 0x0310 (0x0310 - 0x0000)
struct LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66D5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66D6[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66D7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66D8[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66D9[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66DA[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0114(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x011C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66DB[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_CreteGameContentId_GameContentId;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66DC[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate;              // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_66DD[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MainPage;                             // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66DE[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66DF[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Thumbail;                       // 0x0190(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66E0[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_NewParam;               // 0x01C0(0x0018)()
	class FName                                   K2Node_CustomEvent_DemoID;                         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData;           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData_1;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTheaterModeInfo                     CallFunc_GetTheaterModeInfo_ReturnValue;           // 0x01F0(0x0014)(NoDestructor)
	int32                                         K2Node_CustomEvent_CategoryId;                     // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ListId;                         // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_CategoryOffset;                 // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ListOffset;                     // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66E1[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData_2;         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_Offset;                   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66E2[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            Temp_byte_Variable;                                // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66E3[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ItemIndex;              // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex; // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_Offset_1;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            Temp_byte_Variable_1;                              // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66E4[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66E5[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData_3;         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTheaterModeInfo                     CallFunc_GetTheaterModeInfo_ReturnValue_1;         // 0x0260(0x0014)(NoDestructor)
	uint8                                         Pad_66E6[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66E7[0x5];                                     // 0x028B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetLoadDemoList_ReturnValue;              // 0x0298(0x0010)(ReferenceParm)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x02A8(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_66E8[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02C0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTheaterComponent*                    CallFunc_GetTheaterComponent_ReturnValue;          // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ScriptTheaterActor_C*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater) == 0x000010, "Wrong alignment on LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater");
static_assert(sizeof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater) == 0x000310, "Wrong size on LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, EntryPoint) == 0x000000, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000008, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000048, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000050, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_NotEqual_NameName_ReturnValue) == 0x000078, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_MakeArray_Array) == 0x0000C0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Conv_NameToString_ReturnValue) == 0x0000F0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Concat_StrStr_ReturnValue) == 0x000100, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Conv_StringToName_ReturnValue) == 0x000114, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_Result) == 0x00011C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_CreteGameContentId_GameContentId) == 0x000120, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_CreteGameContentId_GameContentId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_SwitchEnum_CmpSuccess_1) == 0x000128, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CreateDelegate_OutputDelegate) == 0x00012C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000140, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_Event_InBookMarkType) == 0x000148, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_Event_MainPage) == 0x000158, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_Event_SubPage) == 0x00015C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetPlayerController_ReturnValue) == 0x000160, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_ListIndex) == 0x000168, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000170, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Left_ReturnValue) == 0x000180, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_Thumbail) == 0x000190, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_Thumbail' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B8, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_ComponentBoundEvent_NewParam) == 0x0001C0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_ComponentBoundEvent_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_DemoID) == 0x0001D8, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_DemoID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Load_Lib_Save_Data_LibSaveData) == 0x0001E0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Load_Lib_Save_Data_LibSaveData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Load_Lib_Save_Data_LibSaveData_1) == 0x0001E8, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Load_Lib_Save_Data_LibSaveData_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetTheaterModeInfo_ReturnValue) == 0x0001F0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetTheaterModeInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_CategoryId) == 0x000204, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_ListId) == 0x000208, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_ListId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_CategoryOffset) == 0x00020C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_CategoryOffset' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_ListOffset) == 0x000210, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_ListOffset' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Load_Lib_Save_Data_LibSaveData_2) == 0x000218, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Load_Lib_Save_Data_LibSaveData_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_MakeLiteralInt_ReturnValue) == 0x000220, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Array_Length_ReturnValue_1) == 0x000224, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetScrollOffset_Offset) == 0x000228, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetScrollOffset_Offset' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00022C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Create_ReturnValue) == 0x000230, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, Temp_byte_Variable) == 0x000238, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_Select_Default) == 0x00023C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_ComponentBoundEvent_ItemIndex) == 0x000240, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_ComponentBoundEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex) == 0x000244, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetScrollOffset_Offset_1) == 0x000248, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetScrollOffset_Offset_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, Temp_byte_Variable_1) == 0x00024C, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_Select_Default_1) == 0x000250, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_Load_Lib_Save_Data_LibSaveData_3) == 0x000258, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_Load_Lib_Save_Data_LibSaveData_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetTheaterModeInfo_ReturnValue_1) == 0x000260, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetTheaterModeInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, Temp_object_Variable) == 0x000278, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_DynamicCast_AsTexture_2D) == 0x000280, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_DynamicCast_bSuccess_2) == 0x000288, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_IsValid_ReturnValue_1) == 0x000289, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_IsValid_ReturnValue_2) == 0x00028A, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CustomEvent_Loaded) == 0x000290, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetLoadDemoList_ReturnValue) == 0x000298, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetLoadDemoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, K2Node_CreateDelegate_OutputDelegate_1) == 0x0002A8, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_MakeTransform_ReturnValue) == 0x0002C0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0002F0, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_GetTheaterComponent_ReturnValue) == 0x0002F8, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_GetTheaterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_FinishSpawningActor_ReturnValue) == 0x000300, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000308, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater, CallFunc_IsValid_ReturnValue_3) == 0x000309, "Member 'LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveTheaterSelectedInfo
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Theater_C_SaveTheaterSelectedInfo final
{
public:
	int32                                         CategoryId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ListId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CategoryOffset;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ListOffset;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_SaveTheaterSelectedInfo) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_SaveTheaterSelectedInfo");
static_assert(sizeof(LibraryMenu_Theater_C_SaveTheaterSelectedInfo) == 0x000010, "Wrong size on LibraryMenu_Theater_C_SaveTheaterSelectedInfo");
static_assert(offsetof(LibraryMenu_Theater_C_SaveTheaterSelectedInfo, CategoryId) == 0x000000, "Member 'LibraryMenu_Theater_C_SaveTheaterSelectedInfo::CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_SaveTheaterSelectedInfo, ListId) == 0x000004, "Member 'LibraryMenu_Theater_C_SaveTheaterSelectedInfo::ListId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_SaveTheaterSelectedInfo, CategoryOffset) == 0x000008, "Member 'LibraryMenu_Theater_C_SaveTheaterSelectedInfo::CategoryOffset' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_SaveTheaterSelectedInfo, ListOffset) == 0x00000C, "Member 'LibraryMenu_Theater_C_SaveTheaterSelectedInfo::ListOffset' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Request_SaveDemo
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Theater_C_Request_SaveDemo final
{
public:
	class FName                                   DemoId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_Request_SaveDemo) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_Request_SaveDemo");
static_assert(sizeof(LibraryMenu_Theater_C_Request_SaveDemo) == 0x000008, "Wrong size on LibraryMenu_Theater_C_Request_SaveDemo");
static_assert(offsetof(LibraryMenu_Theater_C_Request_SaveDemo, DemoId) == 0x000000, "Member 'LibraryMenu_Theater_C_Request_SaveDemo::DemoId' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.LoadThumbnail
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_Theater_C_LoadThumbnail final
{
public:
	TSoftObjectPtr<class UTexture2D>              Thumbail;                                          // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_LoadThumbnail) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_LoadThumbnail");
static_assert(sizeof(LibraryMenu_Theater_C_LoadThumbnail) == 0x000028, "Wrong size on LibraryMenu_Theater_C_LoadThumbnail");
static_assert(offsetof(LibraryMenu_Theater_C_LoadThumbnail, Thumbail) == 0x000000, "Member 'LibraryMenu_Theater_C_LoadThumbnail::Thumbail' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnEndDialog
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Theater_C_OnEndDialog final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_OnEndDialog) == 0x000001, "Wrong alignment on LibraryMenu_Theater_C_OnEndDialog");
static_assert(sizeof(LibraryMenu_Theater_C_OnEndDialog) == 0x000001, "Wrong size on LibraryMenu_Theater_C_OnEndDialog");
static_assert(offsetof(LibraryMenu_Theater_C_OnEndDialog, Result) == 0x000000, "Member 'LibraryMenu_Theater_C_OnEndDialog::Result' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Theater_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_OnSubMenuUpdate");
static_assert(sizeof(LibraryMenu_Theater_C_OnSubMenuUpdate) == 0x000008, "Wrong size on LibraryMenu_Theater_C_OnSubMenuUpdate");
static_assert(offsetof(LibraryMenu_Theater_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'LibraryMenu_Theater_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'LibraryMenu_Theater_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnClickEvent
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Theater_C_OnClickEvent final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_OnClickEvent) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_OnClickEvent");
static_assert(sizeof(LibraryMenu_Theater_C_OnClickEvent) == 0x000004, "Wrong size on LibraryMenu_Theater_C_OnClickEvent");
static_assert(offsetof(LibraryMenu_Theater_C_OnClickEvent, ListIndex) == 0x000000, "Member 'LibraryMenu_Theater_C_OnClickEvent::ListIndex' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature, NewParam) == 0x000000, "Member 'LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature::NewParam' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnLoaded_56ABDCA943F8CB39C0C21897E8372530
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530");
static_assert(sizeof(LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530) == 0x000008, "Wrong size on LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530");
static_assert(offsetof(LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530, Loaded) == 0x000000, "Member 'LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530::Loaded' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateCategoryList
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_Theater_C_CreateCategoryList final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66E9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_CreateCategoryList) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_CreateCategoryList");
static_assert(sizeof(LibraryMenu_Theater_C_CreateCategoryList) == 0x000020, "Wrong size on LibraryMenu_Theater_C_CreateCategoryList");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, Temp_int_Variable) == 0x000000, "Member 'LibraryMenu_Theater_C_CreateCategoryList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, Temp_int_Variable_1) == 0x000004, "Member 'LibraryMenu_Theater_C_CreateCategoryList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_GetValidValue_ReturnValue) == 0x000010, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000011, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000012, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000013, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Theater_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.GetDemoTypeName
// 0x0218 (0x0218 - 0x0000)
struct LibraryMenu_Theater_C_GetDemoTypeName final
{
public:
	ESBDemoType                                   Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewLocalVar_0;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66EA[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChapterMax;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TypeIndex;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TypeName;                                          // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66EB[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66EC[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66ED[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66EE[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0118(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBDemoData                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0140(0x0090)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckViewedDemoId_IsOk;                   // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66EF[0x5];                                     // 0x01D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Mid_ReturnValue;                          // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Mid_ReturnValue_1;                        // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66F0[0x2];                                     // 0x020E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_GetDemoTypeName) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_GetDemoTypeName");
static_assert(sizeof(LibraryMenu_Theater_C_GetDemoTypeName) == 0x000218, "Wrong size on LibraryMenu_Theater_C_GetDemoTypeName");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, Type) == 0x000000, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::Type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, NewLocalVar_0) == 0x000001, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, ChapterMax) == 0x000004, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::ChapterMax' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, TypeIndex) == 0x000008, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::TypeIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, TypeName) == 0x00000C, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::TypeName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, Temp_int_Array_Index_Variable) == 0x000020, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, Temp_int_Variable) == 0x000024, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, Temp_int_Variable_1) == 0x000048, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Array_Add_ReturnValue) == 0x00004C, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Add_IntInt_ReturnValue_2) == 0x000090, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, K2Node_MakeArray_Array) == 0x000098, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Array_Add_ReturnValue_1) == 0x0000A8, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000AC, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, Temp_int_Variable_2) == 0x0000B0, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000B4, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000B8, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Conv_TextToString_ReturnValue) == 0x000108, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000118, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Array_Get_Item) == 0x000128, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000130, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_GetDataTableRowFromName_OutRow) == 0x000140, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001D0, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_CheckViewedDemoId_IsOk) == 0x0001D1, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_CheckViewedDemoId_IsOk' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_NotEqual_NameName_ReturnValue) == 0x0001D2, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Conv_NameToString_ReturnValue) == 0x0001D8, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Mid_ReturnValue) == 0x0001E8, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Mid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Mid_ReturnValue_1) == 0x0001F8, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Mid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Conv_StringToInt_ReturnValue) == 0x000208, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, K2Node_SwitchString_CmpSuccess) == 0x00020C, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Less_IntInt_ReturnValue) == 0x00020D, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_GetDemoTypeName, CallFunc_Less_IntInt_ReturnValue_1) == 0x000214, "Member 'LibraryMenu_Theater_C_GetDemoTypeName::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckLevelName
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_Theater_C_CheckLevelName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsScript;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDemo;                                            // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66F1[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_RightChop_ReturnValue;                    // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F2[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_CheckLevelName) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_CheckLevelName");
static_assert(sizeof(LibraryMenu_Theater_C_CheckLevelName) == 0x000060, "Wrong size on LibraryMenu_Theater_C_CheckLevelName");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, Param_Name) == 0x000000, "Member 'LibraryMenu_Theater_C_CheckLevelName::Param_Name' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, IsScript) == 0x000008, "Member 'LibraryMenu_Theater_C_CheckLevelName::IsScript' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, IsDemo) == 0x000009, "Member 'LibraryMenu_Theater_C_CheckLevelName::IsDemo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'LibraryMenu_Theater_C_CheckLevelName::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000020, "Member 'LibraryMenu_Theater_C_CheckLevelName::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, CallFunc_RightChop_ReturnValue) == 0x000030, "Member 'LibraryMenu_Theater_C_CheckLevelName::CallFunc_RightChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, CallFunc_Len_ReturnValue) == 0x000040, "Member 'LibraryMenu_Theater_C_CheckLevelName::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, CallFunc_Left_ReturnValue) == 0x000048, "Member 'LibraryMenu_Theater_C_CheckLevelName::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000058, "Member 'LibraryMenu_Theater_C_CheckLevelName::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, K2Node_SwitchString_CmpSuccess) == 0x000059, "Member 'LibraryMenu_Theater_C_CheckLevelName::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckLevelName, CallFunc_NotEqual_NameName_ReturnValue) == 0x00005A, "Member 'LibraryMenu_Theater_C_CheckLevelName::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemList
// 0x0298 (0x0298 - 0x0000)
struct LibraryMenu_Theater_C_CreateItemList final
{
public:
	TSoftObjectPtr<class UTexture2D>              L_Thumbnail;                                       // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                 L_DemoTitle;                                       // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBDemoMediaType                              L_MediaType;                                       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F3[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   L_LevelName;                                       // 0x003C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   L_RowName;                                         // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadDemoIdList_ReturnValue;            // 0x0058(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadName_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66F4[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_ListItem_C*                CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66F5[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F6[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSerchKeyword_SerchKeyword;             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66F7[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDemoData                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x00D8(0x0090)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckViewedDemoId_IsOk;                   // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckLevelName_IsDemo;                    // 0x016B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Mid_ReturnValue;                          // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Mid_ReturnValue_1;                        // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66F8[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F9[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66FA[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTheaterData                         K2Node_MakeStruct_SBTheaterData;                   // 0x01D0(0x0060)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0237(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetSerchKeyword_SerchKeyword_1;           // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0248(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66FB[0x6];                                     // 0x025A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66FC[0x2];                                     // 0x026A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0270(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66FD[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0284(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_CreateItemList) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_CreateItemList");
static_assert(sizeof(LibraryMenu_Theater_C_CreateItemList) == 0x000298, "Wrong size on LibraryMenu_Theater_C_CreateItemList");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, L_Thumbnail) == 0x000000, "Member 'LibraryMenu_Theater_C_CreateItemList::L_Thumbnail' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, L_DemoTitle) == 0x000028, "Member 'LibraryMenu_Theater_C_CreateItemList::L_DemoTitle' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, L_MediaType) == 0x000038, "Member 'LibraryMenu_Theater_C_CreateItemList::L_MediaType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, L_LevelName) == 0x00003C, "Member 'LibraryMenu_Theater_C_CreateItemList::L_LevelName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, L_RowName) == 0x000044, "Member 'LibraryMenu_Theater_C_CreateItemList::L_RowName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'LibraryMenu_Theater_C_CreateItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Load_Lib_Save_Data_LibSaveData) == 0x000050, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Load_Lib_Save_Data_LibSaveData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_GetReadDemoIdList_ReturnValue) == 0x000058, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_GetReadDemoIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_IsReadName_ReturnValue) == 0x000068, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_IsReadName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Create_ReturnValue) == 0x000070, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_NameToString_ReturnValue) == 0x000078, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000088, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000098, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_GetSerchKeyword_SerchKeyword) == 0x0000C0, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_GetSerchKeyword_SerchKeyword' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0000D0, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Contains_ReturnValue) == 0x0000D4, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000D8, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000168, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_CheckViewedDemoId_IsOk) == 0x000169, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_CheckViewedDemoId_IsOk' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00016A, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_CheckLevelName_IsDemo) == 0x00016B, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_CheckLevelName_IsDemo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x00016C, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000170, "Member 'LibraryMenu_Theater_C_CreateItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000180, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Mid_ReturnValue) == 0x000190, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Mid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Mid_ReturnValue_1) == 0x0001A0, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Mid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_StringToInt_ReturnValue) == 0x0001B0, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, K2Node_SwitchString_CmpSuccess) == 0x0001B4, "Member 'LibraryMenu_Theater_C_CreateItemList::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001B8, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, Temp_byte_Variable) == 0x0001BC, "Member 'LibraryMenu_Theater_C_CreateItemList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, Temp_int_Loop_Counter_Variable) == 0x0001C0, "Member 'LibraryMenu_Theater_C_CreateItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Add_IntInt_ReturnValue) == 0x0001C4, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, Temp_byte_Variable_1) == 0x0001C8, "Member 'LibraryMenu_Theater_C_CreateItemList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Array_Length_ReturnValue) == 0x0001CC, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, K2Node_MakeStruct_SBTheaterData) == 0x0001D0, "Member 'LibraryMenu_Theater_C_CreateItemList::K2Node_MakeStruct_SBTheaterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Array_Add_ReturnValue) == 0x000230, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000234, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000235, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000236, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000237, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_GetSerchKeyword_SerchKeyword_1) == 0x000238, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_GetSerchKeyword_SerchKeyword_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, K2Node_MakeStruct_Margin) == 0x000248, "Member 'LibraryMenu_Theater_C_CreateItemList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000258, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, Temp_bool_Variable) == 0x000259, "Member 'LibraryMenu_Theater_C_CreateItemList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000260, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, K2Node_Select_Default) == 0x000268, "Member 'LibraryMenu_Theater_C_CreateItemList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000269, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x00026C, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000270, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000280, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Array_Get_Item) == 0x000284, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Array_Length_ReturnValue_1) == 0x00028C, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemList, CallFunc_Less_IntInt_ReturnValue) == 0x000290, "Member 'LibraryMenu_Theater_C_CreateItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemDetail
// 0x01A8 (0x01A8 - 0x0000)
struct LibraryMenu_Theater_C_CreateItemDetail final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              L_LibraryMenuId;                                   // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66FE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_SelectId;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66FF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              L_Thumbnail;                                       // 0x0010(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData_1;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadDemoIdList_ReturnValue;            // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadName_ReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6700[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItem_C*                K2Node_DynamicCast_AsLibrary_Menu_List_Item;       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6701[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue_1;          // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IAssetRegistry>        CallFunc_GetAssetRegistry_ReturnValue;             // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAssetData                             CallFunc_GetAssetByObjectPath_ReturnValue;         // 0x00E0(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6702[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetAsset_ReturnValue;                     // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6703[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0178(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_CreateItemDetail) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_CreateItemDetail");
static_assert(sizeof(LibraryMenu_Theater_C_CreateItemDetail) == 0x0001A8, "Wrong size on LibraryMenu_Theater_C_CreateItemDetail");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, Param_Index) == 0x000000, "Member 'LibraryMenu_Theater_C_CreateItemDetail::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, L_LibraryMenuId) == 0x000004, "Member 'LibraryMenu_Theater_C_CreateItemDetail::L_LibraryMenuId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, L_SelectId) == 0x000008, "Member 'LibraryMenu_Theater_C_CreateItemDetail::L_SelectId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, L_Thumbnail) == 0x000010, "Member 'LibraryMenu_Theater_C_CreateItemDetail::L_Thumbnail' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Load_Lib_Save_Data_LibSaveData) == 0x000038, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Load_Lib_Save_Data_LibSaveData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Load_Lib_Save_Data_LibSaveData_1) == 0x000040, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Load_Lib_Save_Data_LibSaveData_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_GetReadDemoIdList_ReturnValue) == 0x000048, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_GetReadDemoIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_IsReadName_ReturnValue) == 0x000058, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_IsReadName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_GetChildAt_ReturnValue) == 0x000060, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, K2Node_DynamicCast_AsLibrary_Menu_List_Item) == 0x000068, "Member 'LibraryMenu_Theater_C_CreateItemDetail::K2Node_DynamicCast_AsLibrary_Menu_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'LibraryMenu_Theater_C_CreateItemDetail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_MakeLiteralString_ReturnValue) == 0x000078, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_MakeLiteralString_ReturnValue_1) == 0x000088, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_MakeLiteralString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_GetAssetRegistry_ReturnValue) == 0x000098, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_GetAssetRegistry_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000B8, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C8, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Conv_StringToName_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_GetAssetByObjectPath_ReturnValue) == 0x0000E0, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_GetAssetByObjectPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000140, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_GetAsset_ReturnValue) == 0x000148, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, K2Node_DynamicCast_AsTexture_2D) == 0x000150, "Member 'LibraryMenu_Theater_C_CreateItemDetail::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'LibraryMenu_Theater_C_CreateItemDetail::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000178, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreateItemDetail, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0001A0, "Member 'LibraryMenu_Theater_C_CreateItemDetail::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreteGameContentId
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_Theater_C_CreteGameContentId final
{
public:
	class FName                                   LevelName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameContentId;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_CreteGameContentId) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_CreteGameContentId");
static_assert(sizeof(LibraryMenu_Theater_C_CreteGameContentId) == 0x000048, "Wrong size on LibraryMenu_Theater_C_CreteGameContentId");
static_assert(offsetof(LibraryMenu_Theater_C_CreteGameContentId, LevelName) == 0x000000, "Member 'LibraryMenu_Theater_C_CreteGameContentId::LevelName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreteGameContentId, GameContentId) == 0x000008, "Member 'LibraryMenu_Theater_C_CreteGameContentId::GameContentId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreteGameContentId, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'LibraryMenu_Theater_C_CreteGameContentId::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreteGameContentId, CallFunc_LeftChop_ReturnValue) == 0x000020, "Member 'LibraryMenu_Theater_C_CreteGameContentId::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreteGameContentId, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'LibraryMenu_Theater_C_CreteGameContentId::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CreteGameContentId, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'LibraryMenu_Theater_C_CreteGameContentId::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveLibSaveData
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_Theater_C_SaveLibSaveData final
{
public:
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6704[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_SaveLibSaveData) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_SaveLibSaveData");
static_assert(sizeof(LibraryMenu_Theater_C_SaveLibSaveData) == 0x000028, "Wrong size on LibraryMenu_Theater_C_SaveLibSaveData");
static_assert(offsetof(LibraryMenu_Theater_C_SaveLibSaveData, CallFunc_GetPlayerId_ReturnValue) == 0x000000, "Member 'LibraryMenu_Theater_C_SaveLibSaveData::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_SaveLibSaveData, CallFunc_GetLibrarySaveManager_IsValid) == 0x000010, "Member 'LibraryMenu_Theater_C_SaveLibSaveData::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_SaveLibSaveData, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000018, "Member 'LibraryMenu_Theater_C_SaveLibSaveData::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_SaveLibSaveData, CallFunc_SaveLibraryData_ReturnValue) == 0x000020, "Member 'LibraryMenu_Theater_C_SaveLibSaveData::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Load Lib Save Data
// 0x0240 (0x0240 - 0x0000)
struct LibraryMenu_Theater_C_Load_Lib_Save_Data final
{
public:
	class USBLibrarySaveManager*                  LibSaveData;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6705[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0028(0x0218)()
};
static_assert(alignof(LibraryMenu_Theater_C_Load_Lib_Save_Data) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_Load_Lib_Save_Data");
static_assert(sizeof(LibraryMenu_Theater_C_Load_Lib_Save_Data) == 0x000240, "Wrong size on LibraryMenu_Theater_C_Load_Lib_Save_Data");
static_assert(offsetof(LibraryMenu_Theater_C_Load_Lib_Save_Data, LibSaveData) == 0x000000, "Member 'LibraryMenu_Theater_C_Load_Lib_Save_Data::LibSaveData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Load_Lib_Save_Data, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'LibraryMenu_Theater_C_Load_Lib_Save_Data::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Load_Lib_Save_Data, CallFunc_GetLibrarySaveManager_IsValid) == 0x000018, "Member 'LibraryMenu_Theater_C_Load_Lib_Save_Data::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Load_Lib_Save_Data, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000020, "Member 'LibraryMenu_Theater_C_Load_Lib_Save_Data::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Load_Lib_Save_Data, CallFunc_LoadLibraryData_ReturnValue) == 0x000028, "Member 'LibraryMenu_Theater_C_Load_Lib_Save_Data::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckViewedDemoId
// 0x0014 (0x0014 - 0x0000)
struct LibraryMenu_Theater_C_CheckViewedDemoId final
{
public:
	class FName                                   DemoId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOk;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkipFlag_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6706[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_CheckViewedDemoId) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_CheckViewedDemoId");
static_assert(sizeof(LibraryMenu_Theater_C_CheckViewedDemoId) == 0x000014, "Wrong size on LibraryMenu_Theater_C_CheckViewedDemoId");
static_assert(offsetof(LibraryMenu_Theater_C_CheckViewedDemoId, DemoId) == 0x000000, "Member 'LibraryMenu_Theater_C_CheckViewedDemoId::DemoId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckViewedDemoId, IsOk) == 0x000008, "Member 'LibraryMenu_Theater_C_CheckViewedDemoId::IsOk' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckViewedDemoId, CallFunc_GetSkipFlag_ReturnValue) == 0x000009, "Member 'LibraryMenu_Theater_C_CheckViewedDemoId::CallFunc_GetSkipFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckViewedDemoId, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'LibraryMenu_Theater_C_CheckViewedDemoId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckViewedDemoId, CallFunc_Array_Find_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Theater_C_CheckViewedDemoId::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_CheckViewedDemoId, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'LibraryMenu_Theater_C_CheckViewedDemoId::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.AddDemoAllList
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Theater_C_AddDemoAllList final
{
public:
	class FName                                   DemoName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_AddDemoAllList) == 0x000004, "Wrong alignment on LibraryMenu_Theater_C_AddDemoAllList");
static_assert(sizeof(LibraryMenu_Theater_C_AddDemoAllList) == 0x000010, "Wrong size on LibraryMenu_Theater_C_AddDemoAllList");
static_assert(offsetof(LibraryMenu_Theater_C_AddDemoAllList, DemoName) == 0x000000, "Member 'LibraryMenu_Theater_C_AddDemoAllList::DemoName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_AddDemoAllList, CallFunc_Array_AddUnique_ReturnValue) == 0x000008, "Member 'LibraryMenu_Theater_C_AddDemoAllList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_AddDemoAllList, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Theater_C_AddDemoAllList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadCategory
// 0x00A8 (0x00A8 - 0x0000)
struct LibraryMenu_Theater_C_IsReadCategory final
{
public:
	int32                                         CategoryId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_CategoryId;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           L_CheckList;                                       // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           L_ReadAllList;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           L_ReadList;                                        // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6707[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6708[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExtractCategory_Ret;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6709[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_670A[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExtractCategory_Ret_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_670B[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_670C[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadDemoIdList_ReturnValue;            // 0x0098(0x0010)(ReferenceParm)
};
static_assert(alignof(LibraryMenu_Theater_C_IsReadCategory) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_IsReadCategory");
static_assert(sizeof(LibraryMenu_Theater_C_IsReadCategory) == 0x0000A8, "Wrong size on LibraryMenu_Theater_C_IsReadCategory");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CategoryId) == 0x000000, "Member 'LibraryMenu_Theater_C_IsReadCategory::CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, L_CategoryId) == 0x000004, "Member 'LibraryMenu_Theater_C_IsReadCategory::L_CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, L_CheckList) == 0x000008, "Member 'LibraryMenu_Theater_C_IsReadCategory::L_CheckList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, L_ReadAllList) == 0x000018, "Member 'LibraryMenu_Theater_C_IsReadCategory::L_ReadAllList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, L_ReadList) == 0x000028, "Member 'LibraryMenu_Theater_C_IsReadCategory::L_ReadList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'LibraryMenu_Theater_C_IsReadCategory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, Temp_int_Array_Index_Variable) == 0x000040, "Member 'LibraryMenu_Theater_C_IsReadCategory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Map_Find_Value) == 0x000044, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_IsReadNameList_ReturnValue) == 0x000049, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Not_PreBool_ReturnValue) == 0x00004A, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, Temp_int_Loop_Counter_Variable_1) == 0x00004C, "Member 'LibraryMenu_Theater_C_IsReadCategory::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, Temp_int_Array_Index_Variable_1) == 0x00005C, "Member 'LibraryMenu_Theater_C_IsReadCategory::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Array_Get_Item) == 0x000060, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_ExtractCategory_Ret) == 0x00006C, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_ExtractCategory_Ret' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000078, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Array_Add_ReturnValue_1) == 0x00007C, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_ExtractCategory_Ret_1) == 0x000080, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_ExtractCategory_Ret_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Array_Length_ReturnValue_1) == 0x000084, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Less_IntInt_ReturnValue_1) == 0x000088, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_Load_Lib_Save_Data_LibSaveData) == 0x000090, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_Load_Lib_Save_Data_LibSaveData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadCategory, CallFunc_GetReadDemoIdList_ReturnValue) == 0x000098, "Member 'LibraryMenu_Theater_C_IsReadCategory::CallFunc_GetReadDemoIdList_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadAllCategory
// 0x0068 (0x0068 - 0x0000)
struct LibraryMenu_Theater_C_IsReadAllCategory final
{
public:
	int32                                         L_MapId;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_670D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Mid_ReturnValue;                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Mid_ReturnValue_1;                        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_670E[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_670F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadDemoIdList_ReturnValue;            // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_IsReadAllCategory) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_IsReadAllCategory");
static_assert(sizeof(LibraryMenu_Theater_C_IsReadAllCategory) == 0x000068, "Wrong size on LibraryMenu_Theater_C_IsReadAllCategory");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, L_MapId) == 0x000000, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::L_MapId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_Conv_NameToString_ReturnValue) == 0x000008, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_Mid_ReturnValue) == 0x000018, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_Mid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_Mid_ReturnValue_1) == 0x000028, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_Mid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_Conv_StringToInt_ReturnValue) == 0x000038, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, K2Node_SwitchString_CmpSuccess) == 0x00003C, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_Load_Lib_Save_Data_LibSaveData) == 0x000048, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_Load_Lib_Save_Data_LibSaveData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_GetReadDemoIdList_ReturnValue) == 0x000050, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_GetReadDemoIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_IsReadAllCategory, CallFunc_IsReadNameList_ReturnValue) == 0x000060, "Member 'LibraryMenu_Theater_C_IsReadAllCategory::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExtractCategory
// 0x00E8 (0x00E8 - 0x0000)
struct LibraryMenu_Theater_C_ExtractCategory final
{
public:
	class FName                                   Category;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6710[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 L_Category;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         L_Num;                                             // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Id;                                              // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Mid_ReturnValue;                          // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6711[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Mid_ReturnValue_1;                        // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_4;                            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_5;                            // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBDemoType                                   Temp_byte_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6712[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6713[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_ExtractCategory) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_ExtractCategory");
static_assert(sizeof(LibraryMenu_Theater_C_ExtractCategory) == 0x0000E8, "Wrong size on LibraryMenu_Theater_C_ExtractCategory");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Category) == 0x000000, "Member 'LibraryMenu_Theater_C_ExtractCategory::Category' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, ID) == 0x000008, "Member 'LibraryMenu_Theater_C_ExtractCategory::ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Ret) == 0x00000C, "Member 'LibraryMenu_Theater_C_ExtractCategory::Ret' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, L_Category) == 0x000010, "Member 'LibraryMenu_Theater_C_ExtractCategory::L_Category' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, L_Num) == 0x000020, "Member 'LibraryMenu_Theater_C_ExtractCategory::L_Num' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, L_Id) == 0x000024, "Member 'LibraryMenu_Theater_C_ExtractCategory::L_Id' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Temp_string_Variable) == 0x000028, "Member 'LibraryMenu_Theater_C_ExtractCategory::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_Conv_NameToString_ReturnValue) == 0x000038, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Temp_string_Variable_1) == 0x000048, "Member 'LibraryMenu_Theater_C_ExtractCategory::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_Mid_ReturnValue) == 0x000058, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_Mid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_Conv_StringToInt_ReturnValue) == 0x000068, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_Mid_ReturnValue_1) == 0x000070, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_Mid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Temp_string_Variable_2) == 0x000080, "Member 'LibraryMenu_Theater_C_ExtractCategory::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Temp_string_Variable_3) == 0x000090, "Member 'LibraryMenu_Theater_C_ExtractCategory::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Temp_string_Variable_4) == 0x0000A0, "Member 'LibraryMenu_Theater_C_ExtractCategory::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Temp_string_Variable_5) == 0x0000B0, "Member 'LibraryMenu_Theater_C_ExtractCategory::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, Temp_byte_Variable) == 0x0000C0, "Member 'LibraryMenu_Theater_C_ExtractCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_Percent_IntInt_ReturnValue) == 0x0000C4, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000C9, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000CA, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_BooleanAND_ReturnValue) == 0x0000CB, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_GetValidValue_ReturnValue) == 0x0000CC, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_Greater_IntInt_ReturnValue) == 0x0000CD, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, K2Node_Select_Default) == 0x0000D0, "Member 'LibraryMenu_Theater_C_ExtractCategory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_ExtractCategory, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0000E0, "Member 'LibraryMenu_Theater_C_ExtractCategory::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.InitExclamationIcon
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_Theater_C_InitExclamationIcon final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6714[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6715[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadDemoIdList_ReturnValue;            // 0x0030(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_InitExclamationIcon) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_InitExclamationIcon");
static_assert(sizeof(LibraryMenu_Theater_C_InitExclamationIcon) == 0x000048, "Wrong size on LibraryMenu_Theater_C_InitExclamationIcon");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, Temp_int_Variable) == 0x000000, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_Load_Lib_Save_Data_LibSaveData) == 0x000028, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_Load_Lib_Save_Data_LibSaveData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_GetReadDemoIdList_ReturnValue) == 0x000030, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_GetReadDemoIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_InitExclamationIcon, CallFunc_IsReadNameList_ReturnValue) == 0x000040, "Member 'LibraryMenu_Theater_C_InitExclamationIcon::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Check Read Demo Id List
// 0x00F8 (0x00F8 - 0x0000)
struct LibraryMenu_Theater_C_Check_Read_Demo_Id_List final
{
public:
	TArray<class FName>                           In;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           L_RemoveLists;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6716[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6717[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDemoData                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x0090)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6718[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List) == 0x000008, "Wrong alignment on LibraryMenu_Theater_C_Check_Read_Demo_Id_List");
static_assert(sizeof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List) == 0x0000F8, "Wrong size on LibraryMenu_Theater_C_Check_Read_Demo_Id_List");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, In) == 0x000000, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::In' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, L_RemoveLists) == 0x000010, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::L_RemoveLists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, Temp_int_Array_Index_Variable) == 0x000028, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, Temp_int_Loop_Counter_Variable_1) == 0x00002C, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Array_Get_Item) == 0x000040, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Array_RemoveItem_ReturnValue) == 0x000050, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Array_AddUnique_ReturnValue) == 0x0000EC, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Array_Length_ReturnValue_1) == 0x0000F0, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_Check_Read_Demo_Id_List, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F4, "Member 'LibraryMenu_Theater_C_Check_Read_Demo_Id_List::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.TermRequest
// 0x0006 (0x0006 - 0x0000)
struct LibraryMenu_Theater_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermReason                            Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Theater_C_TermRequest) == 0x000001, "Wrong alignment on LibraryMenu_Theater_C_TermRequest");
static_assert(sizeof(LibraryMenu_Theater_C_TermRequest) == 0x000006, "Wrong size on LibraryMenu_Theater_C_TermRequest");
static_assert(offsetof(LibraryMenu_Theater_C_TermRequest, InReason) == 0x000000, "Member 'LibraryMenu_Theater_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_TermRequest, ReturnValue) == 0x000001, "Member 'LibraryMenu_Theater_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_TermRequest, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_Theater_C_TermRequest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_TermRequest, Temp_byte_Variable_1) == 0x000003, "Member 'LibraryMenu_Theater_C_TermRequest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_TermRequest, Temp_byte_Variable_2) == 0x000004, "Member 'LibraryMenu_Theater_C_TermRequest::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Theater_C_TermRequest, K2Node_Select_Default) == 0x000005, "Member 'LibraryMenu_Theater_C_TermRequest::K2Node_Select_Default' has a wrong offset!");

}

