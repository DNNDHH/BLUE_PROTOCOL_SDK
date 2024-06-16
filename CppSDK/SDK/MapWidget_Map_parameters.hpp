#pragma once

 

// Package: MapWidget_Map

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_Map.MapWidget_Map_C.OnChangeToRegionMap__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature final
{
public:
	class FString                                 InRegionMapId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature) == 0x000010, "Wrong size on MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature, InRegionMapId) == 0x000000, "Member 'MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature::InRegionMapId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnEndSavePinInfo__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature final
{
public:
	bool                                          IsResultSuccess;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapErrorCode                               ErrorCode;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature) == 0x000001, "Wrong alignment on MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature) == 0x000002, "Wrong size on MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature, IsResultSuccess) == 0x000000, "Member 'MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature::IsResultSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature, ErrorCode) == 0x000001, "Member 'MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature::ErrorCode' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnPinnedPinClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature) == 0x000008, "Wrong size on MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature, InPinnedPin) == 0x000000, "Member 'MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature::InPinnedPin' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnShowErrorMessage__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_Map_C_OnShowErrorMessage__DelegateSignature final
{
public:
	int32                                         InMessageTextId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnShowErrorMessage__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_Map_C_OnShowErrorMessage__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnShowErrorMessage__DelegateSignature) == 0x000004, "Wrong size on MapWidget_Map_C_OnShowErrorMessage__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnShowErrorMessage__DelegateSignature, InMessageTextId) == 0x000000, "Member 'MapWidget_Map_C_OnShowErrorMessage__DelegateSignature::InMessageTextId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnSetMapScrollFunctionOnOff__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature final
{
public:
	bool                                          InIsScrollFunctionOn;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              InScrollHVLength;                                  // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature) == 0x00000C, "Wrong size on MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature, InIsScrollFunctionOn) == 0x000000, "Member 'MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature::InIsScrollFunctionOn' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature, InScrollHVLength) == 0x000004, "Member 'MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature::InScrollHVLength' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnUpdatePlayerIconPosition__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature final
{
public:
	struct FVector2D                              MapPosition;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ViewScale;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature) == 0x00000C, "Wrong size on MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature, MapPosition) == 0x000000, "Member 'MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature::MapPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature, ViewScale) == 0x000008, "Member 'MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature::ViewScale' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnInitPlayerIcon__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature final
{
public:
	struct FVector2D                              PlayerPosition;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MapSize;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature) == 0x000010, "Wrong size on MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature, PlayerPosition) == 0x000000, "Member 'MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature::PlayerPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature, MapSize) == 0x000008, "Member 'MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature::MapSize' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnQuestDetailForMapChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature final
{
public:
	bool                                          bIsOpen;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature) == 0x000001, "Wrong alignment on MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature");
static_assert(sizeof(MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature) == 0x000001, "Wrong size on MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature");
static_assert(offsetof(MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature, bIsOpen) == 0x000000, "Member 'MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature::bIsOpen' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ExecuteUbergraph_MapWidget_Map
// 0x0780 (0x0780 - 0x0000)
struct MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMapWidget_MapPinnedPin_C* InPinnedPin)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result, ESBMapErrorCode ErrorCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMapWidget_MapPinnedPin_C* InPinnedPin)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ASBInterruptQuestInstance*        K2Node_CustomEvent_InInstance_1;                   // 0x0048(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A4[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBInterruptQuestManager*               CallFunc_GetInterruptQuestManager_ReturnValue;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ASBInterruptQuestInstance*        K2Node_CustomEvent_InInstance;                     // 0x0068(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A6[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ASBInterruptQuestInstance* InInstance)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14A7[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBInterruptQuestManager*               CallFunc_GetInterruptQuestManager_ReturnValue_1;   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A8[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x00BC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapErrorCode                               K2Node_CustomEvent_ErrorCode;                      // 0x00BD(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A9[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_CustomEvent_InPinnedPin_1;                  // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14AA[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_CustomEvent_InPinnedPin;                    // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14AB[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestDetailForMap_C*                   CallFunc_Create_ReturnValue;                       // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14AC[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_CustomEvent_Target_1;                       // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_MapPinnedPin_C*              K2Node_CustomEvent_Target;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14AD[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14AE[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSavingMapPinInfo_IsSavingMapPinInfo;    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14AF[0x5];                                     // 0x013B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdminComponent*                CallFunc_GetSBPlayerAdminComponent_ReturnValue;    // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B0[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationX;    // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationY;    // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePositionScaledByDPI_ReturnValue;  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B1[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcWorldPosition_WorldLocation;          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdminComponent*                CallFunc_GetSBPlayerAdminComponent_ReturnValue_1;  // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAdminFuncUnlocked_ReturnValue;          // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B2[0x1];                                     // 0x018B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x018C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14B3[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWorldMapFlag_IsWorldMap;                // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x01AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B4[0x2];                                     // 0x01AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWarpComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestWarp_ReturnValue;                  // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B5[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 K2Node_CustomEvent_InMapBGConfig;                  // 0x01D0(0x0078)()
	class FString                                 K2Node_CustomEvent_InMapId;                        // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ASBInterruptQuestInstance* InInstance)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B6[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0280(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B7[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B8[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14B9[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14BA[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_6;            // 0x0344(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0354(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x035C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMapWidget_Cloud_C*>             K2Node_MakeArray_Array;                            // 0x0370(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UMapWidget_Cloud_C*                     CallFunc_Array_Get_Item;                           // 0x0380(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14BB[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14BC[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0398(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14BD[0x3];                                     // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_7;            // 0x03A4(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x03B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14BE[0x3];                                     // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x03C0(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14BF[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_GetLoadData_LoadData;                     // 0x0440(0x0078)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x04BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x04C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x04C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0x04CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x04D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x04D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_5;          // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C0[0x4];                                     // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_GetLoadData_LoadData_1;                   // 0x04E0(0x0078)()
	struct FSBMapBGConfigTableRow                 CallFunc_GetLoadData_LoadData_2;                   // 0x0558(0x0078)()
	float                                         CallFunc_BreakVector2D_X_4;                        // 0x05D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_4;                        // 0x05D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_6;          // 0x05D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_7;          // 0x05DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x05E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x05E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x05E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x05EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_GetLoadData_LoadData_3;                   // 0x05F8(0x0078)()
	bool                                          CallFunc_GetMapBGConfigRowName_OutIsValid;         // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14C1[0x7];                                     // 0x0671(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapBGConfigRowName_OutRowName;         // 0x0678(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_5;                        // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_5;                        // 0x068C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0691(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0692(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0693(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14C2[0x4];                                     // 0x0694(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_GetLoadData_LoadData_4;                   // 0x0698(0x0078)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0710(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14C3[0x7];                                     // 0x0711(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0718(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_CreateDialog_OutputPin;                   // 0x0728(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14C4[0x3];                                     // 0x0731(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InQuestId;                      // 0x0734(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_FinishStatus                     K2Node_CustomEvent_FinishStatus;                   // 0x0740(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C5[0x3];                                     // 0x0741(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x0744(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0748(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14C6[0x7];                                     // 0x0749(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0750(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapBodySize_ReturnValue;               // 0x0758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapBodySize_ReturnValue_1;             // 0x0760(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_6;                        // 0x0768(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_6;                        // 0x076C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_8;          // 0x0770(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0774(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14C7[0x3];                                     // 0x0779(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x077C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map) == 0x000008, "Wrong alignment on MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map");
static_assert(sizeof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map) == 0x000780, "Wrong size on MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, EntryPoint) == 0x000000, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetGameInstance_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_InInstance_1) == 0x000048, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_InInstance_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_AsSBGame_Instance) == 0x000050, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetInterruptQuestManager_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetInterruptQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_InInstance) == 0x000068, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_InInstance' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetGameInstance_ReturnValue_1) == 0x000078, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x000080, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate_3) == 0x00008C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetInterruptQuestManager_ReturnValue_1) == 0x0000A0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetInterruptQuestManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000AC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_Result_1) == 0x0000BC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_ErrorCode) == 0x0000BD, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_InPinnedPin_1) == 0x0000C0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_InPinnedPin_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_2) == 0x0000D0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_3) == 0x0000D1, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_InPinnedPin) == 0x0000D8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_InPinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMapIconZOrder_ReturnValue) == 0x0000E0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Create_ReturnValue) == 0x0000E8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_Target_1) == 0x0000F8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_Target_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_Target) == 0x000100, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, Temp_float_Variable) == 0x000108, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetPlayerController_ReturnValue) == 0x000110, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000118, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_bSuccess_2) == 0x000120, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetPlayerController_ReturnValue_1) == 0x000128, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000130, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_bSuccess_3) == 0x000138, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsSavingMapPinInfo_IsSavingMapPinInfo) == 0x000139, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsSavingMapPinInfo_IsSavingMapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Not_PreBool_ReturnValue) == 0x00013A, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetPlayerController_ReturnValue_2) == 0x000140, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetSBPlayerAdminComponent_ReturnValue) == 0x000148, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetSBPlayerAdminComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_4) == 0x000150, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_5) == 0x000151, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMousePositionScaledByDPI_LocationX) == 0x000154, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMousePositionScaledByDPI_LocationX' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMousePositionScaledByDPI_LocationY) == 0x000158, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMousePositionScaledByDPI_LocationY' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMousePositionScaledByDPI_ReturnValue) == 0x00015C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMousePositionScaledByDPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000160, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_MakeVector2D_ReturnValue) == 0x000170, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_CalcWorldPosition_WorldLocation) == 0x000178, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_CalcWorldPosition_WorldLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetSBPlayerAdminComponent_ReturnValue_1) == 0x000180, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetSBPlayerAdminComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_6) == 0x000188, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsAdminFuncUnlocked_ReturnValue) == 0x000189, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsAdminFuncUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, Temp_bool_Variable) == 0x00018A, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, Temp_struct_Variable) == 0x00018C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_ConvertParentMapId_ReturnValue) == 0x000198, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001A8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsWorldMapFlag_IsWorldMap) == 0x0001A9, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsWorldMapFlag_IsWorldMap' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001AA, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_Result) == 0x0001AB, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, Temp_bool_Variable_1) == 0x0001AC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001AD, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001B0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetComponentByClass_ReturnValue) == 0x0001B8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Conv_StringToName_ReturnValue) == 0x0001C0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_RequestWarp_ReturnValue) == 0x0001C8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_RequestWarp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_Event_IsDesignTime) == 0x0001C9, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_InMapBGConfig) == 0x0001D0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_InMapBGConfig' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_InMapId) == 0x000248, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Create_ReturnValue_1) == 0x000258, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate_5) == 0x000260, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Not_PreBool_ReturnValue_2) == 0x000270, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, Temp_object_Variable) == 0x000278, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_MakeStruct_SlateBrush) == 0x000280, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_7) == 0x000308, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_Loaded) == 0x000310, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_AsTexture_2D) == 0x000318, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_DynamicCast_bSuccess_4) == 0x000320, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Blueprint_GetSizeX_ReturnValue) == 0x000324, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Blueprint_GetSizeX_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000328, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000330, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_MakeLiteralByte_ReturnValue) == 0x000338, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_8) == 0x000339, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_X) == 0x00033C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_Y) == 0x000340, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate_6) == 0x000344, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000354, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_Select_Default) == 0x00035C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_X_1) == 0x000364, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_Y_1) == 0x000368, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00036C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_MakeArray_Array) == 0x000370, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Array_Get_Item) == 0x000380, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_9) == 0x000388, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Array_Length_ReturnValue) == 0x00038C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Less_IntInt_ReturnValue) == 0x000390, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000398, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_10) == 0x0003A0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CreateDelegate_OutputDelegate_7) == 0x0003A4, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetPosition_ReturnValue) == 0x0003B4, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0003BC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x0003C0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x000438, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetLoadData_LoadData) == 0x000440, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetLoadData_LoadData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0004B8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0004BC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_3) == 0x0004C0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_X_2) == 0x0004C4, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_Y_2) == 0x0004C8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_4) == 0x0004CC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_X_3) == 0x0004D0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_Y_3) == 0x0004D4, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_5) == 0x0004D8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetLoadData_LoadData_1) == 0x0004E0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetLoadData_LoadData_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetLoadData_LoadData_2) == 0x000558, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetLoadData_LoadData_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_X_4) == 0x0005D0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_X_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_Y_4) == 0x0005D4, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_Y_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_6) == 0x0005D8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_7) == 0x0005DC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_FTrunc_ReturnValue) == 0x0005E0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_FTrunc_ReturnValue_1) == 0x0005E4, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0005E8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0005EC, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_MakeVector2D_ReturnValue_1) == 0x0005F0, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetLoadData_LoadData_3) == 0x0005F8, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetLoadData_LoadData_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMapBGConfigRowName_OutIsValid) == 0x000670, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMapBGConfigRowName_OutIsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMapBGConfigRowName_OutRowName) == 0x000678, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMapBGConfigRowName_OutRowName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_X_5) == 0x000688, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_X_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_Y_5) == 0x00068C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_Y_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Contains_ReturnValue) == 0x000690, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000691, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000692, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BooleanAND_ReturnValue) == 0x000693, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetLoadData_LoadData_4) == 0x000698, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetLoadData_LoadData_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Not_PreBool_ReturnValue_3) == 0x000710, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Conv_NameToString_ReturnValue) == 0x000718, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_CreateDialog_OutputPin) == 0x000728, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_CreateDialog_OutputPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_IsValid_ReturnValue_11) == 0x000730, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_InQuestId) == 0x000734, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_InQuestId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetSBPlayerController_ReturnValue) == 0x000738, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_FinishStatus) == 0x000740, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_FinishStatus' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_CustomEvent_QuestIndex) == 0x000744, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetUIManager_IsValid) == 0x000748, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetUIManager_ReturnValue) == 0x000750, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMapBodySize_ReturnValue) == 0x000758, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMapBodySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_GetMapBodySize_ReturnValue_1) == 0x000760, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_GetMapBodySize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_X_6) == 0x000768, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_X_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_BreakVector2D_Y_6) == 0x00076C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_BreakVector2D_Y_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Divide_FloatFloat_ReturnValue_8) == 0x000770, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Divide_FloatFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000774, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, CallFunc_Less_FloatFloat_ReturnValue) == 0x000778, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map, K2Node_Select_Default_1) == 0x00077C, "Member 'MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map::K2Node_Select_Default_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnFinishMenu_1
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_OnFinishMenu_1 final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnFinishMenu_1) == 0x000004, "Wrong alignment on MapWidget_Map_C_OnFinishMenu_1");
static_assert(sizeof(MapWidget_Map_C_OnFinishMenu_1) == 0x000008, "Wrong size on MapWidget_Map_C_OnFinishMenu_1");
static_assert(offsetof(MapWidget_Map_C_OnFinishMenu_1, FinishStatus) == 0x000000, "Member 'MapWidget_Map_C_OnFinishMenu_1::FinishStatus' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnFinishMenu_1, QuestIndex) == 0x000004, "Member 'MapWidget_Map_C_OnFinishMenu_1::QuestIndex' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OpenQuestMenu
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_Map_C_OpenQuestMenu final
{
public:
	int32                                         InQuestId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OpenQuestMenu) == 0x000004, "Wrong alignment on MapWidget_Map_C_OpenQuestMenu");
