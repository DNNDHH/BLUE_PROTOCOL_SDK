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
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseFreePassMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsCourseFreePass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketDescWindow_C::SetCourseFreePassMode(bool bInIsCourseFreePass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseFreePassMode");
		
		UAestheShop_TicketDescWindow_C_SetCourseFreePassMode_Params params {};
		params.bInIsCourseFreePass = bInIsCourseFreePass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketTokenIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTokenId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketDescWindow_C::SetTicketTokenIconTexture(int32_t InTokenId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketTokenIconTexture");
		
		UAestheShop_TicketDescWindow_C_SetTicketTokenIconTexture_Params params {};
		params.InTokenId = InTokenId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.UpdateAvailableCategoryIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBAestheShopCourseMasterData               InAestheCourseMaster                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAestheShop_TicketDescWindow_C::UpdateAvailableCategoryIcons(const struct FSBAestheShopCourseMasterData& InAestheCourseMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.UpdateAvailableCategoryIcons");
		
		UAestheShop_TicketDescWindow_C_UpdateAvailableCategoryIcons_Params params {};
		params.InAestheCourseMaster = InAestheCourseMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetHoldTicketNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InHoldTicketNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketDescWindow_C::SetHoldTicketNum(int32_t InHoldTicketNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetHoldTicketNum");
		
		UAestheShop_TicketDescWindow_C_SetHoldTicketNum_Params params {};
		params.InHoldTicketNum = InHoldTicketNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetUseTicketNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InUseTicketNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketDescWindow_C::SetUseTicketNum(int32_t InUseTicketNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetUseTicketNum");
		
		UAestheShop_TicketDescWindow_C_SetUseTicketNum_Params params {};
		params.InUseTicketNum = InUseTicketNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTicketName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAestheShop_TicketDescWindow_C::SetTicketName(const class FText& InTicketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketName");
		
		UAestheShop_TicketDescWindow_C_SetTicketName_Params params {};
		params.InTicketName = InTicketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InCourseDesc                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAestheShop_TicketDescWindow_C::SetCourseDesc(const class FText& InCourseDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseDesc");
		
		UAestheShop_TicketDescWindow_C_SetCourseDesc_Params params {};
		params.InCourseDesc = InCourseDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNameText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAestheShop_TicketDescWindow_C::SetCourseName(const class FText& InNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseName");
		
		UAestheShop_TicketDescWindow_C_SetCourseName_Params params {};
		params.InNameText = InNameText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseIconTexture
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketDescWindow_C::SetCourseIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseIconTexture");
		
		UAestheShop_TicketDescWindow_C_SetCourseIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBCharacterToken>                   InHoldTicketTokens                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAestheShop_TicketDescWindow_C::Setup(int32_t InCourseId, TArray<struct FSBCharacterToken>* InHoldTicketTokens)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.Setup");
		
		UAestheShop_TicketDescWindow_C_Setup_Params params {};
		params.InCourseId = InCourseId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InHoldTicketTokens != nullptr)
			*InHoldTicketTokens = params.InHoldTicketTokens;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketDescWindow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.PreConstruct");
		
		UAestheShop_TicketDescWindow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.ExecuteUbergraph_AestheShop_TicketDescWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketDescWindow_C::ExecuteUbergraph_AestheShop_TicketDescWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.ExecuteUbergraph_AestheShop_TicketDescWindow");
		
		UAestheShop_TicketDescWindow_C_ExecuteUbergraph_AestheShop_TicketDescWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAestheShop_TicketDescWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAestheShop_TicketDescWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C");
		return ptr;
	}

}


