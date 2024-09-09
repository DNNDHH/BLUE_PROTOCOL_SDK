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
	 * 		Name   -> Function CostumeIcon.CostumeIcon_C.SetColorIconBage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCostumeData                                CostumeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCostumeIcon_C::SetColorIconBage(const struct FCostumeData& CostumeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CostumeIcon.CostumeIcon_C.SetColorIconBage");
		
		UCostumeIcon_C_SetColorIconBage_Params params {};
		params.CostumeData = CostumeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CostumeIcon.CostumeIcon_C.SetCostumeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FCostumeData                                CostumeData                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCostumeIcon_C::SetCostumeData(int32_t ItemIndex, const class FString& UniqueId, const struct FCostumeData& CostumeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CostumeIcon.CostumeIcon_C.SetCostumeData");
		
		UCostumeIcon_C_SetCostumeData_Params params {};
		params.ItemIndex = ItemIndex;
		params.UniqueId = UniqueId;
		params.CostumeData = CostumeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CostumeIcon.CostumeIcon_C.SetMountImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MountImagineId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCostumeIcon_C::SetMountImagineData(int32_t InItemIndex, const class FString& InUniqueId, const class FString& MountImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CostumeIcon.CostumeIcon_C.SetMountImagineData");
		
		UCostumeIcon_C_SetMountImagineData_Params params {};
		params.InItemIndex = InItemIndex;
		params.InUniqueId = InUniqueId;
		params.MountImagineId = MountImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CostumeIcon.CostumeIcon_C.BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCostumeIcon_C::BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CostumeIcon.CostumeIcon_C.BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UCostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CostumeIcon.CostumeIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCostumeIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CostumeIcon.CostumeIcon_C.PreConstruct");
		
		UCostumeIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CostumeIcon.CostumeIcon_C.ExecuteUbergraph_CostumeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCostumeIcon_C::ExecuteUbergraph_CostumeIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CostumeIcon.CostumeIcon_C.ExecuteUbergraph_CostumeIcon");
		
		UCostumeIcon_C_ExecuteUbergraph_CostumeIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CostumeIcon.CostumeIcon_C.OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCostumeIcon_C::OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CostumeIcon.CostumeIcon_C.OnClickedCostumeIcon__DelegateSignature");
		
		UCostumeIcon_C_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCostumeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCostumeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CostumeIcon.CostumeIcon_C");
		return ptr;
	}

}