static_assert(sizeof(MapWidget_Map_C_OpenQuestMenu) == 0x000004, "Wrong size on MapWidget_Map_C_OpenQuestMenu");
static_assert(offsetof(MapWidget_Map_C_OpenQuestMenu, InQuestId) == 0x000000, "Member 'MapWidget_Map_C_OpenQuestMenu::InQuestId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.InitMapBG
// 0x0088 (0x0088 - 0x0000)
struct MapWidget_Map_C_InitMapBG final
{
public:
	struct FSBMapBGConfigTableRow                 InMapBGConfig;                                     // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InMapId;                                           // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_InitMapBG) == 0x000008, "Wrong alignment on MapWidget_Map_C_InitMapBG");
static_assert(sizeof(MapWidget_Map_C_InitMapBG) == 0x000088, "Wrong size on MapWidget_Map_C_InitMapBG");
static_assert(offsetof(MapWidget_Map_C_InitMapBG, InMapBGConfig) == 0x000000, "Member 'MapWidget_Map_C_InitMapBG::InMapBGConfig' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitMapBG, InMapId) == 0x000078, "Member 'MapWidget_Map_C_InitMapBG::InMapId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_PreConstruct) == 0x000001, "Wrong alignment on MapWidget_Map_C_PreConstruct");
static_assert(sizeof(MapWidget_Map_C_PreConstruct) == 0x000001, "Wrong size on MapWidget_Map_C_PreConstruct");
static_assert(offsetof(MapWidget_Map_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MapWidget_Map_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnEndYesNoDialog
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_OnEndYesNoDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnEndYesNoDialog) == 0x000001, "Wrong alignment on MapWidget_Map_C_OnEndYesNoDialog");
static_assert(sizeof(MapWidget_Map_C_OnEndYesNoDialog) == 0x000001, "Wrong size on MapWidget_Map_C_OnEndYesNoDialog");
static_assert(offsetof(MapWidget_Map_C_OnEndYesNoDialog, Result) == 0x000000, "Member 'MapWidget_Map_C_OnEndYesNoDialog::Result' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UnbindPin
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_UnbindPin final
{
public:
	class UMapWidget_MapPinnedPin_C*              Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_UnbindPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_UnbindPin");
static_assert(sizeof(MapWidget_Map_C_UnbindPin) == 0x000008, "Wrong size on MapWidget_Map_C_UnbindPin");
static_assert(offsetof(MapWidget_Map_C_UnbindPin, Target) == 0x000000, "Member 'MapWidget_Map_C_UnbindPin::Target' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.BindPin
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_BindPin final
{
public:
	class UMapWidget_MapPinnedPin_C*              Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_BindPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_BindPin");
static_assert(sizeof(MapWidget_Map_C_BindPin) == 0x000008, "Wrong size on MapWidget_Map_C_BindPin");
static_assert(offsetof(MapWidget_Map_C_BindPin, Target) == 0x000000, "Member 'MapWidget_Map_C_BindPin::Target' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnPinBtnClicked_����
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_OnPinBtnClicked_____ final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnPinBtnClicked_____) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnPinBtnClicked_____");
static_assert(sizeof(MapWidget_Map_C_OnPinBtnClicked_____) == 0x000008, "Wrong size on MapWidget_Map_C_OnPinBtnClicked_____");
static_assert(offsetof(MapWidget_Map_C_OnPinBtnClicked_____, InPinnedPin) == 0x000000, "Member 'MapWidget_Map_C_OnPinBtnClicked_____::InPinnedPin' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnTextCommitted_����
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_OnTextCommitted_____ final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnTextCommitted_____) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnTextCommitted_____");
static_assert(sizeof(MapWidget_Map_C_OnTextCommitted_____) == 0x000008, "Wrong size on MapWidget_Map_C_OnTextCommitted_____");
static_assert(offsetof(MapWidget_Map_C_OnTextCommitted_____, InPinnedPin) == 0x000000, "Member 'MapWidget_Map_C_OnTextCommitted_____::InPinnedPin' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnSaveMapPinInfosDelegate_����
// 0x0002 (0x0002 - 0x0000)
struct MapWidget_Map_C_OnSaveMapPinInfosDelegate_____ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapErrorCode                               ErrorCode;                                         // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnSaveMapPinInfosDelegate_____) == 0x000001, "Wrong alignment on MapWidget_Map_C_OnSaveMapPinInfosDelegate_____");
static_assert(sizeof(MapWidget_Map_C_OnSaveMapPinInfosDelegate_____) == 0x000002, "Wrong size on MapWidget_Map_C_OnSaveMapPinInfosDelegate_____");
static_assert(offsetof(MapWidget_Map_C_OnSaveMapPinInfosDelegate_____, Result) == 0x000000, "Member 'MapWidget_Map_C_OnSaveMapPinInfosDelegate_____::Result' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnSaveMapPinInfosDelegate_____, ErrorCode) == 0x000001, "Member 'MapWidget_Map_C_OnSaveMapPinInfosDelegate_____::ErrorCode' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptArea
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_RemoveInterruptArea final
{
public:
	const class ASBInterruptQuestInstance*        InInstance;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_RemoveInterruptArea) == 0x000008, "Wrong alignment on MapWidget_Map_C_RemoveInterruptArea");
static_assert(sizeof(MapWidget_Map_C_RemoveInterruptArea) == 0x000008, "Wrong size on MapWidget_Map_C_RemoveInterruptArea");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptArea, InInstance) == 0x000000, "Member 'MapWidget_Map_C_RemoveInterruptArea::InInstance' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.AddInterruptArea
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_AddInterruptArea final
{
public:
	const class ASBInterruptQuestInstance*        InInstance;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_AddInterruptArea) == 0x000008, "Wrong alignment on MapWidget_Map_C_AddInterruptArea");
static_assert(sizeof(MapWidget_Map_C_AddInterruptArea) == 0x000008, "Wrong size on MapWidget_Map_C_AddInterruptArea");
static_assert(offsetof(MapWidget_Map_C_AddInterruptArea, InInstance) == 0x000000, "Member 'MapWidget_Map_C_AddInterruptArea::InInstance' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8");
static_assert(sizeof(MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8) == 0x000008, "Wrong size on MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8");
static_assert(offsetof(MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8, Loaded) == 0x000000, "Member 'MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8::Loaded' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.Initialize
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_Map_C_Initialize final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Subtract_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C9[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14CA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue_1;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14CB[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue_2;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_3;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue_1;         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue_2;         // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14CC[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDefaultPartyMaxSize_ReturnValue;       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_Initialize) == 0x000008, "Wrong alignment on MapWidget_Map_C_Initialize");
static_assert(sizeof(MapWidget_Map_C_Initialize) == 0x000040, "Wrong size on MapWidget_Map_C_Initialize");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_Initialize::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_Subtract_ByteByte_ReturnValue) == 0x000001, "Member 'MapWidget_Map_C_Initialize::CallFunc_Subtract_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_Initialize::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_Initialize::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_Initialize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_Initialize::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x00001C, "Member 'MapWidget_Map_C_Initialize::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_GetMapIconZOrder_ReturnValue_1) == 0x000020, "Member 'MapWidget_Map_C_Initialize::CallFunc_GetMapIconZOrder_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000024, "Member 'MapWidget_Map_C_Initialize::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_Multiply_IntInt_ReturnValue_2) == 0x000028, "Member 'MapWidget_Map_C_Initialize::CallFunc_Multiply_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_GetMapIconZOrder_ReturnValue_2) == 0x00002C, "Member 'MapWidget_Map_C_Initialize::CallFunc_GetMapIconZOrder_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_Multiply_IntInt_ReturnValue_3) == 0x000030, "Member 'MapWidget_Map_C_Initialize::CallFunc_Multiply_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_setZOrder_CheckLog_ReturnValue_1) == 0x000034, "Member 'MapWidget_Map_C_Initialize::CallFunc_setZOrder_CheckLog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_setZOrder_CheckLog_ReturnValue_2) == 0x000035, "Member 'MapWidget_Map_C_Initialize::CallFunc_setZOrder_CheckLog_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Initialize, CallFunc_GetDefaultPartyMaxSize_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_Initialize::CallFunc_GetDefaultPartyMaxSize_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.Terminate
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_Terminate final
{
public:
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14CD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_Terminate) == 0x000008, "Wrong alignment on MapWidget_Map_C_Terminate");
static_assert(sizeof(MapWidget_Map_C_Terminate) == 0x000010, "Wrong size on MapWidget_Map_C_Terminate");
static_assert(offsetof(MapWidget_Map_C_Terminate, CallFunc_GetUIManager_IsValid) == 0x000000, "Member 'MapWidget_Map_C_Terminate::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Terminate, CallFunc_GetUIManager_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_Terminate::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetupIcon
// 0x0007 (0x0007 - 0x0000)
struct MapWidget_Map_C_SetupIcon final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPublicDungeon_ReturnValue;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetupIcon) == 0x000001, "Wrong alignment on MapWidget_Map_C_SetupIcon");
static_assert(sizeof(MapWidget_Map_C_SetupIcon) == 0x000007, "Wrong size on MapWidget_Map_C_SetupIcon");
static_assert(offsetof(MapWidget_Map_C_SetupIcon, Temp_bool_Variable) == 0x000000, "Member 'MapWidget_Map_C_SetupIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupIcon, Temp_byte_Variable) == 0x000001, "Member 'MapWidget_Map_C_SetupIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupIcon, Temp_byte_Variable_1) == 0x000002, "Member 'MapWidget_Map_C_SetupIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupIcon, CallFunc_IsPublicDungeon_ReturnValue) == 0x000003, "Member 'MapWidget_Map_C_SetupIcon::CallFunc_IsPublicDungeon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_SetupIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupIcon, K2Node_Select_Default) == 0x000005, "Member 'MapWidget_Map_C_SetupIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupIcon, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'MapWidget_Map_C_SetupIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetupTimerEvent
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_Map_C_SetupTimerEvent final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_SetupTimerEvent) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetupTimerEvent");
static_assert(sizeof(MapWidget_Map_C_SetupTimerEvent) == 0x000018, "Wrong size on MapWidget_Map_C_SetupTimerEvent");
static_assert(offsetof(MapWidget_Map_C_SetupTimerEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'MapWidget_Map_C_SetupTimerEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupTimerEvent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_SetupTimerEvent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetRegionMapTexture
// 0x0088 (0x0088 - 0x0000)
struct MapWidget_Map_C_SetRegionMapTexture final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_GetMapBGConfigFromMapId_OutMapBGConfig;   // 0x0010(0x0078)()
};
static_assert(alignof(MapWidget_Map_C_SetRegionMapTexture) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetRegionMapTexture");
static_assert(sizeof(MapWidget_Map_C_SetRegionMapTexture) == 0x000088, "Wrong size on MapWidget_Map_C_SetRegionMapTexture");
static_assert(offsetof(MapWidget_Map_C_SetRegionMapTexture, InMapId) == 0x000000, "Member 'MapWidget_Map_C_SetRegionMapTexture::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetRegionMapTexture, CallFunc_GetMapBGConfigFromMapId_OutMapBGConfig) == 0x000010, "Member 'MapWidget_Map_C_SetRegionMapTexture::CallFunc_GetMapBGConfigFromMapId_OutMapBGConfig' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetupMap
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_Map_C_SetupMap final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InIsPlayerCursorVisible;                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWorldMapFlag_IsWorldMap;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetupMap) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetupMap");
static_assert(sizeof(MapWidget_Map_C_SetupMap) == 0x000018, "Wrong size on MapWidget_Map_C_SetupMap");
static_assert(offsetof(MapWidget_Map_C_SetupMap, InMapId) == 0x000000, "Member 'MapWidget_Map_C_SetupMap::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMap, InIsPlayerCursorVisible) == 0x000010, "Member 'MapWidget_Map_C_SetupMap::InIsPlayerCursorVisible' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMap, CallFunc_IsWorldMapFlag_IsWorldMap) == 0x000011, "Member 'MapWidget_Map_C_SetupMap::CallFunc_IsWorldMapFlag_IsWorldMap' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetupAsWorldMap
// 0x00F8 (0x00F8 - 0x0000)
struct MapWidget_Map_C_SetupAsWorldMap final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14CE[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetMapBGConfigRowNames_ReturnValue;       // 0x0018(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14CF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x0038(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D0[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& InRegionMapId)> K2Node_CreateDelegate_OutputDelegate;              // 0x00CC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D1[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14D2[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_RegionIcon_C*                CallFunc_Create_ReturnValue;                       // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_SetupAsWorldMap) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetupAsWorldMap");
static_assert(sizeof(MapWidget_Map_C_SetupAsWorldMap) == 0x0000F8, "Wrong size on MapWidget_Map_C_SetupAsWorldMap");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, InMapId) == 0x000000, "Member 'MapWidget_Map_C_SetupAsWorldMap::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, Temp_int_Array_Index_Variable) == 0x000010, "Member 'MapWidget_Map_C_SetupAsWorldMap::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_GetMapBGConfigRowNames_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_GetMapBGConfigRowNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_Array_Get_Item) == 0x000028, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x000038, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_Conv_NameToString_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'MapWidget_Map_C_SetupAsWorldMap::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, K2Node_CreateDelegate_OutputDelegate) == 0x0000CC, "Member 'MapWidget_Map_C_SetupAsWorldMap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_Less_IntInt_ReturnValue) == 0x0000DC, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_Create_ReturnValue) == 0x0000E8, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsWorldMap, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_SetupAsWorldMap::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetupAsRegionMap
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_Map_C_SetupAsRegionMap final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InIsPlayerCursorVisible;                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D3[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D4[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetupAsRegionMap) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetupAsRegionMap");
static_assert(sizeof(MapWidget_Map_C_SetupAsRegionMap) == 0x000038, "Wrong size on MapWidget_Map_C_SetupAsRegionMap");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, InMapId) == 0x000000, "Member 'MapWidget_Map_C_SetupAsRegionMap::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, InIsPlayerCursorVisible) == 0x000010, "Member 'MapWidget_Map_C_SetupAsRegionMap::InIsPlayerCursorVisible' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, Temp_int_Array_Index_Variable) == 0x000014, "Member 'MapWidget_Map_C_SetupAsRegionMap::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'MapWidget_Map_C_SetupAsRegionMap::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_SetupAsRegionMap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, CallFunc_Array_Get_Item) == 0x000020, "Member 'MapWidget_Map_C_SetupAsRegionMap::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_SetupAsRegionMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'MapWidget_Map_C_SetupAsRegionMap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupAsRegionMap, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'MapWidget_Map_C_SetupAsRegionMap::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetWorldMapTexture
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_SetWorldMapTexture final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_SetWorldMapTexture) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetWorldMapTexture");
static_assert(sizeof(MapWidget_Map_C_SetWorldMapTexture) == 0x000010, "Wrong size on MapWidget_Map_C_SetWorldMapTexture");
static_assert(offsetof(MapWidget_Map_C_SetWorldMapTexture, InMapId) == 0x000000, "Member 'MapWidget_Map_C_SetWorldMapTexture::InMapId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearWarpPointIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_WarpPointIcon_C*             CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearWarpPointIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearWarpPointIcon");
static_assert(sizeof(MapWidget_Map_C_ClearWarpPointIcon) == 0x000020, "Wrong size on MapWidget_Map_C_ClearWarpPointIcon");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearWarpPointIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearWarpPointIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearWarpPointIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIcon, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_ClearWarpPointIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearWarpPointIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearWarpPointIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIcon, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'MapWidget_Map_C_ClearWarpPointIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPoint
// 0x0850 (0x0850 - 0x0000)
struct MapWidget_Map_C_UpdateWarpPoint final
{
public:
	struct FVector2D                              TmpLocation2D;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDungeon;                                         // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D5[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpContentId;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpPortalName;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              PlayerPos;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       WorkSlot;                                          // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14D6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             MapInfo;                                           // 0x0048(0x01E0)(Edit, BlueprintVisible)
	class UMapWidget_WarpPointIcon_C*             TmpWarpPointIcon;                                  // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsLocalWarpPoint;                               // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D7[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterWarpPoint                     TmpWarpPointData;                                  // 0x0238(0x0068)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D8[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x02AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D9[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14DA[0x2];                                     // 0x02C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14DB[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Portal_to_Location_OutLocationName;   // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14DC[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x02F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14DD[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_WarpPointIcon_C*             CallFunc_Create_ReturnValue;                       // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PublicDungeon_DirectWarpCheck_IsOpen;     // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMapSymbolIconType                            Temp_byte_Variable;                                // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14DE[0x2];                                     // 0x030A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x030C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14DF[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize2D_ReturnValue;                      // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E0[0x2];                                     // 0x031E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_1;                              // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14E1[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x032C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E2[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0340(0x01E0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E3[0x7];                                     // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0530(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0540(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0550(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentGameContentId_ReturnValue;       // 0x0561(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0562(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0563(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x0564(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            K2Node_Select_Default;                             // 0x056C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists_1;                    // 0x056D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E4[0x2];                                     // 0x056E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue_1;                 // 0x0570(0x01E0)()
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0750(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0754(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E5[0x7];                                     // 0x0759(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0760(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0768(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E6[0x3];                                     // 0x0769(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UMapWidget_WarpPointIcon_C* InWarpPointIcon)> K2Node_CreateDelegate_OutputDelegate;              // 0x076C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x077C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E7[0x3];                                     // 0x077D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0780(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0784(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x078C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWarpPointMasterData_IsExists;          // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E8[0x7];                                     // 0x0791(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterWarpPoint                     CallFunc_GetWarpPointMasterData_ReturnValue;       // 0x0798(0x0068)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0800(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14E9[0x3];                                     // 0x0801(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0804(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0808(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_WarpPointIcon_C*             CallFunc_Array_Get_Item_1;                         // 0x0810(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14EA[0x7];                                     // 0x0819(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0820(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0828(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14EB[0x3];                                     // 0x0831(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0834(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetWarpPoints_OutArray;                   // 0x0838(0x0010)(ReferenceParm)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0849(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdateWarpPoint) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateWarpPoint");
static_assert(sizeof(MapWidget_Map_C_UpdateWarpPoint) == 0x000850, "Wrong size on MapWidget_Map_C_UpdateWarpPoint");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, TmpLocation2D) == 0x000000, "Member 'MapWidget_Map_C_UpdateWarpPoint::TmpLocation2D' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, IsDungeon) == 0x000008, "Member 'MapWidget_Map_C_UpdateWarpPoint::IsDungeon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, TmpContentId) == 0x000010, "Member 'MapWidget_Map_C_UpdateWarpPoint::TmpContentId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, TmpPortalName) == 0x000020, "Member 'MapWidget_Map_C_UpdateWarpPoint::TmpPortalName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, PlayerPos) == 0x000030, "Member 'MapWidget_Map_C_UpdateWarpPoint::PlayerPos' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, WorkSlot) == 0x000038, "Member 'MapWidget_Map_C_UpdateWarpPoint::WorkSlot' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, LoopEnd) == 0x000040, "Member 'MapWidget_Map_C_UpdateWarpPoint::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, MapInfo) == 0x000048, "Member 'MapWidget_Map_C_UpdateWarpPoint::MapInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, TmpWarpPointIcon) == 0x000228, "Member 'MapWidget_Map_C_UpdateWarpPoint::TmpWarpPointIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, TmpIsLocalWarpPoint) == 0x000230, "Member 'MapWidget_Map_C_UpdateWarpPoint::TmpIsLocalWarpPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, TmpWarpPointData) == 0x000238, "Member 'MapWidget_Map_C_UpdateWarpPoint::TmpWarpPointData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, TmpMasterDataManager) == 0x0002A0, "Member 'MapWidget_Map_C_UpdateWarpPoint::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, Temp_bool_Variable) == 0x0002A8, "Member 'MapWidget_Map_C_UpdateWarpPoint::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetPosition_ReturnValue) == 0x0002AC, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Not_PreBool_ReturnValue) == 0x0002B4, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, Temp_int_Loop_Counter_Variable) == 0x0002B8, "Member 'MapWidget_Map_C_UpdateWarpPoint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Add_IntInt_ReturnValue) == 0x0002BC, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, Temp_int_Array_Index_Variable) == 0x0002C0, "Member 'MapWidget_Map_C_UpdateWarpPoint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_IsEmpty_ReturnValue) == 0x0002C4, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002C5, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_CalcMapPosition_MapLocation) == 0x0002C8, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Conv_StringToName_ReturnValue) == 0x0002D0, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_IsEmpty_ReturnValue_1) == 0x0002D8, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Get_Portal_to_Location_OutLocationName) == 0x0002E0, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Get_Portal_to_Location_OutLocationName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Not_PreBool_ReturnValue_2) == 0x0002F0, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0002F4, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Create_ReturnValue) == 0x000300, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_PublicDungeon_DirectWarpCheck_IsOpen) == 0x000308, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_PublicDungeon_DirectWarpCheck_IsOpen' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, Temp_byte_Variable) == 0x000309, "Member 'MapWidget_Map_C_UpdateWarpPoint::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x00030C, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetVisibility_ReturnValue) == 0x000314, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_VSize2D_ReturnValue) == 0x000318, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00031C, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Less_FloatFloat_ReturnValue) == 0x00031D, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000320, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, Temp_byte_Variable_1) == 0x000328, "Member 'MapWidget_Map_C_UpdateWarpPoint::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetPosition_ReturnValue_1) == 0x00032C, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Array_LastIndex_ReturnValue) == 0x000334, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetMapInfo_IsExists) == 0x000338, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetMapInfo_ReturnValue) == 0x000340, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetMasterDataManager_IsValid) == 0x000520, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetMasterDataManager_ReturnValue) == 0x000528, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_ConvertParentMapId_ReturnValue) == 0x000530, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Split_LeftS) == 0x000540, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Split_RightS) == 0x000550, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Split_ReturnValue) == 0x000560, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_IsCurrentGameContentId_ReturnValue) == 0x000561, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_IsCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Contains_ReturnValue) == 0x000562, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, Temp_bool_Variable_1) == 0x000563, "Member 'MapWidget_Map_C_UpdateWarpPoint::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Conv_StringToName_ReturnValue_2) == 0x000564, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, K2Node_Select_Default) == 0x00056C, "Member 'MapWidget_Map_C_UpdateWarpPoint::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetMapInfo_IsExists_1) == 0x00056D, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetMapInfo_IsExists_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetMapInfo_ReturnValue_1) == 0x000570, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetMapInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000750, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Multiply_IntInt_ReturnValue) == 0x000754, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000758, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_AddChildToCanvas_ReturnValue) == 0x000760, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_IsValid_ReturnValue) == 0x000768, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, K2Node_CreateDelegate_OutputDelegate) == 0x00076C, "Member 'MapWidget_Map_C_UpdateWarpPoint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_BooleanAND_ReturnValue) == 0x00077C, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Array_Add_ReturnValue) == 0x000780, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Array_Get_Item) == 0x000784, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Array_Length_ReturnValue) == 0x00078C, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetWarpPointMasterData_IsExists) == 0x000790, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetWarpPointMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetWarpPointMasterData_ReturnValue) == 0x000798, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetWarpPointMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Less_IntInt_ReturnValue) == 0x000800, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, Temp_int_Variable) == 0x000804, "Member 'MapWidget_Map_C_UpdateWarpPoint::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetPlayerController_ReturnValue) == 0x000808, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Array_Get_Item_1) == 0x000810, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_IsValid_ReturnValue_1) == 0x000818, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000820, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, K2Node_DynamicCast_AsSBPlayer_State) == 0x000828, "Member 'MapWidget_Map_C_UpdateWarpPoint::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, K2Node_DynamicCast_bSuccess) == 0x000830, "Member 'MapWidget_Map_C_UpdateWarpPoint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_Add_IntInt_ReturnValue_1) == 0x000834, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_GetWarpPoints_OutArray) == 0x000838, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_GetWarpPoints_OutArray' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000848, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPoint, CallFunc_BooleanAND_ReturnValue_1) == 0x000849, "Member 'MapWidget_Map_C_UpdateWarpPoint::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetMapBodySize
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_Map_C_SetMapBodySize final
{
public:
	struct FVector2D                              InSize;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetMapBodySize) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetMapBodySize");
static_assert(sizeof(MapWidget_Map_C_SetMapBodySize) == 0x000018, "Wrong size on MapWidget_Map_C_SetMapBodySize");
static_assert(offsetof(MapWidget_Map_C_SetMapBodySize, InSize) == 0x000000, "Member 'MapWidget_Map_C_SetMapBodySize::InSize' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapBodySize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_SetMapBodySize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapBodySize, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_SetMapBodySize::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetMapBodyPosition
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_Map_C_SetMapBodyPosition final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetMapBodyPosition) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetMapBodyPosition");
static_assert(sizeof(MapWidget_Map_C_SetMapBodyPosition) == 0x000018, "Wrong size on MapWidget_Map_C_SetMapBodyPosition");
static_assert(offsetof(MapWidget_Map_C_SetMapBodyPosition, InPosition) == 0x000000, "Member 'MapWidget_Map_C_SetMapBodyPosition::InPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapBodyPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_SetMapBodyPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapBodyPosition, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_SetMapBodyPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.InitPinInfo
// 0x01F0 (0x01F0 - 0x0000)
struct MapWidget_Map_C_InitPinInfo final
{
public:
	class UMapWidget_MapPinnedPin_C*              MapPin;                                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPinInfo                            MapPinInfo;                                        // 0x0008(0x0040)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14EC[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14ED[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x00B8(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14EE[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_2;       // 0x0134(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_3;       // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14EF[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item;                           // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWorldMapFlag_IsWorldMap;                // 0x015E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F0[0x1];                                     // 0x015F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14F1[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinListInfo                        CallFunc_GetMapPinListInfo_ReturnValue;            // 0x0168(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F2[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F3[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F4[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item_1;                         // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14F5[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item_2;                         // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F6[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue_1;         // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F7[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item_3;                         // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F8[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_InitPinInfo) == 0x000008, "Wrong alignment on MapWidget_Map_C_InitPinInfo");
static_assert(sizeof(MapWidget_Map_C_InitPinInfo) == 0x0001F0, "Wrong size on MapWidget_Map_C_InitPinInfo");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, MapPin) == 0x000000, "Member 'MapWidget_Map_C_InitPinInfo::MapPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, MapPinInfo) == 0x000008, "Member 'MapWidget_Map_C_InitPinInfo::MapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Array_Index_Variable) == 0x000048, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Loop_Counter_Variable_1) == 0x000054, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Variable) == 0x000058, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000060, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Variable_1) == 0x000064, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Variable_2) == 0x000068, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_IntInt_ReturnValue_3) == 0x00006C, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000070, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_ConvertParentMapId_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_Vector2DVector2D_ReturnValue_1) == 0x000098, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Len_ReturnValue) == 0x0000A0, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A4, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Len_ReturnValue_1) == 0x0000A8, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000AC, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x0000B8, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x000130, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_Vector2DVector2D_ReturnValue_2) == 0x000134, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_Vector2DVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_Vector2DVector2D_ReturnValue_3) == 0x00013C, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_Vector2DVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Length_ReturnValue) == 0x000144, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000148, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Get_Item) == 0x000150, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000158, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_IsValid_ReturnValue) == 0x00015C, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x00015D, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_IsWorldMapFlag_IsWorldMap) == 0x00015E, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_IsWorldMapFlag_IsWorldMap' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Variable_3) == 0x000160, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_GetMapPinListInfo_ReturnValue) == 0x000168, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_GetMapPinListInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Length_ReturnValue_2) == 0x000180, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000184, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Length_ReturnValue_3) == 0x000188, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00018C, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000190, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000194, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000195, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Length_ReturnValue_4) == 0x000198, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x00019C, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Get_Item_1) == 0x0001A0, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, Temp_int_Array_Index_Variable_1) == 0x0001A8, "Member 'MapWidget_Map_C_InitPinInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Get_Item_2) == 0x0001B0, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_IsValid_ReturnValue_1) == 0x0001B8, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_ConvertParentMapId_ReturnValue_1) == 0x0001C0, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_ConvertParentMapId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0001D0, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Get_Item_3) == 0x0001D8, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Array_Length_ReturnValue_5) == 0x0001E0, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Less_IntInt_ReturnValue_3) == 0x0001E4, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_IntInt_ReturnValue_4) == 0x0001E8, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPinInfo, CallFunc_Add_IntInt_ReturnValue_5) == 0x0001EC, "Member 'MapWidget_Map_C_InitPinInfo::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateWorldMapPinnedPin
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_Map_C_CreateWorldMapPinnedPin final
{
public:
	TArray<class FName>                           CallFunc_GetMapBGConfigRowNames_ReturnValue;       // 0x0000(0x0010)(ReferenceParm)
	class UMapWidget_MapPinnedPin_C*              CallFunc_CreateMapWidgetMapPinnedPin_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAreaMapPinMax_AreaMapPinMax;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F9[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateWorldMapPinnedPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateWorldMapPinnedPin");
static_assert(sizeof(MapWidget_Map_C_CreateWorldMapPinnedPin) == 0x000038, "Wrong size on MapWidget_Map_C_CreateWorldMapPinnedPin");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_GetMapBGConfigRowNames_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_GetMapBGConfigRowNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_CreateMapWidgetMapPinnedPin_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_CreateMapWidgetMapPinnedPin_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, Temp_int_Variable) == 0x00001C, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_GetAreaMapPinMax_AreaMapPinMax) == 0x000020, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_GetAreaMapPinMax_AreaMapPinMax' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_Multiply_IntInt_ReturnValue) == 0x000024, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateWorldMapPinnedPin, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'MapWidget_Map_C_CreateWorldMapPinnedPin::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearWorldMapPinnedPin
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearWorldMapPinnedPin final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearWorldMapPinnedPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearWorldMapPinnedPin");
static_assert(sizeof(MapWidget_Map_C_ClearWorldMapPinnedPin) == 0x000020, "Wrong size on MapWidget_Map_C_ClearWorldMapPinnedPin");
static_assert(offsetof(MapWidget_Map_C_ClearWorldMapPinnedPin, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearWorldMapPinnedPin::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWorldMapPinnedPin, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearWorldMapPinnedPin::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWorldMapPinnedPin, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearWorldMapPinnedPin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWorldMapPinnedPin, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_ClearWorldMapPinnedPin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWorldMapPinnedPin, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearWorldMapPinnedPin::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWorldMapPinnedPin, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearWorldMapPinnedPin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWorldMapPinnedPin, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'MapWidget_Map_C_ClearWorldMapPinnedPin::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateCurrentAreaMapPinnedPin
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_CreateCurrentAreaMapPinnedPin final
{
public:
	class UMapWidget_MapPinnedPin_C*              CallFunc_CreateMapWidgetMapPinnedPin_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAreaMapPinMax_AreaMapPinMax;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14FA[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateCurrentAreaMapPinnedPin");
static_assert(sizeof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin) == 0x000020, "Wrong size on MapWidget_Map_C_CreateCurrentAreaMapPinnedPin");
static_assert(offsetof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin, CallFunc_CreateMapWidgetMapPinnedPin_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_CreateCurrentAreaMapPinnedPin::CallFunc_CreateMapWidgetMapPinnedPin_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin, Temp_int_Variable) == 0x000008, "Member 'MapWidget_Map_C_CreateCurrentAreaMapPinnedPin::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_CreateCurrentAreaMapPinnedPin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin, CallFunc_GetAreaMapPinMax_AreaMapPinMax) == 0x000010, "Member 'MapWidget_Map_C_CreateCurrentAreaMapPinnedPin::CallFunc_GetAreaMapPinMax_AreaMapPinMax' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'MapWidget_Map_C_CreateCurrentAreaMapPinnedPin::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_CreateCurrentAreaMapPinnedPin::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCurrentAreaMapPinnedPin, CallFunc_Array_Add_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_CreateCurrentAreaMapPinnedPin::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearCurrentAreaMapPinnedPin
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearCurrentAreaMapPinnedPin final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearCurrentAreaMapPinnedPin");
static_assert(sizeof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin) == 0x000020, "Wrong size on MapWidget_Map_C_ClearCurrentAreaMapPinnedPin");
static_assert(offsetof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearCurrentAreaMapPinnedPin::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearCurrentAreaMapPinnedPin::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearCurrentAreaMapPinnedPin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_ClearCurrentAreaMapPinnedPin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearCurrentAreaMapPinnedPin::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearCurrentAreaMapPinnedPin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCurrentAreaMapPinnedPin, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'MapWidget_Map_C_ClearCurrentAreaMapPinnedPin::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateMapWidgetMapPinnedPin
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_CreateMapWidgetMapPinnedPin final
{
public:
	class UMapWidget_MapPinnedPin_C*              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_MapPinnedPin_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateMapWidgetMapPinnedPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateMapWidgetMapPinnedPin");
static_assert(sizeof(MapWidget_Map_C_CreateMapWidgetMapPinnedPin) == 0x000020, "Wrong size on MapWidget_Map_C_CreateMapWidgetMapPinnedPin");
static_assert(offsetof(MapWidget_Map_C_CreateMapWidgetMapPinnedPin, ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_CreateMapWidgetMapPinnedPin::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateMapWidgetMapPinnedPin, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_CreateMapWidgetMapPinnedPin::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateMapWidgetMapPinnedPin, CallFunc_AddChildToCanvas_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_CreateMapWidgetMapPinnedPin::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateMapWidgetMapPinnedPin, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_CreateMapWidgetMapPinnedPin::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateMapWidgetMapPinnedPin, CallFunc_Multiply_IntInt_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_CreateMapWidgetMapPinnedPin::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetPinToMap
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_SetPinToMap final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPinRef;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetPinToMap) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetPinToMap");
static_assert(sizeof(MapWidget_Map_C_SetPinToMap) == 0x000010, "Wrong size on MapWidget_Map_C_SetPinToMap");
static_assert(offsetof(MapWidget_Map_C_SetPinToMap, InPinnedPinRef) == 0x000000, "Member 'MapWidget_Map_C_SetPinToMap::InPinnedPinRef' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetPinToMap, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_SetPinToMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.AttachPinToMap
// 0x00E8 (0x00E8 - 0x0000)
struct MapWidget_Map_C_AttachPinToMap final
{
public:
	class UMapWidget_MapPinnedPin_C*              InMapPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPinInfo                            InMapPinInfo;                                      // 0x0008(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsTextBoxVisible;                                  // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14FB[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            MapPinInfo;                                        // 0x0050(0x0040)(Edit, BlueprintVisible)
	class UMapWidget_MapPinnedPin_C*              TmpPinnedPin;                                      // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14FC[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrderOfPinForComment_ReturnValue; // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14FD[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14FE[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14FF[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin;    // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1500[0x1];                                     // 0x00DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_AttachPinToMap) == 0x000008, "Wrong alignment on MapWidget_Map_C_AttachPinToMap");
static_assert(sizeof(MapWidget_Map_C_AttachPinToMap) == 0x0000E8, "Wrong size on MapWidget_Map_C_AttachPinToMap");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, InMapPin) == 0x000000, "Member 'MapWidget_Map_C_AttachPinToMap::InMapPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, InMapPinInfo) == 0x000008, "Member 'MapWidget_Map_C_AttachPinToMap::InMapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, IsTextBoxVisible) == 0x000048, "Member 'MapWidget_Map_C_AttachPinToMap::IsTextBoxVisible' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, MapPinInfo) == 0x000050, "Member 'MapWidget_Map_C_AttachPinToMap::MapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, TmpPinnedPin) == 0x000090, "Member 'MapWidget_Map_C_AttachPinToMap::TmpPinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, Temp_int_Variable) == 0x000098, "Member 'MapWidget_Map_C_AttachPinToMap::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_IsValid_ReturnValue) == 0x00009C, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000A0, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_GetMapIconZOrderOfPinForComment_ReturnValue) == 0x0000A8, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_GetMapIconZOrderOfPinForComment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_IsValid_ReturnValue_1) == 0x0000AC, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, Temp_int_Variable_1) == 0x0000B4, "Member 'MapWidget_Map_C_AttachPinToMap::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_GetChildrenCount_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_GetChildAt_ReturnValue) == 0x0000C0, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin) == 0x0000D0, "Member 'MapWidget_Map_C_AttachPinToMap::K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'MapWidget_Map_C_AttachPinToMap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D9, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000DA, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AttachPinToMap, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000E0, "Member 'MapWidget_Map_C_AttachPinToMap::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetMapToPinAttachMode
// 0x0005 (0x0005 - 0x0000)
struct MapWidget_Map_C_SetMapToPinAttachMode final
{
public:
	bool                                          IsAttachMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_SetMapToPinAttachMode) == 0x000001, "Wrong alignment on MapWidget_Map_C_SetMapToPinAttachMode");
static_assert(sizeof(MapWidget_Map_C_SetMapToPinAttachMode) == 0x000005, "Wrong size on MapWidget_Map_C_SetMapToPinAttachMode");
static_assert(offsetof(MapWidget_Map_C_SetMapToPinAttachMode, IsAttachMode) == 0x000000, "Member 'MapWidget_Map_C_SetMapToPinAttachMode::IsAttachMode' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapToPinAttachMode, Temp_bool_Variable) == 0x000001, "Member 'MapWidget_Map_C_SetMapToPinAttachMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapToPinAttachMode, Temp_byte_Variable) == 0x000002, "Member 'MapWidget_Map_C_SetMapToPinAttachMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapToPinAttachMode, Temp_byte_Variable_1) == 0x000003, "Member 'MapWidget_Map_C_SetMapToPinAttachMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetMapToPinAttachMode, K2Node_Select_Default) == 0x000004, "Member 'MapWidget_Map_C_SetMapToPinAttachMode::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OpenPinnedPinCommentBox
// 0x00B8 (0x00B8 - 0x0000)
struct MapWidget_Map_C_OpenPinnedPinCommentBox final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_MapPinnedPin_C*              TmpPinnedPin;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrderOfPinForComment_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1501[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1502[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            CallFunc_GetPinInfo_OutPinInfo;                    // 0x0020(0x0040)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1503[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1504[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1505[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin;    // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1506[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OpenPinnedPinCommentBox) == 0x000008, "Wrong alignment on MapWidget_Map_C_OpenPinnedPinCommentBox");
static_assert(sizeof(MapWidget_Map_C_OpenPinnedPinCommentBox) == 0x0000B8, "Wrong size on MapWidget_Map_C_OpenPinnedPinCommentBox");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, InPinnedPin) == 0x000000, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::InPinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, TmpPinnedPin) == 0x000008, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::TmpPinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_GetMapIconZOrderOfPinForComment_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_GetMapIconZOrderOfPinForComment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_Multiply_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_GetPinInfo_OutPinInfo) == 0x000020, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_GetPinInfo_OutPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_GetChildrenCount_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, Temp_int_Variable) == 0x00007C, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_Subtract_IntInt_ReturnValue) == 0x000080, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_GetChildAt_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin) == 0x0000A8, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000B1, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OpenPinnedPinCommentBox, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'MapWidget_Map_C_OpenPinnedPinCommentBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClosePinnedPinCommentBox
// 0x0050 (0x0050 - 0x0000)
struct MapWidget_Map_C_ClosePinnedPinCommentBox final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1507[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1508[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1509[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_150A[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_ClosePinnedPinCommentBox) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClosePinnedPinCommentBox");
static_assert(sizeof(MapWidget_Map_C_ClosePinnedPinCommentBox) == 0x000050, "Wrong size on MapWidget_Map_C_ClosePinnedPinCommentBox");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, InPinnedPin) == 0x000000, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::InPinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, Temp_bool_Variable) == 0x000008, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_GetMapIconZOrder_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_GetChildrenCount_ReturnValue) == 0x000014, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, Temp_int_Variable) == 0x000018, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin) == 0x000030, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000049, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClosePinnedPinCommentBox, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'MapWidget_Map_C_ClosePinnedPinCommentBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateComboBoxPinList
// 0x0060 (0x0060 - 0x0000)
struct MapWidget_Map_C_UpdateComboBoxPinList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_150B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            CallFunc_Array_Get_Item;                           // 0x0010(0x0040)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdateComboBoxPinList) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateComboBoxPinList");
static_assert(sizeof(MapWidget_Map_C_UpdateComboBoxPinList) == 0x000060, "Wrong size on MapWidget_Map_C_UpdateComboBoxPinList");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateComboBoxPinList, CallFunc_IsEmpty_ReturnValue) == 0x000059, "Member 'MapWidget_Map_C_UpdateComboBoxPinList::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetSavingMapPinInfo
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_SetSavingMapPinInfo final
{
public:
	bool                                          Param_IsSavingMapPinInfo;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetSavingMapPinInfo) == 0x000001, "Wrong alignment on MapWidget_Map_C_SetSavingMapPinInfo");
