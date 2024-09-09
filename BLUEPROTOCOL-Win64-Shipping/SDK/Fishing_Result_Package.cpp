/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.CheckErrorCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::CheckErrorCode(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.CheckErrorCode");
		
		UFishing_Result_C_CheckErrorCode_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.SetThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FishId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsBig                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::SetThumbnail(const class FString& FishId, bool IsBig, int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.SetThumbnail");
		
		UFishing_Result_C_SetThumbnail_Params params {};
		params.FishId = FishId;
		params.IsBig = IsBig;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.Reuslt Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Result_C::ReusltVisibility(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.Reuslt Visibility");
		
		UFishing_Result_C_ReusltVisibility_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.ShowCan'tGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Result_C::ShowCantGetItem(bool TrueIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.ShowCan'tGetItem");
		
		UFishing_Result_C_ShowCantGetItem_Params params {};
		params.TrueIsVisible = TrueIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.ShowCan'tGetFish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Result_C::ShowCantGetFish(bool TrueIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.ShowCan'tGetFish");
		
		UFishing_Result_C_ShowCantGetFish_Params params {};
		params.TrueIsVisible = TrueIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.CheckBackPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Result_C::CheckBackPack(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.CheckBackPack");
		
		UFishing_Result_C_CheckBackPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.CheckItemStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Result_C::CheckItemStorage(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.CheckItemStorage");
		
		UFishing_Result_C_CheckItemStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.SetFishPlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UploadSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FishId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              FishLength                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNewFish                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsNewRecord                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBig                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::SetFishPlate(bool UploadSuccess, int32_t ReturnCode, const class FString& FishId, const class FString& ItemName, float FishLength, int32_t ItemAmount, bool IsNewFish, bool IsNewRecord, bool IsBig, int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.SetFishPlate");
		
		UFishing_Result_C_SetFishPlate_Params params {};
		params.UploadSuccess = UploadSuccess;
		params.ReturnCode = ReturnCode;
		params.FishId = FishId;
		params.ItemName = ItemName;
		params.FishLength = FishLength;
		params.ItemAmount = ItemAmount;
		params.IsNewFish = IsNewFish;
		params.IsNewRecord = IsNewRecord;
		params.IsBig = IsBig;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.OnLoaded_B741E7294084427C7364DF8A5FD7B5FB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::OnLoaded_B741E7294084427C7364DF8A5FD7B5FB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.OnLoaded_B741E7294084427C7364DF8A5FD7B5FB");
		
		UFishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.Construct
	 * 		Flags  -> ()
	 */
	void UFishing_Result_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.Construct");
		
		UFishing_Result_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.AnimStart
	 * 		Flags  -> ()
	 */
	void UFishing_Result_C::AnimStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.AnimStart");
		
		UFishing_Result_C_AnimStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InButtonWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UFishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.InButtonWidget = InButtonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InButtonWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UFishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.InButtonWidget = InButtonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFishing_Result_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.Destruct");
		
		UFishing_Result_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.SetThumnailIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::SetThumnailIcon(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.SetThumnailIcon");
		
		UFishing_Result_C_SetThumnailIcon_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Result_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.PreConstruct");
		
		UFishing_Result_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Result.Fishing_Result_C.ExecuteUbergraph_Fishing_Result
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Result_C::ExecuteUbergraph_Fishing_Result(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Result.Fishing_Result_C.ExecuteUbergraph_Fishing_Result");
		
		UFishing_Result_C_ExecuteUbergraph_Fishing_Result_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFishing_Result_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFishing_Result_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fishing_Result.Fishing_Result_C");
		return ptr;
	}

}


