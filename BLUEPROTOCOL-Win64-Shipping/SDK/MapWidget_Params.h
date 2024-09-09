#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MapWidget.MapWidget_C.TermRequest
	 */
	struct UMapWidget_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.CheckMapInTemple
	 */
	struct UMapWidget_C_CheckMapInTemple_Params
	{
	public:
		bool                                                       OutParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MP2I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget.MapWidget_C.CalcPinWorldPosition
	 */
	struct UMapWidget_C_CalcPinWorldPosition_Params
	{
	public:
		struct FVector2D                                           InPinnedLocation;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.EXSettingMapCheck
	 */
	struct UMapWidget_C_EXSettingMapCheck_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.SetupMapDefaultScroll
	 */
	struct UMapWidget_C_SetupMapDefaultScroll_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           MapSize;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.UpdateMapName
	 */
	struct UMapWidget_C_UpdateMapName_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.PublicDungeonCheck
	 */
	struct UMapWidget_C_PublicDungeonCheck_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.GetZoneDBZoneIdFromRowName
	 */
	struct UMapWidget_C_GetZoneDBZoneIdFromRowName_Params
	{
	public:
		class FName                                                InRowName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3FOI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                OutZoneId;                                               // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.GetZoneDBRowNameFromZoneId
	 */
	struct UMapWidget_C_GetZoneDBRowNameFromZoneId_Params
	{
	public:
		class FString                                              InZoneId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UD1W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                OutRowName;                                              // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.GetIsRmShopDisplayed
	 */
	struct UMapWidget_C_GetIsRmShopDisplayed_Params
	{
	public:
		bool                                                       OutIsRmShopDisplayed;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8P0P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget.MapWidget_C.GetTopMapIdByDividedZoneId
	 */
	struct UMapWidget_C_GetTopMapIdByDividedZoneId_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              OutTopMapId;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.CheckIfMapIsDividedZone
	 */
	struct UMapWidget_C_CheckIfMapIsDividedZone_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutMapIsDividedZone;                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VN5Z[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget.MapWidget_C.CheckIfMapHasDividedZone
	 */
	struct UMapWidget_C_CheckIfMapHasDividedZone_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutMapHasDividedZones;                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1QVW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget.MapWidget_C.TraverseUpdate
	 */
	struct UMapWidget_C_TraverseUpdate_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Floor;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C7J8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget.MapWidget_C.IsMapListAdd
	 */
	struct UMapWidget_C_IsMapListAdd_Params
	{
	public:
		struct FSBMapBGConfigTableRow                              CheckMap;                                                // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsAdd;                                                   // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPZL[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget.MapWidget_C.GetWorldMapId
	 */
	struct UMapWidget_C_GetWorldMapId_Params
	{
	public:
		class FString                                              OutId;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.SetupWarpPointDropDownList
	 */
	struct UMapWidget_C_SetupWarpPointDropDownList_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.SetupPinDropDownList
	 */
	struct UMapWidget_C_SetupPinDropDownList_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.SetupMap
	 */
	struct UMapWidget_C_SetupMap_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsWorldMap;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSelectedByDividedZoneList;                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LGYE[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget.MapWidget_C.GetCurrentMapId
	 */
	struct UMapWidget_C_GetCurrentMapId_Params
	{
	public:
		bool                                                       InIsWorldMap;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8AVB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutMapId;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutIsSubLevel;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A791[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutSubLevelId;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.SetupMapList
	 */
	struct UMapWidget_C_SetupMapList_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.CloseMapWidget
	 */
	struct UMapWidget_C_CloseMapWidget_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.TickForMapScroll
	 */
	struct UMapWidget_C_TickForMapScroll_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnPlayerViewScroll
	 */
	struct UMapWidget_C_OnPlayerViewScroll_Params
	{
	public:
		struct FVector2D                                           IconPosition;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ViewScale;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnDefaultScrollSetting
	 */
	struct UMapWidget_C_OnDefaultScrollSetting_Params
	{
	public:
		struct FVector2D                                           PlayerPos;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           FieldSize;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnUpdateTraverseCloudEvent
	 */
	struct UMapWidget_C_OnUpdateTraverseCloudEvent_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.CloseVisitedMapList
	 */
	struct UMapWidget_C_CloseVisitedMapList_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature_Params
	{
	public:
		class FString                                              InDividedZoneId;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.Construct
	 */
	struct UMapWidget_C_Construct_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.Destruct
	 */
	struct UMapWidget_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.Init
	 */
	struct UMapWidget_C_Init_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnChangeMap
	 */
	struct UMapWidget_C_OnChangeMap_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsWorldMap;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnChangeToRegionMap_イベント
	 */
	struct UMapWidget_C_OnChangeToRegionMap__Params
	{
	public:
		class FString                                              InRegionMapId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnFuncIconSelected
	 */
	struct UMapWidget_C_OnFuncIconSelected_Params
	{
	public:
		EMapFuncIconType                                           InSelectedFuncIconType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnSetMapScrollFunctionOnOffEvent
	 */
	struct UMapWidget_C_OnSetMapScrollFunctionOnOffEvent_Params
	{
	public:
		bool                                                       InIsScrollFunctionOn;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_254U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           InScrollHVLength;                                        // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnSubMenuUpdate
	 */
	struct UMapWidget_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnSameMenuBookmarkAccessNew
	 */
	struct UMapWidget_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnRMShopClosed
	 */
	struct UMapWidget_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnParentTerm
	 */
	struct UMapWidget_C_OnParentTerm_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnMapPressed_イベント
	 */
	struct UMapWidget_C_OnMapPressed__Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnStartSavePinInfo_イベント
	 */
	struct UMapWidget_C_OnStartSavePinInfo__Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.UpdatePinBox
	 */
	struct UMapWidget_C_UpdatePinBox_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnPinnedPinClicked_イベント
	 */
	struct UMapWidget_C_OnPinnedPinClicked__Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.StartShowErrorMessage
	 */
	struct UMapWidget_C_StartShowErrorMessage_Params
	{
	public:
		int32_t                                                    InMessageTextId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.EndShowErrorMessage
	 */
	struct UMapWidget_C_EndShowErrorMessage_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.DoChangeMapTypeSelected
	 */
	struct UMapWidget_C_DoChangeMapTypeSelected_Params
	{
	public:
		bool                                                       IsWorldMap;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnAnimationFinished
	 */
	struct UMapWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature_Params
	{
	public:
		class FString                                              InSelectedItemName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedItemId;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature_Params
	{
	public:
		class FString                                              InSelectedItemName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedItemId;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnWarpRequestAccepted_イベント
	 */
	struct UMapWidget_C_OnWarpRequestAccepted__Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.ResetInputModeToMapWidget
	 */
	struct UMapWidget_C_ResetInputModeToMapWidget_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.ChangeMouseCursorType
	 */
	struct UMapWidget_C_ChangeMouseCursorType_Params
	{
	public:
		EMapPinType                                                InMapPinType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefault
	 */
	struct UMapWidget_C_ResetMouseCursorTypeToDefault_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnWarpPointIconPressed_イベント
	 */
	struct UMapWidget_C_OnWarpPointIconPressed__Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnEndSavePinInfo_イベント
	 */
	struct UMapWidget_C_OnEndSavePinInfo__Params
	{
	public:
		bool                                                       IsResultSuccess;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBMapErrorCode                                            ErrorCode;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature
	 */
	struct UMapWidget_C_BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.OnPinBoxPinIconSelected_イベント
	 */
	struct UMapWidget_C_OnPinBoxPinIconSelected__Params
	{
	public:
		EMapPinType                                                InSelectedPinType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.UpdateMarkerPin
	 */
	struct UMapWidget_C_UpdateMarkerPin_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct UMapWidget_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.BookmarkUpdateRequest
	 */
	struct UMapWidget_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.UpdateBookmarkStatusButton
	 */
	struct UMapWidget_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function MapWidget.MapWidget_C.PreConstruct
	 */
	struct UMapWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget.MapWidget_C.Tick
	 */
	struct UMapWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnQuestDetailForMapChanged
	 */
	struct UMapWidget_C_OnQuestDetailForMapChanged_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget.MapWidget_C.ExecuteUbergraph_MapWidget
	 */
	struct UMapWidget_C_ExecuteUbergraph_MapWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget.MapWidget_C.OnClose__DelegateSignature
	 */
	struct UMapWidget_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