static_assert(sizeof(MapWidget_Map_C_SetSavingMapPinInfo) == 0x000001, "Wrong size on MapWidget_Map_C_SetSavingMapPinInfo");
static_assert(offsetof(MapWidget_Map_C_SetSavingMapPinInfo, Param_IsSavingMapPinInfo) == 0x000000, "Member 'MapWidget_Map_C_SetSavingMapPinInfo::Param_IsSavingMapPinInfo' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.DoSavePinInfo
// 0x0178 (0x0178 - 0x0000)
struct MapWidget_Map_C_DoSavePinInfo final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetInputMode;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMapPinOverwrite;                                 // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_150C[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              PinnedPin;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_150D[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            CallFunc_GetPinInfo_OutPinInfo;                    // 0x0020(0x0040)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_150E[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            CallFunc_GetPinInfo_OutPinInfo_1;                  // 0x0068(0x0040)()
	struct FMapPinInfo                            CallFunc_GetPinInfo_OutPinInfo_2;                  // 0x00A8(0x0040)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_150F[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1510[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            CallFunc_Array_Get_Item;                           // 0x0108(0x0040)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1511[0x1];                                     // 0x014F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1512[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_SaveMapPinInfos_ReturnValue;      // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_DoSavePinInfo) == 0x000008, "Wrong alignment on MapWidget_Map_C_DoSavePinInfo");
static_assert(sizeof(MapWidget_Map_C_DoSavePinInfo) == 0x000178, "Wrong size on MapWidget_Map_C_DoSavePinInfo");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, InPinnedPin) == 0x000000, "Member 'MapWidget_Map_C_DoSavePinInfo::InPinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, ResetInputMode) == 0x000008, "Member 'MapWidget_Map_C_DoSavePinInfo::ResetInputMode' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, IsMapPinOverwrite) == 0x000009, "Member 'MapWidget_Map_C_DoSavePinInfo::IsMapPinOverwrite' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, PinnedPin) == 0x000010, "Member 'MapWidget_Map_C_DoSavePinInfo::PinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, Temp_int_Array_Index_Variable) == 0x000018, "Member 'MapWidget_Map_C_DoSavePinInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Not_PreBool_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, Temp_bool_True_if_break_was_hit_Variable) == 0x00001D, "Member 'MapWidget_Map_C_DoSavePinInfo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_GetPinInfo_OutPinInfo) == 0x000020, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_GetPinInfo_OutPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Not_PreBool_ReturnValue_1) == 0x000060, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_GetPinInfo_OutPinInfo_1) == 0x000068, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_GetPinInfo_OutPinInfo_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_GetPinInfo_OutPinInfo_2) == 0x0000A8, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_GetPinInfo_OutPinInfo_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000E8, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_IsValid_ReturnValue_1) == 0x0000F1, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, Temp_int_Loop_Counter_Variable) == 0x0000F4, "Member 'MapWidget_Map_C_DoSavePinInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Array_Add_ReturnValue) == 0x0000FC, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Array_Add_ReturnValue_1) == 0x000100, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Array_Get_Item) == 0x000108, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Less_IntInt_ReturnValue) == 0x00014C, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00014D, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_BooleanAND_ReturnValue) == 0x00014E, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000150, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Multiply_IntInt_ReturnValue) == 0x000154, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000158, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x00015C, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000160, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000168, "Member 'MapWidget_Map_C_DoSavePinInfo::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, K2Node_DynamicCast_bSuccess) == 0x000170, "Member 'MapWidget_Map_C_DoSavePinInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_IsValid_ReturnValue_2) == 0x000171, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoSavePinInfo, CallFunc_Request_SaveMapPinInfos_ReturnValue) == 0x000172, "Member 'MapWidget_Map_C_DoSavePinInfo::CallFunc_Request_SaveMapPinInfos_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.DoErasePinnedPin
// 0x00E8 (0x00E8 - 0x0000)
struct MapWidget_Map_C_DoErasePinnedPin final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1513[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1514[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1515[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1516[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            CallFunc_GetPinInfo_OutPinInfo;                    // 0x0038(0x0040)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1517[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPinInfo                            CallFunc_FindPinInfoByPinIndex_OutPinInfo;         // 0x0080(0x0040)()
	bool                                          CallFunc_FindPinInfoByPinIndex_OutResult;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1518[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1519[0x5];                                     // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_SaveMapPinInfos_ReturnValue;      // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_DoErasePinnedPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_DoErasePinnedPin");
static_assert(sizeof(MapWidget_Map_C_DoErasePinnedPin) == 0x0000E8, "Wrong size on MapWidget_Map_C_DoErasePinnedPin");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, InPinnedPin) == 0x000000, "Member 'MapWidget_Map_C_DoErasePinnedPin::InPinnedPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, Temp_int_Variable) == 0x000008, "Member 'MapWidget_Map_C_DoErasePinnedPin::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, Temp_bool_Variable) == 0x000014, "Member 'MapWidget_Map_C_DoErasePinnedPin::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin) == 0x000028, "Member 'MapWidget_Map_C_DoErasePinnedPin::K2Node_DynamicCast_AsMap_Widget_Map_Pinned_Pin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'MapWidget_Map_C_DoErasePinnedPin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_GetPinInfo_OutPinInfo) == 0x000038, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_GetPinInfo_OutPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_GetChildrenCount_ReturnValue) == 0x00007C, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_FindPinInfoByPinIndex_OutPinInfo) == 0x000080, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_FindPinInfoByPinIndex_OutPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_FindPinInfoByPinIndex_OutResult) == 0x0000C0, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_FindPinInfoByPinIndex_OutResult' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C4, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_BooleanAND_ReturnValue) == 0x0000C9, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000CA, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_GetPlayerController_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000D8, "Member 'MapWidget_Map_C_DoErasePinnedPin::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'MapWidget_Map_C_DoErasePinnedPin::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_IsValid_ReturnValue_2) == 0x0000E1, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoErasePinnedPin, CallFunc_Request_SaveMapPinInfos_ReturnValue) == 0x0000E2, "Member 'MapWidget_Map_C_DoErasePinnedPin::CallFunc_Request_SaveMapPinInfos_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.PrintMapPinInfoList
// 0x01C0 (0x01C0 - 0x0000)
struct MapWidget_Map_C_PrintMapPinInfoList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151A[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0060(0x0018)()
	struct FMapPinInfo                            CallFunc_Array_Get_Item;                           // 0x0078(0x0040)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_Vector2dToString_ReturnValue;        // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151B[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151C[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_PrintMapPinInfoList) == 0x000008, "Wrong alignment on MapWidget_Map_C_PrintMapPinInfoList");
static_assert(sizeof(MapWidget_Map_C_PrintMapPinInfoList) == 0x0001C0, "Wrong size on MapWidget_Map_C_PrintMapPinInfoList");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_PrintMapPinInfoList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_PrintMapPinInfoList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'MapWidget_Map_C_PrintMapPinInfoList::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, K2Node_MakeArray_Array) == 0x000048, "Member 'MapWidget_Map_C_PrintMapPinInfoList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_MakeLiteralText_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Array_Get_Item) == 0x000078, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Conv_Vector2dToString_ReturnValue) == 0x0000E0, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Conv_Vector2dToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000100, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Conv_IntToString_ReturnValue) == 0x000110, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000128, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Less_IntInt_ReturnValue) == 0x000138, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000140, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000150, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000160, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000170, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000180, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000190, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_8) == 0x0001A0, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PrintMapPinInfoList, CallFunc_Concat_StrStr_ReturnValue_9) == 0x0001B0, "Member 'MapWidget_Map_C_PrintMapPinInfoList::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_PlayAnimIn) == 0x000008, "Wrong alignment on MapWidget_Map_C_PlayAnimIn");
static_assert(sizeof(MapWidget_Map_C_PlayAnimIn) == 0x000008, "Wrong size on MapWidget_Map_C_PlayAnimIn");
static_assert(offsetof(MapWidget_Map_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.PlayAnimOut
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_Map_C_PlayAnimOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_PlayAnimOut) == 0x000008, "Wrong alignment on MapWidget_Map_C_PlayAnimOut");
static_assert(sizeof(MapWidget_Map_C_PlayAnimOut) == 0x000008, "Wrong size on MapWidget_Map_C_PlayAnimOut");
static_assert(offsetof(MapWidget_Map_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreatePartyMemberIcon
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_Map_C_CreatePartyMemberIcon final
{
public:
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PartyMemberIcon_C*           CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreatePartyMemberIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreatePartyMemberIcon");
static_assert(sizeof(MapWidget_Map_C_CreatePartyMemberIcon) == 0x000038, "Wrong size on MapWidget_Map_C_CreatePartyMemberIcon");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_Multiply_IntInt_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, Temp_int_Variable) == 0x000008, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_Create_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreatePartyMemberIcon, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'MapWidget_Map_C_CreatePartyMemberIcon::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearPartyMemberIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearPartyMemberIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PartyMemberIcon_C*           CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearPartyMemberIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearPartyMemberIcon");
static_assert(sizeof(MapWidget_Map_C_ClearPartyMemberIcon) == 0x000020, "Wrong size on MapWidget_Map_C_ClearPartyMemberIcon");
static_assert(offsetof(MapWidget_Map_C_ClearPartyMemberIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearPartyMemberIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearPartyMemberIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearPartyMemberIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearPartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearPartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearPartyMemberIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearPartyMemberIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearPartyMemberIcon, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearPartyMemberIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearPartyMemberIcon, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClearPartyMemberIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearPartyMemberIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'MapWidget_Map_C_ClearPartyMemberIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdatePartyMemberIcon
// 0x01D8 (0x01D8 - 0x0000)
struct MapWidget_Map_C_UpdatePartyMemberIcon final
{
public:
	class FString                                 TmpCharacterName;                                  // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         IconZOrder;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CalcPosition;                                      // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1520[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   TmpCharaParameterComponent;                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       TmpCanvasSlot;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_PartyMemberIcon_C*           TmpMemberIcon;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpPartyMemberCnt;                                 // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1521[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         TmpPlayerState;                                    // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_1;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1522[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInTemple_ReturnValue;                   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWorldMapFlag_IsWorldMap;                // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1523[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1524[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector_NetQuantize                    CallFunc_GetCharacterLocation_ReturnValue;         // 0x007C(0x000C)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1525[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1526[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            K2Node_Select_Default;                             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1527[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1528[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1529[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetPlayerState_OutPlayerState;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_OutText;                          // 0x00E0(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152A[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_152B[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152C[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152D[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152E[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152F[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  K2Node_DynamicCast_AsSBOnline_Player_State;        // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1530[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMapWidget_PartyMemberIcon_C*           CallFunc_Array_Get_Item;                           // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1531[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetPartyMember_OutPartyMembers;           // 0x0188(0x0010)(ReferenceParm)
	TArray<class ASBPlayerState*>                 CallFunc_GetPartyMember_OutInterruptQuestMembers;  // 0x0198(0x0010)(ReferenceParm)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item_1;                         // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSameMap_ReturnValue;                    // 0x01B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x01B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1532[0x6];                                     // 0x01BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdatePartyMemberIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdatePartyMemberIcon");
static_assert(sizeof(MapWidget_Map_C_UpdatePartyMemberIcon) == 0x0001D8, "Wrong size on MapWidget_Map_C_UpdatePartyMemberIcon");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, TmpCharacterName) == 0x000000, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::TmpCharacterName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, IconZOrder) == 0x000010, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::IconZOrder' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CalcPosition) == 0x000014, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CalcPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, TmpCharaParameterComponent) == 0x000020, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::TmpCharaParameterComponent' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, TmpCanvasSlot) == 0x000028, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::TmpCanvasSlot' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, TmpMemberIcon) == 0x000030, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::TmpMemberIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, TmpPartyMemberCnt) == 0x000038, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::TmpPartyMemberCnt' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, TmpPlayerState) == 0x000040, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::TmpPlayerState' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, Temp_byte_Variable) == 0x000048, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, Temp_byte_Variable_1) == 0x000049, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, Temp_int_Array_Index_Variable) == 0x000054, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, Temp_bool_Variable) == 0x000058, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsInTemple_ReturnValue) == 0x000059, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsInTemple_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsWorldMapFlag_IsWorldMap) == 0x00005A, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsWorldMapFlag_IsWorldMap' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00005B, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetCharacterLocation_ReturnValue) == 0x00007C, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetCharacterLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_BreakVector_X) == 0x000088, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_BreakVector_Y) == 0x00008C, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_BreakVector_Z) == 0x000090, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000098, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsDeadHitPoint_ReturnValue) == 0x0000A8, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_MakeVector2D_ReturnValue) == 0x0000AC, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_CalcMapPosition_MapLocation) == 0x0000B4, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, K2Node_Select_Default) == 0x0000BC, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetMapIconZOrder_ReturnValue) == 0x0000C0, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsValid_ReturnValue_1) == 0x0000C4, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetZOrder_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsValid_ReturnValue_2) == 0x0000CC, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetPlayerState_OutPlayerState) == 0x0000D8, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetPlayerState_OutPlayerState' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetText_OutText) == 0x0000E0, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetText_OutText' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_NotEqual_TextText_ReturnValue) == 0x0000F8, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetPosition_ReturnValue) == 0x0000FC, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, Temp_string_Variable) == 0x000108, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Multiply_IntInt_ReturnValue) == 0x000118, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00011C, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x000120, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000130, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsValid_ReturnValue_3) == 0x000131, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Array_Length_ReturnValue) == 0x000134, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000138, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x00013C, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000140, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x000141, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000148, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, K2Node_DynamicCast_AsSBOnline_Player_State) == 0x000150, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::K2Node_DynamicCast_AsSBOnline_Player_State' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetCharacterName_ReturnValue) == 0x000168, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Array_Get_Item) == 0x000178, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsValid_ReturnValue_4) == 0x000180, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, Temp_int_Variable) == 0x000184, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetPartyMember_OutPartyMembers) == 0x000188, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetPartyMember_OutInterruptQuestMembers) == 0x000198, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetPartyMember_OutInterruptQuestMembers' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Array_Get_Item_1) == 0x0001A8, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0001B0, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsValid_ReturnValue_5) == 0x0001B4, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001B5, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsSameMap_ReturnValue) == 0x0001B6, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsSameMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsValid_ReturnValue_6) == 0x0001B7, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_IsLocalPlayer_ReturnValue) == 0x0001B8, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001B9, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_GetCurrentLevelName_ReturnValue) == 0x0001C0, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_BooleanAND_ReturnValue) == 0x0001D0, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePartyMemberIcon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001D1, "Member 'MapWidget_Map_C_UpdatePartyMemberIcon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.HidePartyMemberIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_HidePartyMemberIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_PartyMemberIcon_C*           CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_HidePartyMemberIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_HidePartyMemberIcon");
static_assert(sizeof(MapWidget_Map_C_HidePartyMemberIcon) == 0x000020, "Wrong size on MapWidget_Map_C_HidePartyMemberIcon");
static_assert(offsetof(MapWidget_Map_C_HidePartyMemberIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_HidePartyMemberIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_HidePartyMemberIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_HidePartyMemberIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_HidePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_HidePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_HidePartyMemberIcon, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_HidePartyMemberIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_HidePartyMemberIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_HidePartyMemberIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_HidePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_HidePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_HidePartyMemberIcon, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'MapWidget_Map_C_HidePartyMemberIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.InitPlayerIcon
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_InitPlayerIcon final
{
public:
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_InitPlayerIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_InitPlayerIcon");
static_assert(sizeof(MapWidget_Map_C_InitPlayerIcon) == 0x000010, "Wrong size on MapWidget_Map_C_InitPlayerIcon");
static_assert(offsetof(MapWidget_Map_C_InitPlayerIcon, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_InitPlayerIcon::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPlayerIcon, CallFunc_Multiply_IntInt_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_InitPlayerIcon::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_InitPlayerIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_InitPlayerIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateQuestIcon
// 0x08E0 (0x08E0 - 0x0000)
struct MapWidget_Map_C_UpdateQuestIcon final
{
public:
	struct FUnlockedQuestInfo                     TmpUnlockQuestInfo;                                // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor)
	struct FQuestMasterData                       TmpQuestData;                                      // 0x0008(0x0118)(Edit, BlueprintVisible)
	class FString                                 TmpParentMapId;                                    // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 TmpRegIconPriorities;                              // 0x0130(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpIconPriority;                                   // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            TmpMapIconType;                                    // 0x0144(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory1                               TmpQuestCategory1;                                 // 0x0145(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1533[0x2];                                     // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_QuestIcon_C*                 TmpQuestIcon;                                      // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsStatusClosed;                                 // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1534[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TmpCloseLocationId;                                // 0x0154(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1535[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpQuestName;                                      // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpCoincideIconRegId;                              // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpQuestId;                                        // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  TmpQuestStatus;                                    // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1536[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              TmpIconWorldLocation;                              // 0x017C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpIconId;                                         // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNetworkDataCache*                    TmpNetworkDataCache;                               // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InQuestId)>              K2Node_CreateDelegate_OutputDelegate;              // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1537[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_getQuestIconZOrder_ReturnValue;           // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1538[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x01D0(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestIconType                                CallFunc_GetQuestIconType_ReturnValue;             // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1539[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_153A[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue; // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDisplayQuestIconStandby_bDisplay;       // 0x030A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x030B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x030C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_153B[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_getQuestIconZOrder_ReturnValue_1;         // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTargetWorldLocation_IsTargetExists;    // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_153C[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetWorldLocation_ReturnValue;       // 0x0340(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x034C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTargetLevelName_IsTargetExists;        // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_153D[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTargetLevelName_ReturnValue;           // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_153E[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_153F[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUnlockedQuestInfo                     CallFunc_Array_Get_Item;                           // 0x0384(0x0008)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1540[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTooltipString_OutTooltipString;        // 0x0390(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x03D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1541[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_QuestIcon_C*                 CallFunc_Array_Get_Item_1;                         // 0x03E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_QuestIcon_C*                 CallFunc_Array_Get_Item_2;                         // 0x03F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1542[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLatestMainQuest_ReturnValue;           // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData_1;    // 0x0400(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist_1;              // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0519(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue_1;             // 0x051A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x051B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x051C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1543[0x3];                                     // 0x051D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData_2;    // 0x0520(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist_2;              // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1544[0x7];                                     // 0x0639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData_3;    // 0x0640(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist_3;              // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1545[0x7];                                     // 0x0759(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0760(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue_1; // 0x0771(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1546[0x2];                                     // 0x0772(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_getQuestIconZOrder_ReturnValue_2;         // 0x0774(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestTargetWorldLocation_QuestName;    // 0x0778(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetQuestTargetWorldLocation_OutLocatedLevelNames; // 0x0788(0x0010)(ReferenceParm)
	TArray<struct FVector>                        CallFunc_GetQuestTargetWorldLocation_OutWorldLocations; // 0x0798(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetQuestTargetWorldLocation_ReturnValue;  // 0x07A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1547[0x3];                                     // 0x07A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x07AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x07B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1548[0x3];                                     // 0x07B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_3;                         // 0x07BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x07C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x07C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1549[0x6];                                     // 0x07CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_QuestIcon_C*                 CallFunc_Array_Get_Item_4;                         // 0x07D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_154A[0x3];                                     // 0x07D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x07DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x07E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_154B[0x3];                                     // 0x07E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x07E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x07F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMapWidget_QuestIcon_C*                 CallFunc_Create_ReturnValue;                       // 0x0808(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0810(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIfIconPositionCoincide_DoesCoincide; // 0x0814(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_154C[0x3];                                     // 0x0815(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CheckIfIconPositionCoincide_OutCoincideIconRegId; // 0x0818(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x081C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x081D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x081E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x081F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0820(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_QuestIcon_C*                 CallFunc_Array_Get_Item_5;                         // 0x0828(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindAcceptedQuestIndex_ReturnValue;       // 0x0830(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0834(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_154D[0x3];                                     // 0x0835(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_2;          // 0x0838(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x0848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue_2; // 0x0849(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x084A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x084B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x084C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x084D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x084E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x084F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0850(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0858(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x085C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue_2;             // 0x085D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154E[0x2];                                     // 0x085E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUnlockedQuestInfo                     CallFunc_Array_Get_Item_6;                         // 0x0860(0x0008)(NoDestructor)
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item_7;                         // 0x0868(0x0060)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x08C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_154F[0x3];                                     // 0x08C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x08CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x08D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x08D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x08D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x08D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1550[0x1];                                     // 0x08D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x08D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_UpdateQuestIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateQuestIcon");
static_assert(sizeof(MapWidget_Map_C_UpdateQuestIcon) == 0x0008E0, "Wrong size on MapWidget_Map_C_UpdateQuestIcon");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpUnlockQuestInfo) == 0x000000, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpUnlockQuestInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpQuestData) == 0x000008, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpQuestData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpParentMapId) == 0x000120, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpParentMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpRegIconPriorities) == 0x000130, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpRegIconPriorities' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpIconPriority) == 0x000140, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpIconPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpMapIconType) == 0x000144, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpMapIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpQuestCategory1) == 0x000145, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpQuestCategory1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpQuestIcon) == 0x000148, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpQuestIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpIsStatusClosed) == 0x000150, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpIsStatusClosed' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpCloseLocationId) == 0x000154, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpCloseLocationId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpQuestName) == 0x000160, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpQuestName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpCoincideIconRegId) == 0x000170, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpCoincideIconRegId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpQuestId) == 0x000174, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpQuestId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpQuestStatus) == 0x000178, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpQuestStatus' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpIconWorldLocation) == 0x00017C, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpIconWorldLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpIconId) == 0x000184, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpIconId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, TmpNetworkDataCache) == 0x000188, "Member 'MapWidget_Map_C_UpdateQuestIcon::TmpNetworkDataCache' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Loop_Counter_Variable) == 0x000190, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Array_Index_Variable) == 0x000194, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000198, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Loop_Counter_Variable_1) == 0x00019C, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001A0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Array_Index_Variable_1) == 0x0001A4, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, K2Node_CreateDelegate_OutputDelegate) == 0x0001A8, "Member 'MapWidget_Map_C_UpdateQuestIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Multiply_IntInt_ReturnValue) == 0x0001B8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0001C0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_getQuestIconZOrder_ReturnValue) == 0x0001C8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_getQuestIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestStatus_ReturnValue) == 0x0001CC, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_QuestMasterData) == 0x0001D0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_Exist) == 0x0002E8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestIconType_ReturnValue) == 0x0002E9, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002EA, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002EB, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_BooleanOR_ReturnValue) == 0x0002EC, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Length_ReturnValue) == 0x0002F0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Conv_NameToString_ReturnValue) == 0x0002F8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000308, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_CheckEventTermDataInstantNow_ReturnValue) == 0x000309, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_CheckEventTermDataInstantNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_IsDisplayQuestIconStandby_bDisplay) == 0x00030A, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_IsDisplayQuestIconStandby_bDisplay' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x00030B, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x00030C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x000318, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Array_Index_Variable_2) == 0x000328, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_getQuestIconZOrder_ReturnValue_1) == 0x00032C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_getQuestIconZOrder_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Add_ReturnValue) == 0x000330, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000334, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000338, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetTargetWorldLocation_IsTargetExists) == 0x00033C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetTargetWorldLocation_IsTargetExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetTargetWorldLocation_ReturnValue) == 0x000340, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetTargetWorldLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x00034C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetTargetLevelName_IsTargetExists) == 0x000354, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetTargetLevelName_IsTargetExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetTargetLevelName_ReturnValue) == 0x000358, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetTargetLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000368, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Loop_Counter_Variable_2) == 0x00036C, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Loop_Counter_Variable_3) == 0x000370, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000374, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Add_IntInt_ReturnValue_2) == 0x000378, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Add_IntInt_ReturnValue_3) == 0x00037C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, Temp_int_Array_Index_Variable_3) == 0x000380, "Member 'MapWidget_Map_C_UpdateQuestIcon::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item) == 0x000384, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00038C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetTooltipString_OutTooltipString) == 0x000390, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetTooltipString_OutTooltipString' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Concat_StrStr_ReturnValue) == 0x0003A0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetTextFromAsset_ReturnValue) == 0x0003B0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0003C0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0003D0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0003E0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item_1) == 0x0003E8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item_2) == 0x0003F0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_NotEqual_NameName_ReturnValue) == 0x0003F8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetLatestMainQuest_ReturnValue) == 0x0003FC, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetLatestMainQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_QuestMasterData_1) == 0x000400, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_QuestMasterData_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_Exist_1) == 0x000518, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_Exist_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000519, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestStatus_ReturnValue_1) == 0x00051A, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00051B, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00051C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_QuestMasterData_2) == 0x000520, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_QuestMasterData_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_Exist_2) == 0x000638, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_Exist_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_QuestMasterData_3) == 0x000640, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_QuestMasterData_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindQuestMasterData_Exist_3) == 0x000758, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindQuestMasterData_Exist_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000760, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000770, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_CheckEventTermDataInstantNow_ReturnValue_1) == 0x000771, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_CheckEventTermDataInstantNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_getQuestIconZOrder_ReturnValue_2) == 0x000774, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_getQuestIconZOrder_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestTargetWorldLocation_QuestName) == 0x000778, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestTargetWorldLocation_QuestName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestTargetWorldLocation_OutLocatedLevelNames) == 0x000788, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestTargetWorldLocation_OutLocatedLevelNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestTargetWorldLocation_OutWorldLocations) == 0x000798, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestTargetWorldLocation_OutWorldLocations' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestTargetWorldLocation_ReturnValue) == 0x0007A8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestTargetWorldLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0007AC, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x0007B0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Less_IntInt_ReturnValue_2) == 0x0007B8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item_3) == 0x0007BC, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Length_ReturnValue_2) == 0x0007C4, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x0007C8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Less_IntInt_ReturnValue_3) == 0x0007C9, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item_4) == 0x0007D0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_IsValid_ReturnValue) == 0x0007D8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Add_ReturnValue_1) == 0x0007DC, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Length_ReturnValue_3) == 0x0007E0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0007E4, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0007E8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0007F8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Create_ReturnValue) == 0x000808, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Length_ReturnValue_4) == 0x000810, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_CheckIfIconPositionCoincide_DoesCoincide) == 0x000814, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_CheckIfIconPositionCoincide_DoesCoincide' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_CheckIfIconPositionCoincide_OutCoincideIconRegId) == 0x000818, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_CheckIfIconPositionCoincide_OutCoincideIconRegId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Less_IntInt_ReturnValue_4) == 0x00081C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00081D, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00081E, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_BooleanOR_ReturnValue_1) == 0x00081F, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_CalcMapPosition_MapLocation) == 0x000820, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item_5) == 0x000828, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_FindAcceptedQuestIndex_ReturnValue) == 0x000830, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_FindAcceptedQuestIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000834, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Conv_NameToString_ReturnValue_2) == 0x000838, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Conv_NameToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue_3) == 0x000848, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_CheckEventTermDataInstantNow_ReturnValue_2) == 0x000849, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_CheckEventTermDataInstantNow_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x00084A, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x00084B, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x00084C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Greater_IntInt_ReturnValue_3) == 0x00084D, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_BooleanOR_ReturnValue_2) == 0x00084E, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_BooleanOR_ReturnValue_3) == 0x00084F, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_AddChildToCanvas_ReturnValue) == 0x000850, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Add_ReturnValue_2) == 0x000858, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_IsValid_ReturnValue_1) == 0x00085C, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetQuestStatus_ReturnValue_2) == 0x00085D, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetQuestStatus_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item_6) == 0x000860, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Get_Item_7) == 0x000868, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_BooleanAND_ReturnValue) == 0x0008C8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Length_ReturnValue_5) == 0x0008CC, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Array_Length_ReturnValue_6) == 0x0008D0, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Less_IntInt_ReturnValue_5) == 0x0008D4, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_Less_IntInt_ReturnValue_6) == 0x0008D5, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetNetworkDataCache_IsValid) == 0x0008D6, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestIcon, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0008D8, "Member 'MapWidget_Map_C_UpdateQuestIcon::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OtherSymbolIconSetting
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_Map_C_OtherSymbolIconSetting final
{
public:
	class UMapWidget_CommonSymbolIcon_C*          IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Prio;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Pos;                                               // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1551[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_OtherSymbolIconSetting) == 0x000008, "Wrong alignment on MapWidget_Map_C_OtherSymbolIconSetting");
static_assert(sizeof(MapWidget_Map_C_OtherSymbolIconSetting) == 0x000038, "Wrong size on MapWidget_Map_C_OtherSymbolIconSetting");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, IconWidget) == 0x000000, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::IconWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, Prio) == 0x000008, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::Prio' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, Pos) == 0x00000C, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::Pos' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, CallFunc_CalcMapPosition_MapLocation) == 0x000014, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, CallFunc_Multiply_IntInt_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, CallFunc_AddChildToCanvas_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OtherSymbolIconSetting, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'MapWidget_Map_C_OtherSymbolIconSetting::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToProfile
// 0x0180 (0x0180 - 0x0000)
struct MapWidget_Map_C_CreateOtherSymbolIconToProfile final
{
public:
	struct FSBCharacterProfileData                CharcterProfile;                                   // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         SymbolIndex;                                       // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1552[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          TmpSymbolIcon;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterProfileLocationData        TmpLocationData;                                   // 0x0038(0x0048)(Edit, BlueprintVisible)
	TArray<struct FSBCharacterProfileLocationData> TmpLocations;                                      // 0x0080(0x0010)(Edit, BlueprintVisible)
	ESBFacilityType                               TmpFacilityType;                                   // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1553[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TmpProfileId;                                      // 0x0094(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue; // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameModeCity_ReturnValue;               // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1554[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1555[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1556[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1557[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1558[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid; // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1559[0x5];                                     // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority; // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition; // 0x010C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_155A[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText; // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBCharacterProfileLocationData        CallFunc_Array_Get_Item_1;                         // 0x0128(0x0048)()
	int32                                         CallFunc_CreateCommonSymbolIcon_ReturnValue;       // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_CreateOtherSymbolIconToProfile) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateOtherSymbolIconToProfile");
static_assert(sizeof(MapWidget_Map_C_CreateOtherSymbolIconToProfile) == 0x000180, "Wrong size on MapWidget_Map_C_CreateOtherSymbolIconToProfile");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CharcterProfile) == 0x000000, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CharcterProfile' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, SymbolIndex) == 0x000028, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::SymbolIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, TmpSymbolIcon) == 0x000030, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::TmpSymbolIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, TmpLocationData) == 0x000038, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::TmpLocationData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, TmpLocations) == 0x000080, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::TmpLocations' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, TmpFacilityType) == 0x000090, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::TmpFacilityType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, TmpProfileId) == 0x000094, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::TmpProfileId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, Temp_int_Array_Index_Variable) == 0x00009C, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_CheckEventTermDataInstantNow_ReturnValue) == 0x0000A8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_CheckEventTermDataInstantNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A9, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_IsGameModeCity_ReturnValue) == 0x0000AA, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_IsGameModeCity_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Not_PreBool_ReturnValue) == 0x0000AB, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x0000B0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x0000C0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Array_Length_ReturnValue) == 0x0000C4, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, Temp_int_Loop_Counter_Variable) == 0x0000CC, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000D8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000D9, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000DA, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0000DB, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_BooleanOR_ReturnValue) == 0x0000DC, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_BooleanAND_ReturnValue) == 0x0000DD, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_BooleanOR_ReturnValue_1) == 0x0000DE, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_BooleanOR_ReturnValue_2) == 0x0000DF, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000E0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000E1, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000E2, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x0000E3, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_BooleanAND_ReturnValue_1) == 0x0000E4, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_ConvertParentMapId_ReturnValue) == 0x0000E8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_BooleanAND_ReturnValue_2) == 0x0000F8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0000F9, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid) == 0x0000FA, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture) == 0x000100, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority) == 0x000108, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition) == 0x00010C, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText) == 0x000118, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Array_Get_Item_1) == 0x000128, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_CreateCommonSymbolIcon_ReturnValue) == 0x000170, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_CreateCommonSymbolIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Array_Length_ReturnValue_1) == 0x000174, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToProfile, CallFunc_Less_IntInt_ReturnValue) == 0x000178, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToProfile::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToLocation
// 0x0688 (0x0688 - 0x0000)
struct MapWidget_Map_C_CreateOtherSymbolIconToLocation final
{
public:
	struct FSBLocationInfo                        LocationInfo;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                   Param_RowName;                                     // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimationFlag;                                     // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_155B[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SymbolIndex;                                       // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          SymbolIcon;                                        // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RaidIconFlag;                                      // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_155C[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBFieldStatusSetting                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x0090(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFieldStatus                                  CallFunc_EvaluateFieldStatus_ReturnValue;          // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_155D[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_155E[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_155F[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_2;          // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1560[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_3;          // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LocationIconVisibleCheck_Visible;         // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1561[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_PublicDungeon_DirectWarpCheck_IsOpen;     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1562[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1563[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_PublicDungeon_DirectWarpCheck_IsOpen_1;   // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1564[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x01A8(0x01E0)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x03AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x03B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1565[0x3];                                     // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index, class UMapWidget_TimeSymbolIcon_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x03B8(0x0010)(ZeroConstructor, NoDestructor)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue;                       // 0x03C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1566[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists_1;                    // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1567[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue_1;                 // 0x03E8(0x01E0)()
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue_1;           // 0x05C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1568[0x4];                                     // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_TimeSymbolIcon_C*            CallFunc_Create_ReturnValue_1;                     // 0x05D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x05D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x05DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1569[0x3];                                     // 0x05DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x05E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x05F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActivatedDungeon_ReturnValue;           // 0x05F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_Map_Icon_Info_by_Location_Info_IsMapIconValid; // 0x05F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMapSymbolIconType                            CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconType; // 0x05F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_156A[0x3];                                     // 0x05F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconPriority; // 0x05F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconWorldPosition; // 0x05FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_156B[0x4];                                     // 0x0604(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconTooltipText; // 0x0608(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Get_Map_Icon_Info_by_Location_Info_OutTermId; // 0x0618(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_156C[0x7];                                     // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue_2;                     // 0x0630(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0638(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0649(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_156D[0x6];                                     // 0x064A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_4;          // 0x0650(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetRaidBattleData_OutDungeonId;           // 0x0660(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetRaidBattleData_OutTermId;              // 0x0670(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRaidBattleData_ReturnValue;            // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_156E[0x3];                                     // 0x0681(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0684(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateOtherSymbolIconToLocation) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateOtherSymbolIconToLocation");
static_assert(sizeof(MapWidget_Map_C_CreateOtherSymbolIconToLocation) == 0x000688, "Wrong size on MapWidget_Map_C_CreateOtherSymbolIconToLocation");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, LocationInfo) == 0x000000, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::LocationInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, Param_RowName) == 0x000050, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::Param_RowName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, AnimationFlag) == 0x000058, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::AnimationFlag' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, SymbolIndex) == 0x00005C, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::SymbolIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, SymbolIcon) == 0x000060, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::SymbolIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, RaidIconFlag) == 0x000068, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::RaidIconFlag' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Conv_NameToString_ReturnValue) == 0x000070, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetDataTableRowFromName_OutRow) == 0x000090, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_EvaluateFieldStatus_ReturnValue) == 0x0000B1, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_EvaluateFieldStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Conv_NameToString_ReturnValue_1) == 0x0000B8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000C9, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetDisplayName_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_BooleanAND_ReturnValue) == 0x0000E0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_IsValid_ReturnValue) == 0x0000E1, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Conv_NameToString_ReturnValue_2) == 0x0000E8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Conv_NameToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x0000F8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x000108, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Conv_NameToString_ReturnValue_3) == 0x000110, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Conv_NameToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_LocationIconVisibleCheck_Visible) == 0x000120, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_LocationIconVisibleCheck_Visible' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000128, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000138, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_PublicDungeon_DirectWarpCheck_IsOpen) == 0x000148, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_PublicDungeon_DirectWarpCheck_IsOpen' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000150, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000160, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000170, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMasterDataManager_IsValid) == 0x000180, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMasterDataManager_ReturnValue) == 0x000188, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000190, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_PublicDungeon_DirectWarpCheck_IsOpen_1) == 0x0001A0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_PublicDungeon_DirectWarpCheck_IsOpen_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapInfo_IsExists) == 0x0001A1, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapInfo_ReturnValue) == 0x0001A8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetTextFromAsset_ReturnValue) == 0x000388, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000398, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Array_Add_ReturnValue) == 0x00039C, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_BreakVector_X) == 0x0003A0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_BreakVector_Y) == 0x0003A4, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_BreakVector_Z) == 0x0003A8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_MakeVector2D_ReturnValue) == 0x0003AC, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0003B4, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, K2Node_CreateDelegate_OutputDelegate) == 0x0003B8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Create_ReturnValue) == 0x0003C8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMasterDataManager_IsValid_1) == 0x0003D0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x0003D8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapInfo_IsExists_1) == 0x0003E0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapInfo_IsExists_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapInfo_ReturnValue_1) == 0x0003E8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMapIconZOrder_ReturnValue_1) == 0x0005C8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMapIconZOrder_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Create_ReturnValue_1) == 0x0005D0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Array_Add_ReturnValue_1) == 0x0005D8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMasterDataManager_IsValid_2) == 0x0005DC, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x0005E0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetSBPlayerState_ReturnValue) == 0x0005E8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_IsValid_ReturnValue_1) == 0x0005F0, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_IsValid_ReturnValue_2) == 0x0005F1, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_IsActivatedDungeon_ReturnValue) == 0x0005F2, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_IsActivatedDungeon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Get_Map_Icon_Info_by_Location_Info_IsMapIconValid) == 0x0005F3, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Get_Map_Icon_Info_by_Location_Info_IsMapIconValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconType) == 0x0005F4, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconPriority) == 0x0005F8, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconWorldPosition) == 0x0005FC, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconWorldPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconTooltipText) == 0x000608, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Get_Map_Icon_Info_by_Location_Info_OutIconTooltipText' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Get_Map_Icon_Info_by_Location_Info_OutTermId) == 0x000618, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Get_Map_Icon_Info_by_Location_Info_OutTermId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_BooleanOR_ReturnValue) == 0x000628, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Create_ReturnValue_2) == 0x000630, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_ConvertParentMapId_ReturnValue) == 0x000638, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, K2Node_SwitchEnum_CmpSuccess) == 0x000648, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000649, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Conv_NameToString_ReturnValue_4) == 0x000650, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Conv_NameToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetRaidBattleData_OutDungeonId) == 0x000660, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetRaidBattleData_OutDungeonId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetRaidBattleData_OutTermId) == 0x000670, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetRaidBattleData_OutTermId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_GetRaidBattleData_ReturnValue) == 0x000680, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_GetRaidBattleData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateOtherSymbolIconToLocation, CallFunc_Array_Add_ReturnValue_2) == 0x000684, "Member 'MapWidget_Map_C_CreateOtherSymbolIconToLocation::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateCommonSymbolIcon
// 0x0048 (0x0048 - 0x0000)
struct MapWidget_Map_C_CreateCommonSymbolIcon final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Prio;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Pos;                                               // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_156F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TooltipString;                                     // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1570[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          TmpSymbolIcon;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateCommonSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateCommonSymbolIcon");
static_assert(sizeof(MapWidget_Map_C_CreateCommonSymbolIcon) == 0x000048, "Wrong size on MapWidget_Map_C_CreateCommonSymbolIcon");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, InTexture) == 0x000000, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::InTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, Prio) == 0x000008, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::Prio' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, Pos) == 0x00000C, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::Pos' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, TooltipString) == 0x000018, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::TooltipString' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, TmpSymbolIcon) == 0x000030, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::TmpSymbolIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, CallFunc_Create_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateCommonSymbolIcon, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_CreateCommonSymbolIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateTimeSymbolIcon
// 0x0080 (0x0080 - 0x0000)
struct MapWidget_Map_C_CreateTimeSymbolIcon final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1571[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileLocationData        LocationData;                                      // 0x0008(0x0048)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMapWidget_CommonSymbolIcon_C*          TargetPosWidget;                                   // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InPriority;                                        // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index, class UMapWidget_TimeSymbolIcon_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1572[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_TimeSymbolIcon_C*            CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateTimeSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateTimeSymbolIcon");
static_assert(sizeof(MapWidget_Map_C_CreateTimeSymbolIcon) == 0x000080, "Wrong size on MapWidget_Map_C_CreateTimeSymbolIcon");
static_assert(offsetof(MapWidget_Map_C_CreateTimeSymbolIcon, InIndex) == 0x000000, "Member 'MapWidget_Map_C_CreateTimeSymbolIcon::InIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateTimeSymbolIcon, LocationData) == 0x000008, "Member 'MapWidget_Map_C_CreateTimeSymbolIcon::LocationData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateTimeSymbolIcon, TargetPosWidget) == 0x000050, "Member 'MapWidget_Map_C_CreateTimeSymbolIcon::TargetPosWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateTimeSymbolIcon, InPriority) == 0x000058, "Member 'MapWidget_Map_C_CreateTimeSymbolIcon::InPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateTimeSymbolIcon, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'MapWidget_Map_C_CreateTimeSymbolIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateTimeSymbolIcon, CallFunc_Create_ReturnValue) == 0x000070, "Member 'MapWidget_Map_C_CreateTimeSymbolIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateTimeSymbolIcon, CallFunc_Array_Add_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_CreateTimeSymbolIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearOtherSymbolIcon
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_Map_C_ClearOtherSymbolIcon final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1573[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_TimeSymbolIcon_C*            CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1574[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1575[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearOtherSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearOtherSymbolIcon");
static_assert(sizeof(MapWidget_Map_C_ClearOtherSymbolIcon) == 0x000040, "Wrong size on MapWidget_Map_C_ClearOtherSymbolIcon");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Array_Get_Item) == 0x000018, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_IsValid_ReturnValue_1) == 0x00003C, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearOtherSymbolIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x00003D, "Member 'MapWidget_Map_C_ClearOtherSymbolIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateOtherSymbolIcon
// 0x0118 (0x0118 - 0x0000)
struct MapWidget_Map_C_UpdateOtherSymbolIcon final
{
public:
	TArray<struct FSBCharacterProfileData>        TmpCharaProfileDatas;                              // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          TmpIsMapIconValid;                                 // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1576[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLocationInfo>                TmpMapIconLocationInfos;                           // 0x0018(0x0010)(Edit, BlueprintVisible)
	struct FVector2D                              TmpIconPosition;                                   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            TmpIconType;                                       // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         TmpIconPriority;                                   // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1577[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpIconId;                                         // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0050(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1578[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1579[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0x00A0(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_157A[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLocationInfo                        CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00C0(0x0050)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdateOtherSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateOtherSymbolIcon");
static_assert(sizeof(MapWidget_Map_C_UpdateOtherSymbolIcon) == 0x000118, "Wrong size on MapWidget_Map_C_UpdateOtherSymbolIcon");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, TmpCharaProfileDatas) == 0x000000, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::TmpCharaProfileDatas' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, TmpIsMapIconValid) == 0x000010, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::TmpIsMapIconValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, TmpMapIconLocationInfos) == 0x000018, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::TmpMapIconLocationInfos' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, TmpIconPosition) == 0x000028, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::TmpIconPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, TmpIconType) == 0x000030, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::TmpIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, TmpIconPriority) == 0x000031, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::TmpIconPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, TmpIconId) == 0x000034, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::TmpIconId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, Temp_int_Array_Index_Variable) == 0x000038, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, Temp_int_Array_Index_Variable_1) == 0x000044, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, Temp_int_Loop_Counter_Variable_1) == 0x000048, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000050, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Array_Get_Item) == 0x000060, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000099, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_GetDataTableRowNames_OutRowNames_1) == 0x0000A0, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_GetDataTableRowNames_OutRowNames_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000C0, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000110, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateOtherSymbolIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000111, "Member 'MapWidget_Map_C_UpdateOtherSymbolIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearQuestIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearQuestIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_157B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_QuestIcon_C*                 CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearQuestIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearQuestIcon");
static_assert(sizeof(MapWidget_Map_C_ClearQuestIcon) == 0x000020, "Wrong size on MapWidget_Map_C_ClearQuestIcon");
static_assert(offsetof(MapWidget_Map_C_ClearQuestIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearQuestIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearQuestIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearQuestIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestIcon, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearQuestIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestIcon, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClearQuestIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'MapWidget_Map_C_ClearQuestIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CalcPinPosition
// 0x0090 (0x0090 - 0x0000)
struct MapWidget_Map_C_CalcPinPosition final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPin;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPinInfo                            InMapPinInfo;                                      // 0x0008(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector2D                              HalfSize;                                          // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Vector_IsZero_ReturnValue;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_157C[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_157D[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPinIconSize_OutSize;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CalcPinPosition) == 0x000008, "Wrong alignment on MapWidget_Map_C_CalcPinPosition");
static_assert(sizeof(MapWidget_Map_C_CalcPinPosition) == 0x000090, "Wrong size on MapWidget_Map_C_CalcPinPosition");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, InPin) == 0x000000, "Member 'MapWidget_Map_C_CalcPinPosition::InPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, InMapPinInfo) == 0x000008, "Member 'MapWidget_Map_C_CalcPinPosition::InMapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, HalfSize) == 0x000048, "Member 'MapWidget_Map_C_CalcPinPosition::HalfSize' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, Position) == 0x000050, "Member 'MapWidget_Map_C_CalcPinPosition::Position' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000058, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_Vector_IsZero_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_Vector_IsZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000064, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_Not_PreBool_ReturnValue) == 0x00006C, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_CalcMapPosition_MapLocation) == 0x000070, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_GetPinIconSize_OutSize) == 0x000078, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_GetPinIconSize_OutSize' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000080, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcPinPosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_CalcPinPosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CheckIfWarpDestIsAbsoluteFree_ForAlpha
// 0x0060 (0x0060 - 0x0000)
struct MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha final
{
public:
	struct FWarpPointMasterData                   InWarpPointMasterData;                             // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsAbsoluteFree;                                    // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_157E[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpAbsoluteFreeWarpPointPortalName;                // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha) == 0x000008, "Wrong alignment on MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha");
static_assert(sizeof(MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha) == 0x000060, "Wrong size on MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha");
static_assert(offsetof(MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha, InWarpPointMasterData) == 0x000000, "Member 'MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha::InWarpPointMasterData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha, IsAbsoluteFree) == 0x000040, "Member 'MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha::IsAbsoluteFree' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha, TmpAbsoluteFreeWarpPointPortalName) == 0x000048, "Member 'MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha::TmpAbsoluteFreeWarpPointPortalName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000059, "Member 'MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.DoWarpFromWarpBox
// 0x0070 (0x0070 - 0x0000)
struct MapWidget_Map_C_DoWarpFromWarpBox final
{
public:
	struct FSBMasterWarpPoint                     InWarpPointData;                                   // 0x0000(0x0068)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_DoWarpFromWarpBox) == 0x000008, "Wrong alignment on MapWidget_Map_C_DoWarpFromWarpBox");
static_assert(sizeof(MapWidget_Map_C_DoWarpFromWarpBox) == 0x000070, "Wrong size on MapWidget_Map_C_DoWarpFromWarpBox");
static_assert(offsetof(MapWidget_Map_C_DoWarpFromWarpBox, InWarpPointData) == 0x000000, "Member 'MapWidget_Map_C_DoWarpFromWarpBox::InWarpPointData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DoWarpFromWarpBox, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'MapWidget_Map_C_DoWarpFromWarpBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetupPlayerIcon
// 0x0220 (0x0220 - 0x0000)
struct MapWidget_Map_C_SetupPlayerIcon final
{
public:
	bool                                          IsIconVisible;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_157F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 WorkMapName;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBLocationInfo                        LocationData;                                      // 0x0018(0x0050)(Edit, BlueprintVisible)
	struct FVector2D                              MapPosition;                                       // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CurrPlayerCursorPosition;                          // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameModePublicDungeon_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1580[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMapContentIdtoMapName_MapName;         // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapContentIdtoMapName_ReturnValue;     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1581[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1582[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1583[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1584[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation_1;            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLocationInfo                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0168(0x0050)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1585[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x01BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1586[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLocationInfo                        CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x01C8(0x0050)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetupPlayerIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetupPlayerIcon");
static_assert(sizeof(MapWidget_Map_C_SetupPlayerIcon) == 0x000220, "Wrong size on MapWidget_Map_C_SetupPlayerIcon");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, IsIconVisible) == 0x000000, "Member 'MapWidget_Map_C_SetupPlayerIcon::IsIconVisible' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, WorkMapName) == 0x000008, "Member 'MapWidget_Map_C_SetupPlayerIcon::WorkMapName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, LocationData) == 0x000018, "Member 'MapWidget_Map_C_SetupPlayerIcon::LocationData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, MapPosition) == 0x000068, "Member 'MapWidget_Map_C_SetupPlayerIcon::MapPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CurrPlayerCursorPosition) == 0x000070, "Member 'MapWidget_Map_C_SetupPlayerIcon::CurrPlayerCursorPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, Temp_bool_Variable) == 0x000078, "Member 'MapWidget_Map_C_SetupPlayerIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, Temp_byte_Variable) == 0x000079, "Member 'MapWidget_Map_C_SetupPlayerIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, Temp_byte_Variable_1) == 0x00007A, "Member 'MapWidget_Map_C_SetupPlayerIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, K2Node_Select_Default) == 0x00007B, "Member 'MapWidget_Map_C_SetupPlayerIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakVector_X) == 0x00007C, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakVector_Y) == 0x000080, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakVector_Z) == 0x000084, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_MakeVector2D_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_CalcMapPosition_MapLocation) == 0x000090, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000A0, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_IsGameModePublicDungeon_ReturnValue) == 0x0000A8, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_IsGameModePublicDungeon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_Conv_NameToString_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0000C0, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetMapContentIdtoMapName_MapName) == 0x0000C8, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetMapContentIdtoMapName_MapName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetMapContentIdtoMapName_ReturnValue) == 0x0000D8, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetMapContentIdtoMapName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_IsValid_ReturnValue_1) == 0x0000D9, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_Replace_ReturnValue) == 0x0000E0, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakRotator_Roll) == 0x0000FC, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakRotator_Pitch) == 0x000100, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakRotator_Yaw) == 0x000104, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_Add_FloatFloat_ReturnValue) == 0x000108, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_IsValid_ReturnValue_2) == 0x00010C, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000110, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000118, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000128, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakVector_X_1) == 0x000130, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakVector_Y_1) == 0x000134, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_BreakVector_Z_1) == 0x000138, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_IsValid_ReturnValue_3) == 0x00013C, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_MakeVector2D_ReturnValue_1) == 0x000140, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_CalcMapPosition_MapLocation_1) == 0x000148, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_CalcMapPosition_MapLocation_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000150, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_Replace_ReturnValue_1) == 0x000158, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000168, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001B8, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0001BC, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0001C8, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000218, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupPlayerIcon, CallFunc_Contains_ReturnValue) == 0x000219, "Member 'MapWidget_Map_C_SetupPlayerIcon::CallFunc_Contains_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdatePlayerIcon
// 0x0098 (0x0098 - 0x0000)
struct MapWidget_Map_C_UpdatePlayerIcon final
{
public:
	struct FVector2D                              CalcPosition;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             PlayerCharacter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1587[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCursorAngle_OutCursorAngle;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1588[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1589[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158A[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdatePlayerIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdatePlayerIcon");
static_assert(sizeof(MapWidget_Map_C_UpdatePlayerIcon) == 0x000098, "Wrong size on MapWidget_Map_C_UpdatePlayerIcon");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CalcPosition) == 0x000000, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CalcPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, PlayerCharacter) == 0x000008, "Member 'MapWidget_Map_C_UpdatePlayerIcon::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'MapWidget_Map_C_UpdatePlayerIcon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MapWidget_Map_C_UpdatePlayerIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_BreakVector_X) == 0x000034, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_BreakVector_Y) == 0x000038, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_BreakVector_Z) == 0x00003C, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_BreakRotator_Roll) == 0x000040, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_BreakRotator_Pitch) == 0x000044, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_BreakRotator_Yaw) == 0x000048, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_MakeVector2D_ReturnValue) == 0x00004C, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_Add_FloatFloat_ReturnValue) == 0x000054, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_CalcMapPosition_MapLocation) == 0x000058, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_GetCursorAngle_OutCursorAngle) == 0x000068, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_GetCursorAngle_OutCursorAngle' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x00006C, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_IsValid_ReturnValue) == 0x00006D, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000070, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_GetVisibility_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_GetPosition_ReturnValue) == 0x00007C, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000084, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdatePlayerIcon, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_UpdatePlayerIcon::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateInterruptQuestIcon
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_Map_C_CreateInterruptQuestIcon final
{
public:
	EMapSymbolIconType                            TmpSymbolIconType;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_158B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBInterruptQuestManager*               TmpInterruptQuestManager;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpJoinedInterruptQuestInstId;                     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TmpJoinedInterruptQuestId;                         // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158C[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateInterruptQuestIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateInterruptQuestIcon");
static_assert(sizeof(MapWidget_Map_C_CreateInterruptQuestIcon) == 0x000040, "Wrong size on MapWidget_Map_C_CreateInterruptQuestIcon");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, TmpSymbolIconType) == 0x000000, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::TmpSymbolIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, TmpInterruptQuestManager) == 0x000008, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::TmpInterruptQuestManager' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, TmpJoinedInterruptQuestInstId) == 0x000010, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::TmpJoinedInterruptQuestInstId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, TmpJoinedInterruptQuestId) == 0x000014, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::TmpJoinedInterruptQuestId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, CallFunc_GetMapIconZOrder_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, Temp_int_Variable) == 0x000024, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, CallFunc_Create_ReturnValue) == 0x000030, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateInterruptQuestIcon, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_CreateInterruptQuestIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearInterruptQuestIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearInterruptQuestIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_158D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearInterruptQuestIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearInterruptQuestIcon");
static_assert(sizeof(MapWidget_Map_C_ClearInterruptQuestIcon) == 0x000020, "Wrong size on MapWidget_Map_C_ClearInterruptQuestIcon");
static_assert(offsetof(MapWidget_Map_C_ClearInterruptQuestIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearInterruptQuestIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearInterruptQuestIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearInterruptQuestIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearInterruptQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearInterruptQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearInterruptQuestIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearInterruptQuestIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearInterruptQuestIcon, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearInterruptQuestIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearInterruptQuestIcon, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClearInterruptQuestIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearInterruptQuestIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'MapWidget_Map_C_ClearInterruptQuestIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestIcon
// 0x0138 (0x0138 - 0x0000)
struct MapWidget_Map_C_UpdateInterruptQuestIcon final
{
public:
	struct FVector2D                              TmpCalcPosition;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TmpQuestName;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          TmpIconObjRef;                                     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBInterruptQuestManager*               TmpInterruptQuestManager;                          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpJoinedInterruptQuestInstId;                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TmpJoinedInterruptQuestId;                         // 0x002C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_158E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_158F[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTooltipText_OutTooltipText;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1590[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1591[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1592[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1593[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOccurringInterruptQuestInfos_IsQuestInfoValid; // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1594[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMapInterruptQuestInfo>         CallFunc_GetOccurringInterruptQuestInfos_OutQuestInfos; // 0x00E0(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1595[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapInterruptQuestInfo                 CallFunc_Array_Get_Item_2;                         // 0x00F8(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1596[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_UpdateInterruptQuestIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateInterruptQuestIcon");
static_assert(sizeof(MapWidget_Map_C_UpdateInterruptQuestIcon) == 0x000138, "Wrong size on MapWidget_Map_C_UpdateInterruptQuestIcon");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, TmpCalcPosition) == 0x000000, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::TmpCalcPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, TmpQuestName) == 0x000008, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::TmpQuestName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, TmpIconObjRef) == 0x000018, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::TmpIconObjRef' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, TmpInterruptQuestManager) == 0x000020, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::TmpInterruptQuestManager' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, TmpJoinedInterruptQuestInstId) == 0x000028, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::TmpJoinedInterruptQuestInstId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, TmpJoinedInterruptQuestId) == 0x00002C, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::TmpJoinedInterruptQuestId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, Temp_int_Array_Index_Variable) == 0x000034, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, Temp_int_Loop_Counter_Variable_1) == 0x00003C, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, Temp_int_Array_Index_Variable_1) == 0x000048, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000080, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_GetTooltipText_OutTooltipText) == 0x000088, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_GetTooltipText_OutTooltipText' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000099, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_GetVisibility_ReturnValue) == 0x0000A9, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_IsValid_ReturnValue_2) == 0x0000B9, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0000BC, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C0, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_GetCurrentLevelName_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_GetOccurringInterruptQuestInfos_IsQuestInfoValid) == 0x0000D8, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_GetOccurringInterruptQuestInfos_IsQuestInfoValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_GetOccurringInterruptQuestInfos_OutQuestInfos) == 0x0000E0, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_GetOccurringInterruptQuestInfos_OutQuestInfos' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Array_Get_Item_2) == 0x0000F8, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Array_Length_ReturnValue_2) == 0x000120, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000124, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_Less_IntInt_ReturnValue_2) == 0x00012C, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestIcon, CallFunc_CalcMapPosition_MapLocation) == 0x000130, "Member 'MapWidget_Map_C_UpdateInterruptQuestIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.TraverseCloudUpdate
// 0x00A0 (0x00A0 - 0x0000)
struct MapWidget_Map_C_TraverseCloudUpdate final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Floor;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TmpMapSizeScale;                                   // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpMapImageSizeHeight;                             // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpMapImageSizeWidth;                              // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpDefaultMapImageSizeHeight;                      // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpDefaultMapImageSizeWidth;                       // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TmpMapSize;                                        // 0x002C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1597[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1598[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1599[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159A[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_3;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapBodySize_ReturnValue;               // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159B[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159C[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_3;       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159D[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_3;                           // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_TraverseCloudUpdate) == 0x000008, "Wrong alignment on MapWidget_Map_C_TraverseCloudUpdate");
static_assert(sizeof(MapWidget_Map_C_TraverseCloudUpdate) == 0x0000A0, "Wrong size on MapWidget_Map_C_TraverseCloudUpdate");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, InMapId) == 0x000000, "Member 'MapWidget_Map_C_TraverseCloudUpdate::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Floor) == 0x000010, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Floor' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, TmpMapSizeScale) == 0x000014, "Member 'MapWidget_Map_C_TraverseCloudUpdate::TmpMapSizeScale' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, TmpMapImageSizeHeight) == 0x00001C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::TmpMapImageSizeHeight' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, TmpMapImageSizeWidth) == 0x000020, "Member 'MapWidget_Map_C_TraverseCloudUpdate::TmpMapImageSizeWidth' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, TmpDefaultMapImageSizeHeight) == 0x000024, "Member 'MapWidget_Map_C_TraverseCloudUpdate::TmpDefaultMapImageSizeHeight' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, TmpDefaultMapImageSizeWidth) == 0x000028, "Member 'MapWidget_Map_C_TraverseCloudUpdate::TmpDefaultMapImageSizeWidth' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, TmpMapSize) == 0x00002C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::TmpMapSize' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_bool_Variable) == 0x000034, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_float_Variable) == 0x000038, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_bool_Variable_1) == 0x00003C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_float_Variable_1) == 0x000040, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_bool_Variable_2) == 0x000044, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_float_Variable_2) == 0x000048, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_bool_Variable_3) == 0x00004C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, Temp_float_Variable_3) == 0x000050, "Member 'MapWidget_Map_C_TraverseCloudUpdate::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_GetMapBodySize_ReturnValue) == 0x000054, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_GetMapBodySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000060, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_MakeVector2D_ReturnValue) == 0x000064, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_BreakVector2D_X) == 0x00006C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_BreakVector2D_Y) == 0x000070, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000074, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000075, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, K2Node_Select_Default) == 0x000078, "Member 'MapWidget_Map_C_TraverseCloudUpdate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, K2Node_Select_Default_1) == 0x00007C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_BreakVector2D_X_1) == 0x000080, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_BreakVector2D_Y_1) == 0x000084, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_LessEqual_FloatFloat_ReturnValue_2) == 0x000090, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_LessEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, K2Node_Select_Default_2) == 0x000094, "Member 'MapWidget_Map_C_TraverseCloudUpdate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, CallFunc_LessEqual_FloatFloat_ReturnValue_3) == 0x000098, "Member 'MapWidget_Map_C_TraverseCloudUpdate::CallFunc_LessEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TraverseCloudUpdate, K2Node_Select_Default_3) == 0x00009C, "Member 'MapWidget_Map_C_TraverseCloudUpdate::K2Node_Select_Default_3' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateNamedEnemyIcon
// 0x0028 (0x0028 - 0x0000)
struct MapWidget_Map_C_CreateNamedEnemyIcon final
{
public:
	EMapSymbolIconType                            TmpSymbolIconType;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A0[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CreateNamedEnemyIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateNamedEnemyIcon");
static_assert(sizeof(MapWidget_Map_C_CreateNamedEnemyIcon) == 0x000028, "Wrong size on MapWidget_Map_C_CreateNamedEnemyIcon");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, TmpSymbolIconType) == 0x000000, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::TmpSymbolIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, Temp_int_Variable) == 0x000008, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateNamedEnemyIcon, CallFunc_Array_Add_ReturnValue) == 0x000024, "Member 'MapWidget_Map_C_CreateNamedEnemyIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearNamedEnemyIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearNamedEnemyIcon final
{
public:
	EMapSymbolIconType                            TmpSymbolIconType;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearNamedEnemyIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearNamedEnemyIcon");
static_assert(sizeof(MapWidget_Map_C_ClearNamedEnemyIcon) == 0x000020, "Wrong size on MapWidget_Map_C_ClearNamedEnemyIcon");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, TmpSymbolIconType) == 0x000000, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::TmpSymbolIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearNamedEnemyIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'MapWidget_Map_C_ClearNamedEnemyIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateNamedEnemyIcon
// 0x0338 (0x0338 - 0x0000)
struct MapWidget_Map_C_UpdateNamedEnemyIcon final
{
public:
	struct FSBPlayerNamedEnemyParam               TmpNamedEnemyParam;                                // 0x0000(0x0028)(Edit, BlueprintVisible)
	int32                                         TmpEnemyLevel;                                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A2[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      TmpEnemyCharacter;                                 // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TmpEnemyName;                                      // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpEnemyID;                                        // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          TmpIconObjRef;                                     // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TmpCalcPosition;                                   // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         TmpPlayerState;                                    // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterProfileData>        TmpCharaProfileDatas;                              // 0x0070(0x0010)(Edit, BlueprintVisible)
	bool                                          TmpIsMapIconValid;                                 // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A3[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLocationInfo>                TmpMapIconLocationInfos;                           // 0x0088(0x0010)(Edit, BlueprintVisible)
	struct FVector2D                              TmpIconPosition;                                   // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            TmpIconType;                                       // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         TmpIconPriority;                                   // 0x00A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A4[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpIconId;                                         // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A5[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A6[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetNamedEnemyLevelColor_OutColor;         // 0x00E0(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A7[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A8[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A9[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15AA[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15AB[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15AC[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerNamedEnemyParam>       CallFunc_BP_GetNamedEnemyParamList_ReturnValue;    // 0x01C0(0x0010)(ReferenceParm)
	struct FSBPlayerNamedEnemyParam               CallFunc_Array_Get_Item;                           // 0x01D0(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15AD[0x3];                                     // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15AE[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x020C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetEnemyParamMasterData_IsExists;         // 0x0215(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15AF[0x2];                                     // 0x0216(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnemyParamMasterData                  CallFunc_GetEnemyParamMasterData_ReturnValue;      // 0x0218(0x00D8)()
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item_1;                         // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnemyName_ReturnValue;                 // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B0[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B1[0x2];                                     // 0x031E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15B2[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item_2;                         // 0x0328(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdateNamedEnemyIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateNamedEnemyIcon");
static_assert(sizeof(MapWidget_Map_C_UpdateNamedEnemyIcon) == 0x000338, "Wrong size on MapWidget_Map_C_UpdateNamedEnemyIcon");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpNamedEnemyParam) == 0x000000, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpNamedEnemyParam' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpEnemyLevel) == 0x000028, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpEnemyLevel' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpEnemyCharacter) == 0x000030, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpEnemyCharacter' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpEnemyName) == 0x000038, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpEnemyName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpEnemyID) == 0x000048, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpEnemyID' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpIconObjRef) == 0x000058, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpIconObjRef' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpCalcPosition) == 0x000060, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpCalcPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpPlayerState) == 0x000068, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpPlayerState' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpCharaProfileDatas) == 0x000070, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpCharaProfileDatas' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpIsMapIconValid) == 0x000080, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpIsMapIconValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpMapIconLocationInfos) == 0x000088, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpMapIconLocationInfos' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpIconPosition) == 0x000098, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpIconPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpIconType) == 0x0000A0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpIconPriority) == 0x0000A1, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpIconPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, TmpIconId) == 0x0000A4, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::TmpIconId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, Temp_int_Array_Index_Variable_1) == 0x0000C8, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x0000CC, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_CalcMapPosition_MapLocation) == 0x0000D4, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetNamedEnemyLevelColor_OutColor) == 0x0000E0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetNamedEnemyLevelColor_OutColor' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000108, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Concat_StrStr_ReturnValue) == 0x000118, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000128, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000138, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetMasterDataManager_IsValid) == 0x000148, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetMasterDataManager_ReturnValue) == 0x000150, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000158, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, Temp_int_Loop_Counter_Variable_1) == 0x000178, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x000180, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000190, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000198, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001A8, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetVisibility_ReturnValue) == 0x0001A9, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x0001B0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001B8, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_BP_GetNamedEnemyParamList_ReturnValue) == 0x0001C0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_BP_GetNamedEnemyParamList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Array_Length_ReturnValue) == 0x0001F8, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0001FC, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000200, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_IsValid_ReturnValue) == 0x000208, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetPosition_ReturnValue) == 0x00020C, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x000214, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetEnemyParamMasterData_IsExists) == 0x000215, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetEnemyParamMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetEnemyParamMasterData_ReturnValue) == 0x000218, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetEnemyParamMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Array_Get_Item_1) == 0x0002F0, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetEnemyName_ReturnValue) == 0x0002F8, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetEnemyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_IsValid_ReturnValue_1) == 0x000308, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_GetSBPlayerState_ReturnValue) == 0x000310, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Array_Length_ReturnValue_1) == 0x000318, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_IsValid_ReturnValue_2) == 0x00031C, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x00031D, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Array_Length_ReturnValue_2) == 0x000320, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Array_Get_Item_2) == 0x000328, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_Less_IntInt_ReturnValue_2) == 0x000330, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateNamedEnemyIcon, CallFunc_IsValid_ReturnValue_3) == 0x000331, "Member 'MapWidget_Map_C_UpdateNamedEnemyIcon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetupMapPlaceNamePlates
// 0x00B8 (0x00B8 - 0x0000)
struct MapWidget_Map_C_SetupMapPlaceNamePlates final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           LocalRowNames;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	class FString                                 LocalMapId;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B3[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0038(0x0010)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapPlaceNamePlateConfig             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B4[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B5[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PlaceNamePlate_C*            CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00A0(0x0010)(ReferenceParm)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_SetupMapPlaceNamePlates) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetupMapPlaceNamePlates");
static_assert(sizeof(MapWidget_Map_C_SetupMapPlaceNamePlates) == 0x0000B8, "Wrong size on MapWidget_Map_C_SetupMapPlaceNamePlates");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, InMapId) == 0x000000, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, LocalRowNames) == 0x000010, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::LocalRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, LocalMapId) == 0x000020, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::LocalMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, Temp_int_Array_Index_Variable) == 0x000030, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, K2Node_MakeStruct_Anchors) == 0x000038, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_Array_Get_Item) == 0x00004C, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_Less_IntInt_ReturnValue) == 0x000079, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_Conv_NameToString_ReturnValue) == 0x000080, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_Contains_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_Create_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000A0, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetupMapPlaceNamePlates, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_SetupMapPlaceNamePlates::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.RecalculateMapPlaceNamePlatePositions
// 0x0158 (0x0158 - 0x0000)
struct MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions final
{
public:
	struct FVector2D                              InMapImageSize;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InMapId;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         LocalMapSizeHeight;                                // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalMapSizeWidth;                                 // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalChildCnt;                                     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalMapImageSizeHeight;                           // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalMapImageSizeWidth;                            // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalDefaultMapImageSizeHeight;                    // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalDefaultMapImageSizeWidth;                     // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15B6[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalRowNames;                                     // 0x0038(0x0010)(Edit, BlueprintVisible)
	class FString                                 LocalMapId;                                        // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              LocalMapImageSize;                                 // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B7[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_3;       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B8[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B9[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15BA[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0098(0x0010)(ReferenceParm)
	float                                         K2Node_Select_Default_2;                           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15BB[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapPlaceNamePlateConfig             CallFunc_GetDataTableRowFromName_OutRow;           // 0x00D0(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15BC[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15BD[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15BE[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15BF[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C0[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_3;                           // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions) == 0x000008, "Wrong alignment on MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions");
static_assert(sizeof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions) == 0x000158, "Wrong size on MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, InMapImageSize) == 0x000000, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::InMapImageSize' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, InMapId) == 0x000008, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalMapSizeHeight) == 0x000018, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalMapSizeHeight' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalMapSizeWidth) == 0x00001C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalMapSizeWidth' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalChildCnt) == 0x000020, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalChildCnt' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalMapImageSizeHeight) == 0x000024, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalMapImageSizeHeight' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalMapImageSizeWidth) == 0x000028, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalMapImageSizeWidth' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalDefaultMapImageSizeHeight) == 0x00002C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalDefaultMapImageSizeHeight' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalDefaultMapImageSizeWidth) == 0x000030, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalDefaultMapImageSizeWidth' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalRowNames) == 0x000038, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalMapId) == 0x000048, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, LocalMapImageSize) == 0x000058, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::LocalMapImageSize' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_bool_Variable) == 0x000060, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_float_Variable) == 0x000064, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_int_Array_Index_Variable) == 0x000070, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_bool_Variable_1) == 0x000074, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000075, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000076, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_LessEqual_FloatFloat_ReturnValue_2) == 0x000077, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_LessEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_LessEqual_FloatFloat_ReturnValue_3) == 0x000078, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_LessEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_float_Variable_1) == 0x00007C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, K2Node_Select_Default) == 0x000080, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_bool_Variable_2) == 0x000084, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_float_Variable_2) == 0x000088, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, K2Node_Select_Default_1) == 0x00008C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_bool_Variable_3) == 0x000090, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000098, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, K2Node_Select_Default_2) == 0x0000A8, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_int_Variable) == 0x0000AC, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B4, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000BC, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_GetChildAt_ReturnValue) == 0x0000C8, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000D0, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_IsValid_ReturnValue_1) == 0x0000F1, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000F8, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_BreakVector2D_X) == 0x000100, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_BreakVector2D_Y) == 0x000104, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_IsValid_ReturnValue_2) == 0x000108, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00010C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000110, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Conv_NameToString_ReturnValue) == 0x000118, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_MakeVector2D_ReturnValue) == 0x000128, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Contains_ReturnValue) == 0x000130, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Array_Length_ReturnValue) == 0x000134, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, Temp_float_Variable_3) == 0x000138, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_Less_IntInt_ReturnValue) == 0x00013C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, K2Node_Select_Default_3) == 0x000140, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_BreakVector2D_X_1) == 0x000144, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_BreakVector2D_Y_1) == 0x000148, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_BreakVector2D_X_2) == 0x00014C, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions, CallFunc_BreakVector2D_Y_2) == 0x000150, "Member 'MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions::CallFunc_BreakVector2D_Y_2' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateResearchTeamSymbolIcon
// 0x0228 (0x0228 - 0x0000)
struct MapWidget_Map_C_CreateResearchTeamSymbolIcon final
{
public:
	class UMapWidget_CommonSymbolIcon_C*          TmpSymbolIcon;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsResearchTeamValid;                            // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C1[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileLocationData        TmpLocationData;                                   // 0x0010(0x0048)(Edit, BlueprintVisible)
	TArray<struct FSBCharacterProfileLocationData> TmpLocations;                                      // 0x0058(0x0010)(Edit, BlueprintVisible)
	class FName                                   TmpProfileId;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterProfileData                TmpCharaProfileData;                               // 0x0070(0x0028)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C2[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBResearchTeamData                    CallFunc_Array_Get_Item;                           // 0x00B8(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C3[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C4[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileLocationData        CallFunc_Array_Get_Item_1;                         // 0x0108(0x0048)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C5[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid; // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C6[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority; // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition; // 0x016C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C7[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText; // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue;                       // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C8[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C9[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15CA[0x1];                                     // 0x01D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x01D8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15CB[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x01F8(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_CreateResearchTeamSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateResearchTeamSymbolIcon");
static_assert(sizeof(MapWidget_Map_C_CreateResearchTeamSymbolIcon) == 0x000228, "Wrong size on MapWidget_Map_C_CreateResearchTeamSymbolIcon");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, TmpSymbolIcon) == 0x000000, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::TmpSymbolIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, TmpIsResearchTeamValid) == 0x000008, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::TmpIsResearchTeamValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, TmpLocationData) == 0x000010, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::TmpLocationData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, TmpLocations) == 0x000058, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::TmpLocations' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, TmpProfileId) == 0x000068, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::TmpProfileId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, TmpCharaProfileData) == 0x000070, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::TmpCharaProfileData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, Temp_int_Array_Index_Variable) == 0x000098, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, Temp_int_Loop_Counter_Variable) == 0x00009C, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, Temp_int_Array_Index_Variable_1) == 0x0000A4, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x0000A8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Not_PreBool_ReturnValue) == 0x0000A9, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, Temp_int_Loop_Counter_Variable_1) == 0x0000AC, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B0, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, Temp_int_Array_Index_Variable_2) == 0x0000B4, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F4, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0000F8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000FC, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x0000FD, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000FE, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_BooleanOR_ReturnValue) == 0x0000FF, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_BooleanOR_ReturnValue_1) == 0x000100, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Length_ReturnValue_2) == 0x000150, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000154, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Add_ReturnValue) == 0x000158, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid) == 0x00015C, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture) == 0x000160, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority) == 0x000168, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition) == 0x00016C, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText) == 0x000178, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Conv_NameToString_ReturnValue) == 0x000188, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Create_ReturnValue) == 0x000198, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001A0, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_BooleanAND_ReturnValue) == 0x0001A1, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x0001A8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x0001B8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001B9, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, Temp_int_Loop_Counter_Variable_2) == 0x0001BC, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x0001C0, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0001D0, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D1, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x0001D2, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001D4, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0001D8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Get_Item_2) == 0x0001E8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Array_Length_ReturnValue_3) == 0x0001F0, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x0001F8, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000220, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateResearchTeamSymbolIcon, CallFunc_Less_IntInt_ReturnValue_2) == 0x000221, "Member 'MapWidget_Map_C_CreateResearchTeamSymbolIcon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearResearchTeamSymbolIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearResearchTeamSymbolIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15CC[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearResearchTeamSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearResearchTeamSymbolIcon");
static_assert(sizeof(MapWidget_Map_C_ClearResearchTeamSymbolIcon) == 0x000020, "Wrong size on MapWidget_Map_C_ClearResearchTeamSymbolIcon");
static_assert(offsetof(MapWidget_Map_C_ClearResearchTeamSymbolIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearResearchTeamSymbolIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearResearchTeamSymbolIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearResearchTeamSymbolIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearResearchTeamSymbolIcon, CallFunc_Array_Get_Item) == 0x000008, "Member 'MapWidget_Map_C_ClearResearchTeamSymbolIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearResearchTeamSymbolIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_ClearResearchTeamSymbolIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearResearchTeamSymbolIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MapWidget_Map_C_ClearResearchTeamSymbolIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearResearchTeamSymbolIcon, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearResearchTeamSymbolIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearResearchTeamSymbolIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClearResearchTeamSymbolIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetResearchTeamList
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_SetResearchTeamList final
{
public:
	TArray<struct FSBResearchTeamData>            InList;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MapWidget_Map_C_SetResearchTeamList) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetResearchTeamList");
static_assert(sizeof(MapWidget_Map_C_SetResearchTeamList) == 0x000010, "Wrong size on MapWidget_Map_C_SetResearchTeamList");
static_assert(offsetof(MapWidget_Map_C_SetResearchTeamList, InList) == 0x000000, "Member 'MapWidget_Map_C_SetResearchTeamList::InList' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearQuestAreaIcon
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_Map_C_ClearQuestAreaIcon final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15CD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconQuestArea_C*                       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15CE[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconQuestArea_C*                       CallFunc_Array_Get_Item_1;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearQuestAreaIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearQuestAreaIcon");
static_assert(sizeof(MapWidget_Map_C_ClearQuestAreaIcon) == 0x000038, "Wrong size on MapWidget_Map_C_ClearQuestAreaIcon");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, Temp_int_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Array_Get_Item) == 0x000018, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Array_Length_ReturnValue_1) == 0x000030, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearQuestAreaIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000034, "Member 'MapWidget_Map_C_ClearQuestAreaIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateQuestAreaIcon
// 0x0A40 (0x0A40 - 0x0000)
struct MapWidget_Map_C_UpdateQuestAreaIcon final
{
public:
	TArray<int32>                                 RegistQuestIdList;                                 // 0x0000(0x0010)(Edit, BlueprintVisible)
	struct FQuestMasterData                       QuestData;                                         // 0x0010(0x0118)(Edit, BlueprintVisible)
	struct FSBCharacterQuestSetting               QuestSetting;                                      // 0x0128(0x0038)(Edit, BlueprintVisible)
	int32                                         WorkIndex;                                         // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SortLastIndex;                                     // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 SortWork;                                          // 0x0168(0x0010)(Edit, BlueprintVisible)
	TArray<float>                                 RangeList;                                         // 0x0178(0x0010)(Edit, BlueprintVisible)
	int32                                         IconZOrder;                                        // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  IconQuestStatus;                                   // 0x018C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15CF[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 QuestIdList;                                       // 0x0190(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBMiniMapQuestAreaConfig>      DisplayIconInfoList;                               // 0x01A0(0x0010)(Edit, BlueprintVisible)
	class UMapWidget_IconTooltip1_C*              ToolTip;                                           // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       AreaWidget;                                        // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInsert;                                          // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D0[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           AreaIconInfoList;                                  // 0x01C8(0x0010)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x01D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D1[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ParentMapId;                                       // 0x01E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 QuestName;                                         // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBMiniMapQuestAreaConfig              QuestAreaIconInfo;                                 // 0x0200(0x0040)(Edit, BlueprintVisible)
	EQuestStatus                                  Status;                                            // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D2[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestID;                                           // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNetworkDataCache*                    TmpNetworkDataCache;                               // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D3[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x027D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D4[0x2];                                     // 0x027E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0280(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D5[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetQuestStepListData_IndexList;           // 0x03A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x03B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D6[0x3];                                     // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D7[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData_1;    // 0x03C0(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist_1;              // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D8[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x04E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue; // 0x04F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x04F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x04F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D9[0x1];                                     // 0x04F7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterQuestSetting               CallFunc_GetQuestSetting_ReturnValue;              // 0x04F8(0x0038)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0534(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15DA[0x3];                                     // 0x0539(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0540(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData_2;    // 0x0548(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist_2;              // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0661(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DB[0x2];                                     // 0x0662(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_getQuestIconZOrder_ReturnValue;           // 0x0664(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0668(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DC[0x4];                                     // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0670(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindQuestAreaIcon_TopIndex;               // 0x0680(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DD[0x4];                                     // 0x0684(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_FindQuestAreaIcon_FindIndex;              // 0x0688(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x0698(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15DE[0x7];                                     // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x06B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x06C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x06D0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x06E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x06F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue_1;             // 0x0709(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DF[0x2];                                     // 0x070A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_getQuestIconZOrder_ReturnValue_1;         // 0x070C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0710(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15E0[0x4];                                     // 0x0714(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestName_ReturnValue_1;               // 0x0718(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData_3;    // 0x0728(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist_3;              // 0x0840(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E1[0x7];                                     // 0x0841(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0848(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0858(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue_2;             // 0x0868(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15E2[0x7];                                     // 0x0869(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0870(0x0018)()
	int32                                         CallFunc_getQuestIconZOrder_ReturnValue_2;         // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E3[0x3];                                     // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0890(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15E4[0x4];                                     // 0x0894(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconQuestArea_C*                       CallFunc_Array_Get_Item;                           // 0x0898(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x08A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15E5[0x4];                                     // 0x08A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestName_ReturnValue_2;               // 0x08A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x08B8(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x08D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E6[0x7];                                     // 0x08D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconQuestArea_C*                       CallFunc_Create_ReturnValue;                       // 0x08D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x08E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E7[0x3];                                     // 0x08E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x08E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x08EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltip1_C*              CallFunc_Create_ReturnValue_1;                     // 0x08F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x08F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0900(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltip1_C*              K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1;    // 0x0908(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0910(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E8[0x7];                                     // 0x0911(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0918(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x0920(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0924(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0925(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E9[0x2];                                     // 0x0926(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0928(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMiniMapQuestAreaConfig              CallFunc_GetDataTableRowFromName_OutRow;           // 0x0930(0x0040)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0970(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15EA[0x3];                                     // 0x0971(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0974(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0978(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15EB[0x7];                                     // 0x0979(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0980(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0990(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0991(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0992(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15EC[0x5];                                     // 0x0993(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetQuestAreaIconInfoId_OutIdArray;        // 0x0998(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetQuestAreaIconInfoId_ReturnValue;       // 0x09A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15ED[0x3];                                     // 0x09A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x09AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       CallFunc_Array_Get_Item_2;                         // 0x09B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item_3;                         // 0x09B8(0x0060)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0A18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x0A20(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0A24(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0A28(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0A2C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0A2D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15EE[0x2];                                     // 0x0A2E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0A30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0A34(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15EF[0x3];                                     // 0x0A35(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0A38(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_UpdateQuestAreaIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateQuestAreaIcon");
static_assert(sizeof(MapWidget_Map_C_UpdateQuestAreaIcon) == 0x000A40, "Wrong size on MapWidget_Map_C_UpdateQuestAreaIcon");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, RegistQuestIdList) == 0x000000, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::RegistQuestIdList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, QuestData) == 0x000010, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::QuestData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, QuestSetting) == 0x000128, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::QuestSetting' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, WorkIndex) == 0x000160, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::WorkIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, SortLastIndex) == 0x000164, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::SortLastIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, SortWork) == 0x000168, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::SortWork' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, RangeList) == 0x000178, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::RangeList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, IconZOrder) == 0x000188, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::IconZOrder' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, IconQuestStatus) == 0x00018C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::IconQuestStatus' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, QuestIdList) == 0x000190, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::QuestIdList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, DisplayIconInfoList) == 0x0001A0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::DisplayIconInfoList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, ToolTip) == 0x0001B0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::ToolTip' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, AreaWidget) == 0x0001B8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::AreaWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, IsInsert) == 0x0001C0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::IsInsert' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, AreaIconInfoList) == 0x0001C8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::AreaIconInfoList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, LoopEnd) == 0x0001D8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, ParentMapId) == 0x0001E0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::ParentMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, QuestName) == 0x0001F0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::QuestName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, QuestAreaIconInfo) == 0x000200, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::QuestAreaIconInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Status) == 0x000240, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Status' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, QuestID) == 0x000244, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::QuestID' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, TmpNetworkDataCache) == 0x000248, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::TmpNetworkDataCache' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_int_Array_Index_Variable) == 0x000250, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_int_Variable) == 0x000254, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000258, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_int_Loop_Counter_Variable) == 0x00025C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000260, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_int_Variable_1) == 0x000264, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000268, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue_2) == 0x00026C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_int_Loop_Counter_Variable_1) == 0x000270, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue_3) == 0x000274, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_int_Array_Index_Variable_1) == 0x000278, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_bool_Variable) == 0x00027C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00027D, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000280, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_Exist) == 0x000398, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestStepListData_IndexList) == 0x0003A0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestStepListData_IndexList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Find_ReturnValue) == 0x0003B0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0003B4, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Add_ReturnValue) == 0x0003B8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_QuestMasterData_1) == 0x0003C0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_QuestMasterData_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_Exist_1) == 0x0004D8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_Exist_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Conv_NameToString_ReturnValue) == 0x0004E0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Find_ReturnValue_1) == 0x0004F0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_CheckEventTermDataInstantNow_ReturnValue) == 0x0004F4, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_CheckEventTermDataInstantNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0004F5, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0004F6, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestSetting_ReturnValue) == 0x0004F8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Add_ReturnValue_1) == 0x000530, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_LastIndex_ReturnValue) == 0x000534, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000538, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_LastIndex_ReturnValue_1) == 0x00053C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000540, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_QuestMasterData_2) == 0x000548, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_QuestMasterData_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_Exist_2) == 0x000660, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_Exist_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestStatus_ReturnValue) == 0x000661, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_getQuestIconZOrder_ReturnValue) == 0x000664, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_getQuestIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Multiply_IntInt_ReturnValue) == 0x000668, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000670, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestAreaIcon_TopIndex) == 0x000680, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestAreaIcon_TopIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestAreaIcon_FindIndex) == 0x000688, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestAreaIcon_FindIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestName_ReturnValue) == 0x000698, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0006A8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Concat_StrStr_ReturnValue) == 0x0006B0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0006C0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x0006D0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0006E8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x0006F8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x000708, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestStatus_ReturnValue_1) == 0x000709, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_getQuestIconZOrder_ReturnValue_1) == 0x00070C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_getQuestIconZOrder_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000710, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestName_ReturnValue_1) == 0x000718, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_QuestMasterData_3) == 0x000728, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_QuestMasterData_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_FindQuestMasterData_Exist_3) == 0x000840, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_FindQuestMasterData_Exist_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000848, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000858, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestStatus_ReturnValue_2) == 0x000868, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestStatus_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000870, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_getQuestIconZOrder_ReturnValue_2) == 0x000888, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_getQuestIconZOrder_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x00088C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Add_ReturnValue_2) == 0x000890, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Get_Item) == 0x000898, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Add_ReturnValue_3) == 0x0008A0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestName_ReturnValue_2) == 0x0008A8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0008B8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0008D0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Create_ReturnValue) == 0x0008D8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_BooleanAND_ReturnValue) == 0x0008E0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x0008E4, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Add_ReturnValue_4) == 0x0008EC, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Create_ReturnValue_1) == 0x0008F0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x0008F8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_CalcMapPosition_MapLocation) == 0x000900, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1) == 0x000908, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, K2Node_DynamicCast_bSuccess) == 0x000910, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_AddChildToCanvas_ReturnValue) == 0x000918, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Add_ReturnValue_5) == 0x000920, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_IsValid_ReturnValue) == 0x000924, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000925, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Get_Item_1) == 0x000928, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000930, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000970, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Length_ReturnValue) == 0x000974, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000978, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x000980, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000990, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000991, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_BooleanOR_ReturnValue) == 0x000992, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestAreaIconInfoId_OutIdArray) == 0x000998, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestAreaIconInfoId_OutIdArray' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetQuestAreaIconInfoId_ReturnValue) == 0x0009A8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetQuestAreaIconInfoId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, Temp_int_Variable_2) == 0x0009AC, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Get_Item_2) == 0x0009B0, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Get_Item_3) == 0x0009B8, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000A18, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetZOrder_ReturnValue) == 0x000A20, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue_4) == 0x000A24, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Array_Length_ReturnValue_1) == 0x000A28, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000A2C, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000A2D, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue_5) == 0x000A30, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetNetworkDataCache_IsValid) == 0x000A34, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateQuestAreaIcon, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000A38, "Member 'MapWidget_Map_C_UpdateQuestAreaIcon::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CalcAreaIconSize
// 0x00D8 (0x00D8 - 0x0000)
struct MapWidget_Map_C_CalcAreaIconSize final
{
public:
	class FName                                   MapId;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       AreaWidget;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ImageSize;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SizeScale;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15F0[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x0020(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15F1[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetMapBodySize_ReturnValue;               // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRange_ReturnValue;                     // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CalcAreaIconSize) == 0x000008, "Wrong alignment on MapWidget_Map_C_CalcAreaIconSize");
static_assert(sizeof(MapWidget_Map_C_CalcAreaIconSize) == 0x0000D8, "Wrong size on MapWidget_Map_C_CalcAreaIconSize");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, MapId) == 0x000000, "Member 'MapWidget_Map_C_CalcAreaIconSize::MapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, AreaWidget) == 0x000008, "Member 'MapWidget_Map_C_CalcAreaIconSize::AreaWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, ImageSize) == 0x000010, "Member 'MapWidget_Map_C_CalcAreaIconSize::ImageSize' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, SizeScale) == 0x000018, "Member 'MapWidget_Map_C_CalcAreaIconSize::SizeScale' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x000020, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_GetMapBodySize_ReturnValue) == 0x00009C, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_GetMapBodySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A4, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x0000A8, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_BreakVector2D_X) == 0x0000B0, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_BreakVector2D_Y) == 0x0000B4, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000B8, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_GetRange_ReturnValue) == 0x0000BC, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_GetRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0000C0, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x0000C4, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcAreaIconSize, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x0000CC, "Member 'MapWidget_Map_C_CalcAreaIconSize::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.AddInterruptQuestAreaIcon
// 0x00C0 (0x00C0 - 0x0000)
struct MapWidget_Map_C_AddInterruptQuestAreaIcon final
{
public:
	class ASBInterruptQuestInstance*              QuestInstance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltip1_C*              ToolTip;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       AreaWidget;                                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_BP_GetQuestName_OutQuestName;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetQuestAreaSize_ReturnValue;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       CallFunc_Create_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltip1_C*              CallFunc_Create_ReturnValue_1;                     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_AddInterruptQuestAreaIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_AddInterruptQuestAreaIcon");
static_assert(sizeof(MapWidget_Map_C_AddInterruptQuestAreaIcon) == 0x0000C0, "Wrong size on MapWidget_Map_C_AddInterruptQuestAreaIcon");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, QuestInstance) == 0x000000, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::QuestInstance' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, Color) == 0x000008, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::Color' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, ToolTip) == 0x000018, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::ToolTip' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, AreaWidget) == 0x000020, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::AreaWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_BP_GetQuestName_OutQuestName) == 0x000028, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_BP_GetQuestName_OutQuestName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_BreakVector_X) == 0x00005C, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_BreakVector_Y) == 0x000060, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_BreakVector_Z) == 0x000064, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000068, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_MakeVector2D_ReturnValue) == 0x000074, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_GetQuestAreaSize_ReturnValue) == 0x00007C, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_GetQuestAreaSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_CalcMapPosition_MapLocation) == 0x000080, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_Create_ReturnValue) == 0x0000A0, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_Create_ReturnValue_1) == 0x0000A8, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_Array_Add_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_AddInterruptQuestAreaIcon, CallFunc_IsValid_ReturnValue) == 0x0000BC, "Member 'MapWidget_Map_C_AddInterruptQuestAreaIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptQuestAreaIcon
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_Map_C_RemoveInterruptQuestAreaIcon final
{
public:
	class ASBInterruptQuestInstance*              QuestInstance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       Icon;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15F2[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15F3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBInterruptQuestInstance*              CallFunc_GetQuestInstance_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UIconQuestArea_C*                       CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_RemoveInterruptQuestAreaIcon");
static_assert(sizeof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon) == 0x000040, "Wrong size on MapWidget_Map_C_RemoveInterruptQuestAreaIcon");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, QuestInstance) == 0x000000, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::QuestInstance' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, Icon) == 0x000008, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::Icon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, LoopEnd) == 0x000010, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, Temp_bool_Variable) == 0x000014, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, Temp_int_Variable) == 0x000018, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_GetQuestInstance_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_GetQuestInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_BooleanAND_ReturnValue) == 0x00002D, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_RemoveChild_ReturnValue) == 0x00002E, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002F, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_Array_Get_Item) == 0x000030, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_RemoveInterruptQuestAreaIcon, CallFunc_Array_LastIndex_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_RemoveInterruptQuestAreaIcon::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestAreaIcon
// 0x0048 (0x0048 - 0x0000)
struct MapWidget_Map_C_UpdateInterruptQuestAreaIcon final
{
public:
	class UIconQuestArea_C*                       AreaWidget;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBInterruptQuestInstance*              QuestInstance;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15F4[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15F5[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBInterruptQuestManager*               CallFunc_GetInterruptQuestManager_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBInterruptQuestInstance*              CallFunc_GetInterruptQuestInstance_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInterruptQuestInstanceNum_ReturnValue; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateInterruptQuestAreaIcon");
static_assert(sizeof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon) == 0x000048, "Wrong size on MapWidget_Map_C_UpdateInterruptQuestAreaIcon");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, AreaWidget) == 0x000000, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::AreaWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, QuestInstance) == 0x000008, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::QuestInstance' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, Temp_int_Variable) == 0x000010, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, K2Node_DynamicCast_AsSBGame_Instance) == 0x000020, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, CallFunc_GetInterruptQuestManager_ReturnValue) == 0x000030, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::CallFunc_GetInterruptQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, CallFunc_GetInterruptQuestInstance_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::CallFunc_GetInterruptQuestInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, CallFunc_GetInterruptQuestInstanceNum_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::CallFunc_GetInterruptQuestInstanceNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000044, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateInterruptQuestAreaIcon, CallFunc_IsValid_ReturnValue) == 0x000045, "Member 'MapWidget_Map_C_UpdateInterruptQuestAreaIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.TimeIconSetting
// 0x0080 (0x0080 - 0x0000)
struct MapWidget_Map_C_TimeIconSetting final
{
public:
	class UWidget*                                IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          TargetPosWidget;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Prio;                                              // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15F6[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       LocalIconWidgetCanvasPanel;                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15F7[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15F8[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15F9[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_TimeIconSetting) == 0x000008, "Wrong alignment on MapWidget_Map_C_TimeIconSetting");
static_assert(sizeof(MapWidget_Map_C_TimeIconSetting) == 0x000080, "Wrong size on MapWidget_Map_C_TimeIconSetting");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, IconWidget) == 0x000000, "Member 'MapWidget_Map_C_TimeIconSetting::IconWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, TargetPosWidget) == 0x000008, "Member 'MapWidget_Map_C_TimeIconSetting::TargetPosWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, Prio) == 0x000010, "Member 'MapWidget_Map_C_TimeIconSetting::Prio' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, LocalIconWidgetCanvasPanel) == 0x000018, "Member 'MapWidget_Map_C_TimeIconSetting::LocalIconWidgetCanvasPanel' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CanvasSlot) == 0x000020, "Member 'MapWidget_Map_C_TimeIconSetting::CanvasSlot' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_GetPosition_ReturnValue) == 0x00002C, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_GetSize_ReturnValue) == 0x000034, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_BreakVector2D_X_1) == 0x000044, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_BreakVector2D_Y_1) == 0x000048, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00004C, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_MakeVector2D_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_Multiply_IntInt_ReturnValue) == 0x000058, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_IsValid_ReturnValue_1) == 0x00005C, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_AddChildToCanvas_ReturnValue) == 0x000070, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_TimeIconSetting, CallFunc_IsValid_ReturnValue_3) == 0x000078, "Member 'MapWidget_Map_C_TimeIconSetting::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateChallengeQuestIcon
// 0x01A0 (0x01A0 - 0x0000)
struct MapWidget_Map_C_CreateChallengeQuestIcon final
{
public:
	struct FSBCharacterProfileData                ProfileData;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         LocationIndex;                                     // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFacilityType                               FacilityType;                                      // 0x002C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DataFind;                                          // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15FA[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBInterruptQuestDestructibleObjectData> ObjectList;                                        // 0x0030(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBInterruptQuestGimmickObjectData> GimmickList;                                       // 0x0040(0x0010)(Edit, BlueprintVisible)
	class UMapWidget_CommonSymbolIcon_C*          SymbolIcon;                                        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15FB[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileLocationData        TmpLocation;                                       // 0x0060(0x0048)(Edit, BlueprintVisible)
	TArray<struct FSBInterruptQuestNpcData>       DataList;                                          // 0x00A8(0x0010)(Edit, BlueprintVisible)
	class USBPlayerInterruptQuestComponent*       InterruptQuest;                                    // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         PlayerState;                                       // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15FC[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15FD[0x2];                                     // 0x00D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15FE[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15FF[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue;                       // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1600[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBInterruptQuestDestructibleObjectData> CallFunc_GetDestructibleObjectDataList_ReturnValue; // 0x0100(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FSBInterruptQuestGimmickObjectData> CallFunc_GetGimmickObjectDataList_ReturnValue;     // 0x0110(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1601[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBInterruptQuestNpcData>       CallFunc_GetNpcDataDataList_ReturnValue;           // 0x0128(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1602[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid; // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1603[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture; // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition; // 0x0154(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1604[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText; // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1605[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1606[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1607[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_CreateChallengeQuestIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateChallengeQuestIcon");
static_assert(sizeof(MapWidget_Map_C_CreateChallengeQuestIcon) == 0x0001A0, "Wrong size on MapWidget_Map_C_CreateChallengeQuestIcon");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, ProfileData) == 0x000000, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::ProfileData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, LocationIndex) == 0x000028, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::LocationIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, FacilityType) == 0x00002C, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::FacilityType' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, DataFind) == 0x00002D, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::DataFind' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, ObjectList) == 0x000030, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::ObjectList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, GimmickList) == 0x000040, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::GimmickList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, SymbolIcon) == 0x000050, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::SymbolIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, LoopEnd) == 0x000058, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, TmpLocation) == 0x000060, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::TmpLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, DataList) == 0x0000A8, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::DataList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, InterruptQuest) == 0x0000B8, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::InterruptQuest' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, PlayerState) == 0x0000C0, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::PlayerState' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, Temp_bool_Variable) == 0x0000C8, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, Temp_int_Variable) == 0x0000CC, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Not_PreBool_ReturnValue) == 0x0000D4, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, Temp_bool_Variable_1) == 0x0000D5, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Array_LastIndex_ReturnValue) == 0x0000D8, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000DC, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, Temp_int_Variable_1) == 0x0000E0, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000E4, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, Temp_bool_Variable_2) == 0x0000E8, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E9, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_BooleanAND_ReturnValue) == 0x0000EA, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000EB, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_IsValid_ReturnValue) == 0x0000EC, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000ED, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Create_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x0000F8, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetDestructibleObjectDataList_ReturnValue) == 0x000100, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetDestructibleObjectDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetGimmickObjectDataList_ReturnValue) == 0x000110, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetGimmickObjectDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000120, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetNpcDataDataList_ReturnValue) == 0x000128, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetNpcDataDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000138, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Array_Add_ReturnValue) == 0x00013C, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000140, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid) == 0x000144, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_IsMapIconValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture) == 0x000148, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority) == 0x000150, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition) == 0x000154, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconWorldPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText) == 0x000160, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetMapIconInfo_ByCharacterProfileData_OutIconTooltipText' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000170, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, Temp_int_Variable_2) == 0x000174, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Array_LastIndex_ReturnValue_2) == 0x000178, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x00017C, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_Add_IntInt_ReturnValue_2) == 0x000180, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x000188, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_GetSBPlayerState_ReturnValue) == 0x000190, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000198, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateChallengeQuestIcon, CallFunc_BooleanAND_ReturnValue_2) == 0x000199, "Member 'MapWidget_Map_C_CreateChallengeQuestIcon::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.FindQuestAreaIcon
// 0x0108 (0x0108 - 0x0000)
struct MapWidget_Map_C_FindQuestAreaIcon final
{
public:
	struct FSBMiniMapQuestAreaConfig              TargetData;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FSBMiniMapQuestAreaConfig>      RefList;                                           // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TopIndex;                                          // 0x0050(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1608[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 FindIndex;                                         // 0x0058(0x0010)(Parm, OutParm)
	TArray<int32>                                 FIndList;                                          // 0x0068(0x0010)(Edit, BlueprintVisible)
	int32                                         RetValue;                                          // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BasePosition;                                      // 0x007C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1609[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMiniMapQuestAreaConfig              CallFunc_Array_Get_Item;                           // 0x0090(0x0040)()
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation_1;            // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_160A[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_160B[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_FindQuestAreaIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_FindQuestAreaIcon");
static_assert(sizeof(MapWidget_Map_C_FindQuestAreaIcon) == 0x000108, "Wrong size on MapWidget_Map_C_FindQuestAreaIcon");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, TargetData) == 0x000000, "Member 'MapWidget_Map_C_FindQuestAreaIcon::TargetData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, RefList) == 0x000040, "Member 'MapWidget_Map_C_FindQuestAreaIcon::RefList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, TopIndex) == 0x000050, "Member 'MapWidget_Map_C_FindQuestAreaIcon::TopIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, FindIndex) == 0x000058, "Member 'MapWidget_Map_C_FindQuestAreaIcon::FindIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, FIndList) == 0x000068, "Member 'MapWidget_Map_C_FindQuestAreaIcon::FIndList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, RetValue) == 0x000078, "Member 'MapWidget_Map_C_FindQuestAreaIcon::RetValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, BasePosition) == 0x00007C, "Member 'MapWidget_Map_C_FindQuestAreaIcon::BasePosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, Temp_int_Array_Index_Variable) == 0x000084, "Member 'MapWidget_Map_C_FindQuestAreaIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_Array_Get_Item) == 0x000090, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_CalcMapPosition_MapLocation) == 0x0000D8, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x0000E0, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'MapWidget_Map_C_FindQuestAreaIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_CalcMapPosition_MapLocation_1) == 0x0000EC, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_CalcMapPosition_MapLocation_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000FC, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000FD, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_Array_Add_ReturnValue) == 0x000100, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindQuestAreaIcon, CallFunc_EqualEqual_Vector2DVector2D_ReturnValue) == 0x000104, "Member 'MapWidget_Map_C_FindQuestAreaIcon::CallFunc_EqualEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearCampPointIcon
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearCampPointIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_160C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearCampPointIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearCampPointIcon");
static_assert(sizeof(MapWidget_Map_C_ClearCampPointIcon) == 0x000020, "Wrong size on MapWidget_Map_C_ClearCampPointIcon");
static_assert(offsetof(MapWidget_Map_C_ClearCampPointIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearCampPointIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCampPointIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearCampPointIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCampPointIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearCampPointIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCampPointIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearCampPointIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCampPointIcon, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearCampPointIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCampPointIcon, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClearCampPointIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearCampPointIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'MapWidget_Map_C_ClearCampPointIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateCampPointIcon
// 0x0160 (0x0160 - 0x0000)
struct MapWidget_Map_C_UpdateCampPointIcon final
{
public:
	class UMapWidget_CommonSymbolIcon_C*          Icon;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ParentMapId;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_160D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ActiveIdList;                                      // 0x0020(0x0010)(Edit, BlueprintVisible)
	class USBCharacterCampFireComponent*          Component;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_160E[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_160F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLocationInfo                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x0050)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1610[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActivatedCampFires_OutArray;           // 0x00D8(0x0010)(ReferenceParm)
	float                                         CallFunc_BreakVector_X;                            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1611[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFieldStatusSetting                  CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00F8(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1612[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFieldStatus                                  CallFunc_EvaluateFieldStatus_ReturnValue;          // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetMapNameByGameContentId_OutMapName;     // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapNameByGameContentId_ReturnValue;    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActivatedCampFire_ReturnValue;          // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1613[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1614[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterCampFireComponent*          CallFunc_GetCharacterCampFireComponent_ReturnValue; // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_UpdateCampPointIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateCampPointIcon");
static_assert(sizeof(MapWidget_Map_C_UpdateCampPointIcon) == 0x000160, "Wrong size on MapWidget_Map_C_UpdateCampPointIcon");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, Icon) == 0x000000, "Member 'MapWidget_Map_C_UpdateCampPointIcon::Icon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, ParentMapId) == 0x000008, "Member 'MapWidget_Map_C_UpdateCampPointIcon::ParentMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, LoopEnd) == 0x000018, "Member 'MapWidget_Map_C_UpdateCampPointIcon::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, ActiveIdList) == 0x000020, "Member 'MapWidget_Map_C_UpdateCampPointIcon::ActiveIdList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, Component) == 0x000030, "Member 'MapWidget_Map_C_UpdateCampPointIcon::Component' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, Temp_int_Variable) == 0x000038, "Member 'MapWidget_Map_C_UpdateCampPointIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_Array_LastIndex_ReturnValue) == 0x000044, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_Create_ReturnValue) == 0x000048, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000068, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_Array_Add_ReturnValue) == 0x00006C, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_ConvertParentMapId_ReturnValue) == 0x000070, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetActivatedCampFires_OutArray) == 0x0000D8, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetActivatedCampFires_OutArray' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_BreakVector_X) == 0x0000E8, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_BreakVector_Y) == 0x0000EC, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_BreakVector_Z) == 0x0000F0, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000F8, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000118, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_MakeVector2D_ReturnValue) == 0x00011C, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_EvaluateFieldStatus_ReturnValue) == 0x000124, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_EvaluateFieldStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_IsValid_ReturnValue_1) == 0x000125, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000126, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000127, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetMapNameByGameContentId_OutMapName) == 0x000128, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetMapNameByGameContentId_OutMapName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetMapNameByGameContentId_ReturnValue) == 0x000138, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetMapNameByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_BooleanAND_ReturnValue) == 0x000139, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00013A, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_IsActivatedCampFire_ReturnValue) == 0x00013B, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_IsActivatedCampFire_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetPlayerController_ReturnValue) == 0x000140, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000148, "Member 'MapWidget_Map_C_UpdateCampPointIcon::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'MapWidget_Map_C_UpdateCampPointIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCampPointIcon, CallFunc_GetCharacterCampFireComponent_ReturnValue) == 0x000158, "Member 'MapWidget_Map_C_UpdateCampPointIcon::CallFunc_GetCharacterCampFireComponent_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.LocationIconVisibleCheck
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_Map_C_LocationIconVisibleCheck final
{
public:
	class FName                                   LocationId;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1615[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapIconVisibleSettingTableRow       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MapIconVisibleSettingCheck_ReturnValue;   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_LocationIconVisibleCheck) == 0x000008, "Wrong alignment on MapWidget_Map_C_LocationIconVisibleCheck");
static_assert(sizeof(MapWidget_Map_C_LocationIconVisibleCheck) == 0x000040, "Wrong size on MapWidget_Map_C_LocationIconVisibleCheck");
static_assert(offsetof(MapWidget_Map_C_LocationIconVisibleCheck, LocationId) == 0x000000, "Member 'MapWidget_Map_C_LocationIconVisibleCheck::LocationId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_LocationIconVisibleCheck, Visible) == 0x000008, "Member 'MapWidget_Map_C_LocationIconVisibleCheck::Visible' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_LocationIconVisibleCheck, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'MapWidget_Map_C_LocationIconVisibleCheck::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_LocationIconVisibleCheck, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_LocationIconVisibleCheck::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_LocationIconVisibleCheck, CallFunc_MapIconVisibleSettingCheck_ReturnValue) == 0x000039, "Member 'MapWidget_Map_C_LocationIconVisibleCheck::CallFunc_MapIconVisibleSettingCheck_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateCanvasScale
// 0x00C8 (0x00C8 - 0x0000)
struct MapWidget_Map_C_UpdateCanvasScale final
{
public:
	struct FAnchors                               BaseAnchor;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor)
	float                                         MapScale;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1616[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_GetLoadData_LoadData;                     // 0x0020(0x0078)()
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DFloat_ReturnValue;       // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x00AC(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1617[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_UpdateCanvasScale) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateCanvasScale");
static_assert(sizeof(MapWidget_Map_C_UpdateCanvasScale) == 0x0000C8, "Wrong size on MapWidget_Map_C_UpdateCanvasScale");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, BaseAnchor) == 0x000000, "Member 'MapWidget_Map_C_UpdateCanvasScale::BaseAnchor' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, MapScale) == 0x000010, "Member 'MapWidget_Map_C_UpdateCanvasScale::MapScale' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CanvasSlot) == 0x000018, "Member 'MapWidget_Map_C_UpdateCanvasScale::CanvasSlot' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CallFunc_GetLoadData_LoadData) == 0x000020, "Member 'MapWidget_Map_C_UpdateCanvasScale::CallFunc_GetLoadData_LoadData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CallFunc_FMax_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_UpdateCanvasScale::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00009C, "Member 'MapWidget_Map_C_UpdateCanvasScale::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000A0, "Member 'MapWidget_Map_C_UpdateCanvasScale::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CallFunc_Subtract_Vector2DFloat_ReturnValue) == 0x0000A4, "Member 'MapWidget_Map_C_UpdateCanvasScale::CallFunc_Subtract_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, K2Node_MakeStruct_Anchors) == 0x0000AC, "Member 'MapWidget_Map_C_UpdateCanvasScale::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CallFunc_IsValid_ReturnValue) == 0x0000BC, "Member 'MapWidget_Map_C_UpdateCanvasScale::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateCanvasScale, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000C0, "Member 'MapWidget_Map_C_UpdateCanvasScale::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnPressed_RegionIcon
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_OnPressed_RegionIcon final
{
public:
	class FString                                 InRegionMapId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnPressed_RegionIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnPressed_RegionIcon");
static_assert(sizeof(MapWidget_Map_C_OnPressed_RegionIcon) == 0x000010, "Wrong size on MapWidget_Map_C_OnPressed_RegionIcon");
static_assert(offsetof(MapWidget_Map_C_OnPressed_RegionIcon, InRegionMapId) == 0x000000, "Member 'MapWidget_Map_C_OnPressed_RegionIcon::InRegionMapId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnPressed_WarpPointIcon
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_OnPressed_WarpPointIcon final
{
public:
	class UMapWidget_WarpPointIcon_C*             InWarpPointIcon;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_OnPressed_WarpPointIcon) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnPressed_WarpPointIcon");
static_assert(sizeof(MapWidget_Map_C_OnPressed_WarpPointIcon) == 0x000010, "Wrong size on MapWidget_Map_C_OnPressed_WarpPointIcon");
static_assert(offsetof(MapWidget_Map_C_OnPressed_WarpPointIcon, InWarpPointIcon) == 0x000000, "Member 'MapWidget_Map_C_OnPressed_WarpPointIcon::InWarpPointIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnPressed_WarpPointIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_OnPressed_WarpPointIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnPressed_WarpPointIcon, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000009, "Member 'MapWidget_Map_C_OnPressed_WarpPointIcon::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnPressed_WarpPointIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'MapWidget_Map_C_OnPressed_WarpPointIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnPressed_WarpPointIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000B, "Member 'MapWidget_Map_C_OnPressed_WarpPointIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnRaidPortalClose
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_OnRaidPortalClose final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1618[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_TimeSymbolIcon_C*            Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1619[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_CommonSymbolIcon_C*          CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnRaidPortalClose) == 0x000008, "Wrong alignment on MapWidget_Map_C_OnRaidPortalClose");
static_assert(sizeof(MapWidget_Map_C_OnRaidPortalClose) == 0x000020, "Wrong size on MapWidget_Map_C_OnRaidPortalClose");
static_assert(offsetof(MapWidget_Map_C_OnRaidPortalClose, Param_Index) == 0x000000, "Member 'MapWidget_Map_C_OnRaidPortalClose::Param_Index' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnRaidPortalClose, Widget) == 0x000008, "Member 'MapWidget_Map_C_OnRaidPortalClose::Widget' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnRaidPortalClose, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_OnRaidPortalClose::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_OnRaidPortalClose, CallFunc_Array_Get_Item) == 0x000018, "Member 'MapWidget_Map_C_OnRaidPortalClose::CallFunc_Array_Get_Item' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetWorldMapFlag
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_SetWorldMapFlag final
{
public:
	bool                                          IsWorldMap;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_SetWorldMapFlag) == 0x000001, "Wrong alignment on MapWidget_Map_C_SetWorldMapFlag");
static_assert(sizeof(MapWidget_Map_C_SetWorldMapFlag) == 0x000001, "Wrong size on MapWidget_Map_C_SetWorldMapFlag");
static_assert(offsetof(MapWidget_Map_C_SetWorldMapFlag, IsWorldMap) == 0x000000, "Member 'MapWidget_Map_C_SetWorldMapFlag::IsWorldMap' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateMapPlaceNamePlate
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_UpdateMapPlaceNamePlate final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_UpdateMapPlaceNamePlate) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateMapPlaceNamePlate");
static_assert(sizeof(MapWidget_Map_C_UpdateMapPlaceNamePlate) == 0x000010, "Wrong size on MapWidget_Map_C_UpdateMapPlaceNamePlate");
static_assert(offsetof(MapWidget_Map_C_UpdateMapPlaceNamePlate, InMapId) == 0x000000, "Member 'MapWidget_Map_C_UpdateMapPlaceNamePlate::InMapId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CreateDialog
// 0x0138 (0x0138 - 0x0000)
struct MapWidget_Map_C_CreateDialog final
{
public:
	class UBP_Dialog_C*                           OutputPin;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PointName;                                         // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Get_Portal_to_Location_OutLocationName;   // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161A[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWarpPointName_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWarpConfirmationTextIdx_TextIdx;       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161B[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
};
static_assert(alignof(MapWidget_Map_C_CreateDialog) == 0x000008, "Wrong alignment on MapWidget_Map_C_CreateDialog");
static_assert(sizeof(MapWidget_Map_C_CreateDialog) == 0x000138, "Wrong size on MapWidget_Map_C_CreateDialog");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, OutputPin) == 0x000000, "Member 'MapWidget_Map_C_CreateDialog::OutputPin' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, PointName) == 0x000008, "Member 'MapWidget_Map_C_CreateDialog::PointName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'MapWidget_Map_C_CreateDialog::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_Get_Portal_to_Location_OutLocationName) == 0x000078, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_Get_Portal_to_Location_OutLocationName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_IsEmpty_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_Not_PreBool_ReturnValue) == 0x000089, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_Contains_ReturnValue) == 0x00008A, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_GetWarpPointName_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_GetWarpPointName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_GetWarpConfirmationTextIdx_TextIdx) == 0x0000A0, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_GetWarpConfirmationTextIdx_TextIdx' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'MapWidget_Map_C_CreateDialog::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000E8, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, K2Node_MakeArray_Array) == 0x0000F8, "Member 'MapWidget_Map_C_CreateDialog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CreateDialog, CallFunc_Format_ReturnValue) == 0x000120, "Member 'MapWidget_Map_C_CreateDialog::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.DeleteDialog
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_DeleteDialog final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_DeleteDialog) == 0x000001, "Wrong alignment on MapWidget_Map_C_DeleteDialog");
static_assert(sizeof(MapWidget_Map_C_DeleteDialog) == 0x000001, "Wrong size on MapWidget_Map_C_DeleteDialog");
static_assert(offsetof(MapWidget_Map_C_DeleteDialog, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_DeleteDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.HideDialog
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_HideDialog final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_HideDialog) == 0x000001, "Wrong alignment on MapWidget_Map_C_HideDialog");
static_assert(sizeof(MapWidget_Map_C_HideDialog) == 0x000001, "Wrong size on MapWidget_Map_C_HideDialog");
static_assert(offsetof(MapWidget_Map_C_HideDialog, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_HideDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPointEx
// 0x0858 (0x0858 - 0x0000)
struct MapWidget_Map_C_UpdateWarpPointEx final
{
public:
	struct FVector2D                              PlayerPos;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       WorkSlot;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             MapInfo;                                           // 0x0018(0x01E0)(Edit, BlueprintVisible)
	class UMapWidget_WarpPointIcon_C*             TmpWarpPointIcon;                                  // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsLocalWarpPoint;                               // 0x0200(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161D[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterWarpPoint                     TmpWarpPointData;                                  // 0x0208(0x0068)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161E[0x3];                                     // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161F[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1620[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1621[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_WarpPointIcon_C*             CallFunc_Create_ReturnValue;                       // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable;                                // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1622[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize2D_ReturnValue;                      // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x02C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1623[0x1];                                     // 0x02C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_1;                              // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1624[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x02D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1625[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x02E0(0x01E0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1626[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertParentMapId_ReturnValue;           // 0x04D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x04E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x04F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentGameContentId_ReturnValue;       // 0x0501(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue_1;                   // 0x0502(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0503(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0504(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            K2Node_Select_Default;                             // 0x050C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists_1;                    // 0x050D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1627[0x2];                                     // 0x050E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue_1;                 // 0x0510(0x01E0)()
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x06F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1628[0x7];                                     // 0x06F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FSBMasterWarpPoint>  CallFunc_GetWarpPointMasterMap_ReturnValue;        // 0x0700(0x0050)(ConstParm)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0750(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0758(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0768(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0770(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0774(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0779(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWarpPointMasterData_IsExists;          // 0x077A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1629[0x5];                                     // 0x077B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterWarpPoint                     CallFunc_GetWarpPointMasterData_ReturnValue;       // 0x0780(0x0068)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_162A[0x3];                                     // 0x07E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UMapWidget_WarpPointIcon_C* InWarpPointIcon)> K2Node_CreateDelegate_OutputDelegate;              // 0x07EC(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector2D                              CallFunc_CalcMapPosition_MapLocation;              // 0x07FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0804(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_162B[0x3];                                     // 0x0805(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0808(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_162C[0x4];                                     // 0x080C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0810(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_WarpPointIcon_C*             CallFunc_Array_Get_Item_1;                         // 0x0818(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_162D[0x7];                                     // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0828(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0830(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0838(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_162E[0x3];                                     // 0x0839(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x083C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetWarpPoints_OutArray;                   // 0x0840(0x0010)(ReferenceParm)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0850(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0851(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_UpdateWarpPointEx) == 0x000008, "Wrong alignment on MapWidget_Map_C_UpdateWarpPointEx");
static_assert(sizeof(MapWidget_Map_C_UpdateWarpPointEx) == 0x000858, "Wrong size on MapWidget_Map_C_UpdateWarpPointEx");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, PlayerPos) == 0x000000, "Member 'MapWidget_Map_C_UpdateWarpPointEx::PlayerPos' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, WorkSlot) == 0x000008, "Member 'MapWidget_Map_C_UpdateWarpPointEx::WorkSlot' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, LoopEnd) == 0x000010, "Member 'MapWidget_Map_C_UpdateWarpPointEx::LoopEnd' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, MapInfo) == 0x000018, "Member 'MapWidget_Map_C_UpdateWarpPointEx::MapInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, TmpWarpPointIcon) == 0x0001F8, "Member 'MapWidget_Map_C_UpdateWarpPointEx::TmpWarpPointIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, TmpIsLocalWarpPoint) == 0x000200, "Member 'MapWidget_Map_C_UpdateWarpPointEx::TmpIsLocalWarpPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, TmpWarpPointData) == 0x000208, "Member 'MapWidget_Map_C_UpdateWarpPointEx::TmpWarpPointData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, TmpMasterDataManager) == 0x000270, "Member 'MapWidget_Map_C_UpdateWarpPointEx::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, Temp_bool_Variable) == 0x000278, "Member 'MapWidget_Map_C_UpdateWarpPointEx::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, Temp_int_Loop_Counter_Variable) == 0x00027C, "Member 'MapWidget_Map_C_UpdateWarpPointEx::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Add_IntInt_ReturnValue) == 0x000280, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Not_PreBool_ReturnValue) == 0x000284, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, Temp_int_Array_Index_Variable) == 0x000288, "Member 'MapWidget_Map_C_UpdateWarpPointEx::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Contains_ReturnValue) == 0x00028C, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Conv_StringToName_ReturnValue) == 0x000290, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetPosition_ReturnValue) == 0x000298, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Array_LastIndex_ReturnValue) == 0x0002A0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Create_ReturnValue) == 0x0002A8, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, Temp_byte_Variable) == 0x0002B0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Array_Add_ReturnValue) == 0x0002B4, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0002B8, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_VSize2D_ReturnValue) == 0x0002C0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetVisibility_ReturnValue) == 0x0002C4, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Less_FloatFloat_ReturnValue) == 0x0002C5, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002C6, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0002C8, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, Temp_byte_Variable_1) == 0x0002D0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetPosition_ReturnValue_1) == 0x0002D4, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetMapInfo_IsExists) == 0x0002DC, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetMapInfo_ReturnValue) == 0x0002E0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetMasterDataManager_IsValid) == 0x0004C0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetMasterDataManager_ReturnValue) == 0x0004C8, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_ConvertParentMapId_ReturnValue) == 0x0004D0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_ConvertParentMapId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Split_LeftS) == 0x0004E0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Split_RightS) == 0x0004F0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Split_ReturnValue) == 0x000500, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_IsCurrentGameContentId_ReturnValue) == 0x000501, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_IsCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Contains_ReturnValue_1) == 0x000502, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, Temp_bool_Variable_1) == 0x000503, "Member 'MapWidget_Map_C_UpdateWarpPointEx::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000504, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, K2Node_Select_Default) == 0x00050C, "Member 'MapWidget_Map_C_UpdateWarpPointEx::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetMapInfo_IsExists_1) == 0x00050D, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetMapInfo_IsExists_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetMapInfo_ReturnValue_1) == 0x000510, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetMapInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetMapIconZOrder_ReturnValue) == 0x0006F0, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Multiply_IntInt_ReturnValue) == 0x0006F4, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0006F8, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetWarpPointMasterMap_ReturnValue) == 0x000700, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetWarpPointMasterMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_AddChildToCanvas_ReturnValue) == 0x000750, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Map_Keys_Keys) == 0x000758, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Array_Get_Item) == 0x000768, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Array_Length_ReturnValue) == 0x000770, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Array_Find_ReturnValue) == 0x000774, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Less_IntInt_ReturnValue) == 0x000778, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000779, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetWarpPointMasterData_IsExists) == 0x00077A, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetWarpPointMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetWarpPointMasterData_ReturnValue) == 0x000780, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetWarpPointMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_IsValid_ReturnValue) == 0x0007E8, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, K2Node_CreateDelegate_OutputDelegate) == 0x0007EC, "Member 'MapWidget_Map_C_UpdateWarpPointEx::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_CalcMapPosition_MapLocation) == 0x0007FC, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_CalcMapPosition_MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_BooleanAND_ReturnValue) == 0x000804, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, Temp_int_Variable) == 0x000808, "Member 'MapWidget_Map_C_UpdateWarpPointEx::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetPlayerController_ReturnValue) == 0x000810, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Array_Get_Item_1) == 0x000818, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_IsValid_ReturnValue_1) == 0x000820, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000828, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, K2Node_DynamicCast_AsSBPlayer_State) == 0x000830, "Member 'MapWidget_Map_C_UpdateWarpPointEx::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, K2Node_DynamicCast_bSuccess) == 0x000838, "Member 'MapWidget_Map_C_UpdateWarpPointEx::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_Add_IntInt_ReturnValue_1) == 0x00083C, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_GetWarpPoints_OutArray) == 0x000840, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_GetWarpPoints_OutArray' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000850, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_UpdateWarpPointEx, CallFunc_BooleanAND_ReturnValue_1) == 0x000851, "Member 'MapWidget_Map_C_UpdateWarpPointEx::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIconEx
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_ClearWarpPointIconEx final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_162F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_WarpPointIcon_C*             CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_ClearWarpPointIconEx) == 0x000008, "Wrong alignment on MapWidget_Map_C_ClearWarpPointIconEx");
static_assert(sizeof(MapWidget_Map_C_ClearWarpPointIconEx) == 0x000020, "Wrong size on MapWidget_Map_C_ClearWarpPointIconEx");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIconEx, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MapWidget_Map_C_ClearWarpPointIconEx::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIconEx, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MapWidget_Map_C_ClearWarpPointIconEx::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIconEx, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_ClearWarpPointIconEx::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIconEx, CallFunc_Array_Get_Item) == 0x000010, "Member 'MapWidget_Map_C_ClearWarpPointIconEx::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIconEx, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_ClearWarpPointIconEx::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIconEx, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'MapWidget_Map_C_ClearWarpPointIconEx::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_ClearWarpPointIconEx, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'MapWidget_Map_C_ClearWarpPointIconEx::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.OnPressed_QuestIcon
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_Map_C_OnPressed_QuestIcon final
{
public:
	int32                                         InQuestId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_OnPressed_QuestIcon) == 0x000004, "Wrong alignment on MapWidget_Map_C_OnPressed_QuestIcon");
