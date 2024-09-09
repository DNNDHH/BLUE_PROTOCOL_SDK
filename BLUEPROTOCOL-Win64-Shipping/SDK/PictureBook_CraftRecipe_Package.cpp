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
	 * 		Name   -> Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.SetTermId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TermId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_CraftRecipe_C::SetTermId(const class FString& TermId, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.SetTermId");
		
		UPictureBook_CraftRecipe_C_SetTermId_Params params {};
		params.TermId = TermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateImagineCraftList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImagineId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELibraryImagineType                                ImagineType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_CraftRecipe_C::CreateImagineCraftList(int32_t ImagineId, ELibraryImagineType ImagineType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateImagineCraftList");
		
		UPictureBook_CraftRecipe_C_CreateImagineCraftList_Params params {};
		params.ImagineId = ImagineId;
		params.ImagineType = ImagineType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateWeaponCraftList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_CraftRecipe_C::CreateWeaponCraftList(int32_t WeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateWeaponCraftList");
		
		UPictureBook_CraftRecipe_C_CreateWeaponCraftList_Params params {};
		params.WeaponID = WeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPictureBook_CraftRecipe_C::BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UPictureBook_CraftRecipe_C_BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.ExecuteUbergraph_PictureBook_CraftRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_CraftRecipe_C::ExecuteUbergraph_PictureBook_CraftRecipe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.ExecuteUbergraph_PictureBook_CraftRecipe");
		
		UPictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPictureBook_CraftRecipe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPictureBook_CraftRecipe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PictureBook_CraftRecipe.PictureBook_CraftRecipe_C");
		return ptr;
	}

}


