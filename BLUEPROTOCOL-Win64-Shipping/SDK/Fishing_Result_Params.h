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
	 * Function Fishing_Result.Fishing_Result_C.CheckErrorCode
	 */
	struct UFishing_Result_C_CheckErrorCode_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.SetThumbnail
	 */
	struct UFishing_Result_C_SetThumbnail_Params
	{
	public:
		class FString                                              FishId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsBig;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_89EZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.Reuslt Visibility
	 */
	struct UFishing_Result_C_ReusltVisibility_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R3YV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.ShowCan'tGetItem
	 */
	struct UFishing_Result_C_ShowCantGetItem_Params
	{
	public:
		bool                                                       TrueIsVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O2RN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.ShowCan'tGetFish
	 */
	struct UFishing_Result_C_ShowCantGetFish_Params
	{
	public:
		bool                                                       TrueIsVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8IEO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.CheckBackPack
	 */
	struct UFishing_Result_C_CheckBackPack_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUTV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.CheckItemStorage
	 */
	struct UFishing_Result_C_CheckItemStorage_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4B9H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.SetFishPlate
	 */
	struct UFishing_Result_C_SetFishPlate_Params
	{
	public:
		bool                                                       UploadSuccess;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4KF6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FishId;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ItemName;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      FishLength;                                              // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemAmount;                                              // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNewFish;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsNewRecord;                                             // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBig;                                                   // 0x0032(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZG4B[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.OnLoaded_B741E7294084427C7364DF8A5FD7B5FB
	 */
	struct UFishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.Construct
	 */
	struct UFishing_Result_C_Construct_Params
	{	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.AnimStart
	 */
	struct UFishing_Result_C_AnimStart_Params
	{	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UFishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UFishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.Destruct
	 */
	struct UFishing_Result_C_Destruct_Params
	{	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.SetThumnailIcon
	 */
	struct UFishing_Result_C_SetThumnailIcon_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.PreConstruct
	 */
	struct UFishing_Result_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fishing_Result.Fishing_Result_C.ExecuteUbergraph_Fishing_Result
	 */
	struct UFishing_Result_C_ExecuteUbergraph_Fishing_Result_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83QQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