static_assert(sizeof(MapWidget_Map_C_OnPressed_QuestIcon) == 0x000004, "Wrong size on MapWidget_Map_C_OnPressed_QuestIcon");
static_assert(offsetof(MapWidget_Map_C_OnPressed_QuestIcon, InQuestId) == 0x000000, "Member 'MapWidget_Map_C_OnPressed_QuestIcon::InQuestId' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetNamedEnemyLevelColor
// 0x0090 (0x0090 - 0x0000)
struct MapWidget_Map_C_GetNamedEnemyLevelColor final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1630[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            OutColor;                                          // 0x0008(0x0028)(Parm, OutParm)
	TArray<struct FLinearColor>                   TmpTextColorList;                                  // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpColorIndex;                                     // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1631[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0058(0x0028)()
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_4;        // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetNamedEnemyLevelColor) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetNamedEnemyLevelColor");
static_assert(sizeof(MapWidget_Map_C_GetNamedEnemyLevelColor) == 0x000090, "Wrong size on MapWidget_Map_C_GetNamedEnemyLevelColor");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, InLevel) == 0x000000, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::InLevel' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, OutColor) == 0x000008, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::OutColor' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, TmpTextColorList) == 0x000030, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::TmpTextColorList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, TmpColorIndex) == 0x000040, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::TmpColorIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, K2Node_MakeArray_Array) == 0x000048, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, K2Node_MakeStruct_SlateColor) == 0x000058, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, CallFunc_GetClassLevel_ReturnValue) == 0x000080, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, CallFunc_Subtract_IntInt_ReturnValue) == 0x000084, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000089, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x00008A, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x00008B, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetNamedEnemyLevelColor, CallFunc_GreaterEqual_IntInt_ReturnValue_4) == 0x00008C, "Member 'MapWidget_Map_C_GetNamedEnemyLevelColor::CallFunc_GreaterEqual_IntInt_ReturnValue_4' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.Get Portal to Location
// 0x00E8 (0x00E8 - 0x0000)
struct MapWidget_Map_C_Get_Portal_to_Location final
{
public:
	class FString                                 InPortalName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 OutLocationName;                                   // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpString;                                         // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1632[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1633[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1634[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1635[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLocationInfo                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0068(0x0050)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1636[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_Get_Portal_to_Location) == 0x000008, "Wrong alignment on MapWidget_Map_C_Get_Portal_to_Location");
static_assert(sizeof(MapWidget_Map_C_Get_Portal_to_Location) == 0x0000E8, "Wrong size on MapWidget_Map_C_Get_Portal_to_Location");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, InPortalName) == 0x000000, "Member 'MapWidget_Map_C_Get_Portal_to_Location::InPortalName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, OutLocationName) == 0x000010, "Member 'MapWidget_Map_C_Get_Portal_to_Location::OutLocationName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, TmpString) == 0x000020, "Member 'MapWidget_Map_C_Get_Portal_to_Location::TmpString' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, Temp_bool_True_if_break_was_hit_Variable) == 0x000030, "Member 'MapWidget_Map_C_Get_Portal_to_Location::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, Temp_int_Array_Index_Variable) == 0x000034, "Member 'MapWidget_Map_C_Get_Portal_to_Location::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'MapWidget_Map_C_Get_Portal_to_Location::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000048, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_Array_Get_Item) == 0x00005C, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_GetDataTableRowFromName_OutRow) == 0x000068, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_BooleanAND_ReturnValue) == 0x0000B9, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_Conv_NameToString_ReturnValue) == 0x0000C0, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Portal_to_Location, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000E0, "Member 'MapWidget_Map_C_Get_Portal_to_Location::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.Get Quest Category 2Name
// 0x0090 (0x0090 - 0x0000)
struct MapWidget_Map_C_Get_Quest_Category_2Name final
{
public:
	EQuestCategory2                               InCategory;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1637[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	EQuestCategory2                               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1638[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_4;                            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_5;                            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_Get_Quest_Category_2Name) == 0x000008, "Wrong alignment on MapWidget_Map_C_Get_Quest_Category_2Name");
static_assert(sizeof(MapWidget_Map_C_Get_Quest_Category_2Name) == 0x000090, "Wrong size on MapWidget_Map_C_Get_Quest_Category_2Name");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, InCategory) == 0x000000, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::InCategory' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Param_Name) == 0x000008, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Param_Name' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Temp_byte_Variable) == 0x000018, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Temp_string_Variable) == 0x000020, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Temp_string_Variable_1) == 0x000030, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Temp_string_Variable_2) == 0x000040, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Temp_string_Variable_3) == 0x000050, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Temp_string_Variable_4) == 0x000060, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, Temp_string_Variable_5) == 0x000070, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_Get_Quest_Category_2Name, K2Node_Select_Default) == 0x000080, "Member 'MapWidget_Map_C_Get_Quest_Category_2Name::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.DebugQuestInfoPrint
// 0x0398 (0x0398 - 0x0000)
struct MapWidget_Map_C_DebugQuestInfoPrint final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InPriority;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1639[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0010(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_163A[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_163B[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Quest_Category_2Name_Name;            // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0158(0x0018)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0170(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0188(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01C8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_163C[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0228(0x0018)()
	bool                                          CallFunc_CheckPreconditionByIndex_ReturnValue;     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_163D[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0248(0x0040)(HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_163E[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestStatusString_ReturnValue;         // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02B0(0x0018)()
	class FString                                 K2Node_Select_Default;                             // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x02D8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0318(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0330(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0370(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0380(0x0018)()
};
static_assert(alignof(MapWidget_Map_C_DebugQuestInfoPrint) == 0x000008, "Wrong alignment on MapWidget_Map_C_DebugQuestInfoPrint");
static_assert(sizeof(MapWidget_Map_C_DebugQuestInfoPrint) == 0x000398, "Wrong size on MapWidget_Map_C_DebugQuestInfoPrint");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, InIndex) == 0x000000, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::InIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, InPriority) == 0x000004, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::InPriority' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, Temp_bool_Variable) == 0x000008, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000010, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_FindQuestMasterData_Exist) == 0x000128, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, Temp_string_Variable) == 0x000130, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_IsDebug_ReturnValue) == 0x000140, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Get_Quest_Category_2Name_Name) == 0x000148, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Get_Quest_Category_2Name_Name' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Conv_StringToText_ReturnValue) == 0x000158, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Conv_NameToText_ReturnValue) == 0x000170, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, K2Node_MakeStruct_FormatArgumentData) == 0x000188, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001C8, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Conv_IntToString_ReturnValue) == 0x000208, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_GetNetworkDataCache_IsValid) == 0x000218, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000220, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000228, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_CheckPreconditionByIndex_ReturnValue) == 0x000240, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_CheckPreconditionByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, K2Node_MakeStruct_FormatArgumentData_2) == 0x000248, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_GetQuestStatus_ReturnValue) == 0x000288, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_GetQuestName_ReturnValue) == 0x000290, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_GetQuestStatusString_ReturnValue) == 0x0002A0, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_GetQuestStatusString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002B0, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, K2Node_Select_Default) == 0x0002C8, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, K2Node_MakeStruct_FormatArgumentData_3) == 0x0002D8, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000318, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, K2Node_MakeStruct_FormatArgumentData_4) == 0x000330, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, K2Node_MakeArray_Array) == 0x000370, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_DebugQuestInfoPrint, CallFunc_Format_ReturnValue) == 0x000380, "Member 'MapWidget_Map_C_DebugQuestInfoPrint::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.SetPinMode
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_Map_C_SetPinMode final
{
public:
	bool                                          IsPinSelected;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_163F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1640[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_SetPinMode) == 0x000008, "Wrong alignment on MapWidget_Map_C_SetPinMode");
static_assert(sizeof(MapWidget_Map_C_SetPinMode) == 0x000018, "Wrong size on MapWidget_Map_C_SetPinMode");
static_assert(offsetof(MapWidget_Map_C_SetPinMode, IsPinSelected) == 0x000000, "Member 'MapWidget_Map_C_SetPinMode::IsPinSelected' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetPinMode, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_SetPinMode::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetPinMode, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_SetPinMode::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_SetPinMode, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_SetPinMode::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CalcMapPosition
// 0x0050 (0x0050 - 0x0000)
struct MapWidget_Map_C_CalcMapPosition final
{
public:
	struct FVector2D                              WorldLocation;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MapLocation;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMapBodySize_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CalcMapPosition) == 0x000004, "Wrong alignment on MapWidget_Map_C_CalcMapPosition");
static_assert(sizeof(MapWidget_Map_C_CalcMapPosition) == 0x000050, "Wrong size on MapWidget_Map_C_CalcMapPosition");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, WorldLocation) == 0x000000, "Member 'MapWidget_Map_C_CalcMapPosition::WorldLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, MapLocation) == 0x000008, "Member 'MapWidget_Map_C_CalcMapPosition::MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_GetMapBodySize_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_GetMapBodySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_BreakVector2D_X) == 0x000018, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_BreakVector2D_Y) == 0x00001C, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_BreakVector2D_X_1) == 0x000030, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_BreakVector2D_Y_1) == 0x000034, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_FClamp_ReturnValue) == 0x000038, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_FClamp_ReturnValue_1) == 0x00003C, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcMapPosition, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000048, "Member 'MapWidget_Map_C_CalcMapPosition::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.CalcWorldPosition
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_CalcWorldPosition final
{
public:
	struct FVector2D                              MapLocation;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              WorldLocation;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_CalcWorldPosition) == 0x000004, "Wrong alignment on MapWidget_Map_C_CalcWorldPosition");
static_assert(sizeof(MapWidget_Map_C_CalcWorldPosition) == 0x000020, "Wrong size on MapWidget_Map_C_CalcWorldPosition");
static_assert(offsetof(MapWidget_Map_C_CalcWorldPosition, MapLocation) == 0x000000, "Member 'MapWidget_Map_C_CalcWorldPosition::MapLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcWorldPosition, WorldLocation) == 0x000008, "Member 'MapWidget_Map_C_CalcWorldPosition::WorldLocation' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcWorldPosition, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_CalcWorldPosition::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_CalcWorldPosition, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_CalcWorldPosition::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapBodySize
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_GetMapBodySize final
{
public:
	struct FVector2D                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetMapBodySize) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapBodySize");
static_assert(sizeof(MapWidget_Map_C_GetMapBodySize) == 0x000020, "Wrong size on MapWidget_Map_C_GetMapBodySize");
static_assert(offsetof(MapWidget_Map_C_GetMapBodySize, ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_GetMapBodySize::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBodySize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_GetMapBodySize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBodySize, CallFunc_GetSize_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_GetMapBodySize::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBodySize, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_GetMapBodySize::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapBodyPosition
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_Map_C_GetMapBodyPosition final
{
public:
	struct FVector2D                              OutPosition;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetMapBodyPosition) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapBodyPosition");
static_assert(sizeof(MapWidget_Map_C_GetMapBodyPosition) == 0x000020, "Wrong size on MapWidget_Map_C_GetMapBodyPosition");
static_assert(offsetof(MapWidget_Map_C_GetMapBodyPosition, OutPosition) == 0x000000, "Member 'MapWidget_Map_C_GetMapBodyPosition::OutPosition' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBodyPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_GetMapBodyPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBodyPosition, CallFunc_GetPosition_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_GetMapBodyPosition::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBodyPosition, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MapWidget_Map_C_GetMapBodyPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromIndex
// 0x0130 (0x0130 - 0x0000)
struct MapWidget_Map_C_GetMapBGConfigFromIndex final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1641[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 OutMapBGConfig;                                    // 0x0008(0x0078)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1642[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetMapBGConfigRowNames_ReturnValue;       // 0x0090(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1643[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x00B0(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetMapBGConfigFromIndex) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapBGConfigFromIndex");
static_assert(sizeof(MapWidget_Map_C_GetMapBGConfigFromIndex) == 0x000130, "Wrong size on MapWidget_Map_C_GetMapBGConfigFromIndex");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, InIndex) == 0x000000, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::InIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, OutMapBGConfig) == 0x000008, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::OutMapBGConfig' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, Temp_int_Array_Index_Variable) == 0x000080, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_GetMapBGConfigRowNames_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_GetMapBGConfigRowNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x0000B0, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x000128, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000129, "Member 'MapWidget_Map_C_GetMapBGConfigFromIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromMapId
// 0x0150 (0x0150 - 0x0000)
struct MapWidget_Map_C_GetMapBGConfigFromMapId final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 OutMapBGConfig;                                    // 0x0010(0x0078)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1644[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetMapBGConfigRowNames_ReturnValue;       // 0x0098(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1645[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x00B8(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1646[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetMapBGConfigFromMapId) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapBGConfigFromMapId");
static_assert(sizeof(MapWidget_Map_C_GetMapBGConfigFromMapId) == 0x000150, "Wrong size on MapWidget_Map_C_GetMapBGConfigFromMapId");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, InMapId) == 0x000000, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, OutMapBGConfig) == 0x000010, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::OutMapBGConfig' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, Temp_int_Array_Index_Variable) == 0x000088, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_GetMapBGConfigRowNames_ReturnValue) == 0x000098, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_GetMapBGConfigRowNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x0000B8, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x000130, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_Less_IntInt_ReturnValue) == 0x000131, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_Conv_NameToString_ReturnValue) == 0x000138, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigFromMapId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000148, "Member 'MapWidget_Map_C_GetMapBGConfigFromMapId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromBoxIndex
// 0x0058 (0x0058 - 0x0000)
struct MapWidget_Map_C_GetMapPinInfoFromBoxIndex final
{
public:
	int32                                         InPinId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1647[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            OutMapPinInfo;                                     // 0x0008(0x0040)(Parm, OutParm)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1648[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapPinInfoFromBoxIndex");
static_assert(sizeof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex) == 0x000058, "Wrong size on MapWidget_Map_C_GetMapPinInfoFromBoxIndex");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex, InPinId) == 0x000000, "Member 'MapWidget_Map_C_GetMapPinInfoFromBoxIndex::InPinId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex, IsValid) == 0x000004, "Member 'MapWidget_Map_C_GetMapPinInfoFromBoxIndex::IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex, OutMapPinInfo) == 0x000008, "Member 'MapWidget_Map_C_GetMapPinInfoFromBoxIndex::OutMapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000048, "Member 'MapWidget_Map_C_GetMapPinInfoFromBoxIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'MapWidget_Map_C_GetMapPinInfoFromBoxIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_GetMapPinInfoFromBoxIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromBoxIndex, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'MapWidget_Map_C_GetMapPinInfoFromBoxIndex::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.IsSavingMapPinInfo
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_IsSavingMapPinInfo final
{
public:
	bool                                          Param_IsSavingMapPinInfo;                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_IsSavingMapPinInfo) == 0x000001, "Wrong alignment on MapWidget_Map_C_IsSavingMapPinInfo");
static_assert(sizeof(MapWidget_Map_C_IsSavingMapPinInfo) == 0x000001, "Wrong size on MapWidget_Map_C_IsSavingMapPinInfo");
static_assert(offsetof(MapWidget_Map_C_IsSavingMapPinInfo, Param_IsSavingMapPinInfo) == 0x000000, "Member 'MapWidget_Map_C_IsSavingMapPinInfo::Param_IsSavingMapPinInfo' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.FindPinInfoByPinIndex
// 0x00F8 (0x00F8 - 0x0000)
struct MapWidget_Map_C_FindPinInfoByPinIndex final
{
public:
	TArray<struct FMapPinInfo>                    InPinInfoList;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FMapPinInfo                            InTargetPinInfo;                                   // 0x0010(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMapPinInfo                            OutPinInfo;                                        // 0x0050(0x0040)(Parm, OutParm)
	bool                                          OutResult;                                         // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1649[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164A[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPinInfo                            CallFunc_Array_Get_Item;                           // 0x00A0(0x0040)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164B[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164C[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_FindPinInfoByPinIndex) == 0x000008, "Wrong alignment on MapWidget_Map_C_FindPinInfoByPinIndex");
static_assert(sizeof(MapWidget_Map_C_FindPinInfoByPinIndex) == 0x0000F8, "Wrong size on MapWidget_Map_C_FindPinInfoByPinIndex");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, InPinInfoList) == 0x000000, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::InPinInfoList' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, InTargetPinInfo) == 0x000010, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::InTargetPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, OutPinInfo) == 0x000050, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::OutPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, OutResult) == 0x000090, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::OutResult' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, Temp_bool_True_if_break_was_hit_Variable) == 0x000098, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, Temp_int_Array_Index_Variable) == 0x00009C, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, CallFunc_Not_PreBool_ReturnValue) == 0x0000E0, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E1, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, Temp_int_Loop_Counter_Variable) == 0x0000E4, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, CallFunc_Add_IntInt_ReturnValue) == 0x0000EC, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_FindPinInfoByPinIndex, CallFunc_BooleanAND_ReturnValue) == 0x0000F0, "Member 'MapWidget_Map_C_FindPinInfoByPinIndex::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetVacantAreaMapPin
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_Map_C_GetVacantAreaMapPin final
{
public:
	class UMapWidget_MapPinnedPin_C*              OutPinRef;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPinVacant;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164D[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAreaMapPinMax_AreaMapPinMax;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_GetVacantAreaMapPin) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetVacantAreaMapPin");
static_assert(sizeof(MapWidget_Map_C_GetVacantAreaMapPin) == 0x000038, "Wrong size on MapWidget_Map_C_GetVacantAreaMapPin");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, OutPinRef) == 0x000000, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::OutPinRef' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, IsPinVacant) == 0x000008, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::IsPinVacant' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, Temp_bool_Variable) == 0x000009, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, Temp_object_Variable) == 0x000010, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, CallFunc_GetAreaMapPinMax_AreaMapPinMax) == 0x000018, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::CallFunc_GetAreaMapPinMax_AreaMapPinMax' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, CallFunc_Array_Get_Item) == 0x000020, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetVacantAreaMapPin, K2Node_Select_Default) == 0x000030, "Member 'MapWidget_Map_C_GetVacantAreaMapPin::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.IsEnablePinIcon
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_IsEnablePinIcon final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1650[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPinnedPinCnd_PinnedPinCnt;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAreaMapPinMax_AreaMapPinMax;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_IsEnablePinIcon) == 0x000004, "Wrong alignment on MapWidget_Map_C_IsEnablePinIcon");
static_assert(sizeof(MapWidget_Map_C_IsEnablePinIcon) == 0x000010, "Wrong size on MapWidget_Map_C_IsEnablePinIcon");
static_assert(offsetof(MapWidget_Map_C_IsEnablePinIcon, ReturnValue) == 0x000000, "Member 'MapWidget_Map_C_IsEnablePinIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_IsEnablePinIcon, CallFunc_GetPinnedPinCnd_PinnedPinCnt) == 0x000004, "Member 'MapWidget_Map_C_IsEnablePinIcon::CallFunc_GetPinnedPinCnd_PinnedPinCnt' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_IsEnablePinIcon, CallFunc_GetAreaMapPinMax_AreaMapPinMax) == 0x000008, "Member 'MapWidget_Map_C_IsEnablePinIcon::CallFunc_GetAreaMapPinMax_AreaMapPinMax' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_IsEnablePinIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'MapWidget_Map_C_IsEnablePinIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetPinnedPinCnd
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_Map_C_GetPinnedPinCnd final
{
public:
	int32                                         Param_PinnedPinCnt;                                // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_GetPinnedPinCnd) == 0x000004, "Wrong alignment on MapWidget_Map_C_GetPinnedPinCnd");
static_assert(sizeof(MapWidget_Map_C_GetPinnedPinCnd) == 0x000004, "Wrong size on MapWidget_Map_C_GetPinnedPinCnd");
static_assert(offsetof(MapWidget_Map_C_GetPinnedPinCnd, Param_PinnedPinCnt) == 0x000000, "Member 'MapWidget_Map_C_GetPinnedPinCnd::Param_PinnedPinCnt' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoList
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_Map_C_GetMapPinInfoList final
{
public:
	TArray<struct FMapPinInfo>                    Param_MapPinInfoList;                              // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(MapWidget_Map_C_GetMapPinInfoList) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapPinInfoList");
static_assert(sizeof(MapWidget_Map_C_GetMapPinInfoList) == 0x000010, "Wrong size on MapWidget_Map_C_GetMapPinInfoList");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoList, Param_MapPinInfoList) == 0x000000, "Member 'MapWidget_Map_C_GetMapPinInfoList::Param_MapPinInfoList' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromPinId
// 0x0058 (0x0058 - 0x0000)
struct MapWidget_Map_C_GetMapPinInfoFromPinId final
{
public:
	int32                                         InPinId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1651[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPinInfo                            OutMapPinInfo;                                     // 0x0008(0x0040)(Parm, OutParm)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1652[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetMapPinInfoFromPinId) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapPinInfoFromPinId");
static_assert(sizeof(MapWidget_Map_C_GetMapPinInfoFromPinId) == 0x000058, "Wrong size on MapWidget_Map_C_GetMapPinInfoFromPinId");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromPinId, InPinId) == 0x000000, "Member 'MapWidget_Map_C_GetMapPinInfoFromPinId::InPinId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromPinId, IsValid) == 0x000004, "Member 'MapWidget_Map_C_GetMapPinInfoFromPinId::IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromPinId, OutMapPinInfo) == 0x000008, "Member 'MapWidget_Map_C_GetMapPinInfoFromPinId::OutMapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromPinId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000048, "Member 'MapWidget_Map_C_GetMapPinInfoFromPinId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromPinId, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'MapWidget_Map_C_GetMapPinInfoFromPinId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromPinId, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_GetMapPinInfoFromPinId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapPinInfoFromPinId, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'MapWidget_Map_C_GetMapPinInfoFromPinId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigRowName
// 0x0168 (0x0168 - 0x0000)
struct MapWidget_Map_C_GetMapBGConfigRowName final
{
public:
	struct FSBMapBGConfigTableRow                 InMagBGConfig;                                     // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          OutIsValid;                                        // 0x0078(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1653[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutRowName;                                        // 0x0080(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   TmpCurrRowName;                                    // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           TmpRowNames;                                       // 0x0098(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1654[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetMapBGConfigRowNames_ReturnValue;       // 0x00B8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1655[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x00E8(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetMapBGConfigRowName) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetMapBGConfigRowName");
static_assert(sizeof(MapWidget_Map_C_GetMapBGConfigRowName) == 0x000168, "Wrong size on MapWidget_Map_C_GetMapBGConfigRowName");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, InMagBGConfig) == 0x000000, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::InMagBGConfig' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, OutIsValid) == 0x000078, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::OutIsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, OutRowName) == 0x000080, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::OutRowName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, TmpCurrRowName) == 0x000090, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::TmpCurrRowName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, TmpRowNames) == 0x000098, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::TmpRowNames' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, Temp_int_Loop_Counter_Variable) == 0x0000AC, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_GetMapBGConfigRowNames_ReturnValue) == 0x0000B8, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_GetMapBGConfigRowNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_Conv_NameToString_ReturnValue) == 0x0000D8, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x0000E8, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x000160, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetMapBGConfigRowName, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000161, "Member 'MapWidget_Map_C_GetMapBGConfigRowName::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetWarpPointDataFromName
// 0x0120 (0x0120 - 0x0000)
struct MapWidget_Map_C_GetWarpPointDataFromName final
{
public:
	class FString                                 InWarpPointName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1656[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterWarpPoint                     OutWarpPointData;                                  // 0x0018(0x0068)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1657[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWarpPointMasterData_IsExists;          // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1658[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterWarpPoint                     CallFunc_GetWarpPointMasterData_ReturnValue;       // 0x00A8(0x0068)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1659[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_GetWarpPointDataFromName) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetWarpPointDataFromName");
static_assert(sizeof(MapWidget_Map_C_GetWarpPointDataFromName) == 0x000120, "Wrong size on MapWidget_Map_C_GetWarpPointDataFromName");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, InWarpPointName) == 0x000000, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::InWarpPointName' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, IsValid) == 0x000010, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, OutWarpPointData) == 0x000018, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::OutWarpPointData' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, Temp_int_Array_Index_Variable) == 0x000080, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_GetMasterDataManager_IsValid) == 0x00008C, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_Array_Get_Item) == 0x000098, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_GetWarpPointMasterData_IsExists) == 0x0000A4, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_GetWarpPointMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_GetWarpPointMasterData_ReturnValue) == 0x0000A8, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_GetWarpPointMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000111, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_Array_Length_ReturnValue_1) == 0x000114, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetWarpPointDataFromName, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'MapWidget_Map_C_GetWarpPointDataFromName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetWarpConfirmationTextIdx
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_Map_C_GetWarpConfirmationTextIdx final
{
public:
	int32                                         TextIdx;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_GetWarpConfirmationTextIdx) == 0x000004, "Wrong alignment on MapWidget_Map_C_GetWarpConfirmationTextIdx");
static_assert(sizeof(MapWidget_Map_C_GetWarpConfirmationTextIdx) == 0x000004, "Wrong size on MapWidget_Map_C_GetWarpConfirmationTextIdx");
static_assert(offsetof(MapWidget_Map_C_GetWarpConfirmationTextIdx, TextIdx) == 0x000000, "Member 'MapWidget_Map_C_GetWarpConfirmationTextIdx::TextIdx' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.getQuestIconZOrder
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_Map_C_GetQuestIconZOrder final
{
public:
	EQuestCategory2                               Category2;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  Status;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_165A[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  TmpQuestStatus;                                    // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMapSymbolIconType                            Temp_byte_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_3;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  Temp_byte_Variable_4;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_5;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_6;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_7;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_8;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_9;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_10;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  Temp_byte_Variable_11;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_12;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_13;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_14;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_15;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_16;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_17;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_18;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            K2Node_Select_Default_1;                           // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_165B[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue_1;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapSymbolIconType                            Temp_byte_Variable_19;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165C[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  Temp_byte_Variable_20;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPreconditionByIndex_ReturnValue;     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMapSymbolIconType                            K2Node_Select_Default_2;                           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_165D[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMapIconZOrder_ReturnValue_2;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_GetQuestIconZOrder) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetQuestIconZOrder");
static_assert(sizeof(MapWidget_Map_C_GetQuestIconZOrder) == 0x000040, "Wrong size on MapWidget_Map_C_GetQuestIconZOrder");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Category2) == 0x000000, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Category2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Status) == 0x000001, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Status' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, QuestIndex) == 0x000004, "Member 'MapWidget_Map_C_GetQuestIconZOrder::QuestIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, ReturnValue) == 0x000008, "Member 'MapWidget_Map_C_GetQuestIconZOrder::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, TmpQuestStatus) == 0x00000C, "Member 'MapWidget_Map_C_GetQuestIconZOrder::TmpQuestStatus' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable) == 0x00000D, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, K2Node_SwitchEnum_CmpSuccess) == 0x00000E, "Member 'MapWidget_Map_C_GetQuestIconZOrder::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_1) == 0x00000F, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_2) == 0x000010, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_3) == 0x000011, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_4) == 0x000012, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_5) == 0x000013, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_6) == 0x000014, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_7) == 0x000015, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_8) == 0x000016, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_9) == 0x000017, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_10) == 0x000018, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_11) == 0x000019, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_12) == 0x00001A, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_13) == 0x00001B, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_14) == 0x00001C, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_15) == 0x00001D, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_16) == 0x00001E, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_17) == 0x00001F, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_18) == 0x000020, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, K2Node_Select_Default) == 0x000021, "Member 'MapWidget_Map_C_GetQuestIconZOrder::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, K2Node_Select_Default_1) == 0x000022, "Member 'MapWidget_Map_C_GetQuestIconZOrder::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, CallFunc_GetMapIconZOrder_ReturnValue) == 0x000024, "Member 'MapWidget_Map_C_GetQuestIconZOrder::CallFunc_GetMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, CallFunc_GetMapIconZOrder_ReturnValue_1) == 0x000028, "Member 'MapWidget_Map_C_GetQuestIconZOrder::CallFunc_GetMapIconZOrder_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_19) == 0x00002C, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, CallFunc_GetNetworkDataCache_IsValid) == 0x00002D, "Member 'MapWidget_Map_C_GetQuestIconZOrder::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000030, "Member 'MapWidget_Map_C_GetQuestIconZOrder::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, Temp_byte_Variable_20) == 0x000038, "Member 'MapWidget_Map_C_GetQuestIconZOrder::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, CallFunc_CheckPreconditionByIndex_ReturnValue) == 0x000039, "Member 'MapWidget_Map_C_GetQuestIconZOrder::CallFunc_CheckPreconditionByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, K2Node_Select_Default_2) == 0x00003A, "Member 'MapWidget_Map_C_GetQuestIconZOrder::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_GetQuestIconZOrder, CallFunc_GetMapIconZOrder_ReturnValue_2) == 0x00003C, "Member 'MapWidget_Map_C_GetQuestIconZOrder::CallFunc_GetMapIconZOrder_ReturnValue_2' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.IsDisplayQuestIconStandby
// 0x0005 (0x0005 - 0x0000)
struct MapWidget_Map_C_IsDisplayQuestIconStandby final
{
public:
	EQuestCategory2                               QuestCategory2;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisplay;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_IsDisplayQuestIconStandby) == 0x000001, "Wrong alignment on MapWidget_Map_C_IsDisplayQuestIconStandby");
static_assert(sizeof(MapWidget_Map_C_IsDisplayQuestIconStandby) == 0x000005, "Wrong size on MapWidget_Map_C_IsDisplayQuestIconStandby");
static_assert(offsetof(MapWidget_Map_C_IsDisplayQuestIconStandby, QuestCategory2) == 0x000000, "Member 'MapWidget_Map_C_IsDisplayQuestIconStandby::QuestCategory2' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_IsDisplayQuestIconStandby, bDisplay) == 0x000001, "Member 'MapWidget_Map_C_IsDisplayQuestIconStandby::bDisplay' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_IsDisplayQuestIconStandby, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'MapWidget_Map_C_IsDisplayQuestIconStandby::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_IsDisplayQuestIconStandby, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'MapWidget_Map_C_IsDisplayQuestIconStandby::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_IsDisplayQuestIconStandby, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'MapWidget_Map_C_IsDisplayQuestIconStandby::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.PublicDungeon_DirectWarpCheck
// 0x0058 (0x0058 - 0x0000)
struct MapWidget_Map_C_PublicDungeon_DirectWarpCheck final
{
public:
	class FName                                   DungeonId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPublicDungeon_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165F[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1660[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetWarpPoints_OutArray;                   // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck) == 0x000008, "Wrong alignment on MapWidget_Map_C_PublicDungeon_DirectWarpCheck");
static_assert(sizeof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck) == 0x000058, "Wrong size on MapWidget_Map_C_PublicDungeon_DirectWarpCheck");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, DungeonId) == 0x000000, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::DungeonId' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, IsOpen) == 0x000008, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::IsOpen' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, CallFunc_IsPublicDungeon_ReturnValue) == 0x000028, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::CallFunc_IsPublicDungeon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, K2Node_DynamicCast_AsSBPlayer_State) == 0x000030, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, CallFunc_GetWarpPoints_OutArray) == 0x000040, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::CallFunc_GetWarpPoints_OutArray' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, CallFunc_Array_Find_ReturnValue) == 0x000050, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Map_C_PublicDungeon_DirectWarpCheck, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000054, "Member 'MapWidget_Map_C_PublicDungeon_DirectWarpCheck::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.IsWorldMapFlag
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Map_C_IsWorldMapFlag final
{
public:
	bool                                          IsWorldMap;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Map_C_IsWorldMapFlag) == 0x000001, "Wrong alignment on MapWidget_Map_C_IsWorldMapFlag");
static_assert(sizeof(MapWidget_Map_C_IsWorldMapFlag) == 0x000001, "Wrong size on MapWidget_Map_C_IsWorldMapFlag");
static_assert(offsetof(MapWidget_Map_C_IsWorldMapFlag, IsWorldMap) == 0x000000, "Member 'MapWidget_Map_C_IsWorldMapFlag::IsWorldMap' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetAreaMapPinMax
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_Map_C_GetAreaMapPinMax final
{
public:
	int32                                         Param_AreaMapPinMax;                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_Map_C_GetAreaMapPinMax) == 0x000004, "Wrong alignment on MapWidget_Map_C_GetAreaMapPinMax");
static_assert(sizeof(MapWidget_Map_C_GetAreaMapPinMax) == 0x000004, "Wrong size on MapWidget_Map_C_GetAreaMapPinMax");
static_assert(offsetof(MapWidget_Map_C_GetAreaMapPinMax, Param_AreaMapPinMax) == 0x000000, "Member 'MapWidget_Map_C_GetAreaMapPinMax::Param_AreaMapPinMax' has a wrong offset!");

// Function MapWidget_Map.MapWidget_Map_C.GetLoadData
// 0x0078 (0x0078 - 0x0000)
struct MapWidget_Map_C_GetLoadData final
{
public:
	struct FSBMapBGConfigTableRow                 Param_LoadData;                                    // 0x0000(0x0078)(Parm, OutParm)
};
static_assert(alignof(MapWidget_Map_C_GetLoadData) == 0x000008, "Wrong alignment on MapWidget_Map_C_GetLoadData");
static_assert(sizeof(MapWidget_Map_C_GetLoadData) == 0x000078, "Wrong size on MapWidget_Map_C_GetLoadData");
static_assert(offsetof(MapWidget_Map_C_GetLoadData, Param_LoadData) == 0x000000, "Member 'MapWidget_Map_C_GetLoadData::Param_LoadData' has a wrong offset!");

}

