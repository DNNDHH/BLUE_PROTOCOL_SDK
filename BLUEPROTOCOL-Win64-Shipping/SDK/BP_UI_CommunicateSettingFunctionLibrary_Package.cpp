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
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.CheckAvailableTensionTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTensionTagType                                  TargetTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::CheckAvailableTensionTag(ESBTensionTagType TargetTag, class UObject* __WorldContext, bool* IsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.CheckAvailableTensionTag");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_CheckAvailableTensionTag_Params params {};
		params.TargetTag = TargetTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAvailable != nullptr)
			*IsAvailable = params.IsAvailable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetFrameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     InWG                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::GetFrameData(int32_t InItemID, class UWidget* InWG, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetFrameData");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData_Params params {};
		params.InItemID = InItemID;
		params.InWG = InWG;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetDecoFrameChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      InFrameWG                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::SetDecoFrameChange(int32_t InItemID, class UImage* InFrameWG, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetDecoFrameChange");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange_Params params {};
		params.InItemID = InItemID;
		params.InFrameWG = InFrameWG;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.TextBoxChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UWidget*                                     InLabelComment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::TextBoxChanged(const class FText& InText, class UWidget* InLabelComment, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.TextBoxChanged");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged_Params params {};
		params.InText = InText;
		params.InLabelComment = InLabelComment;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.Init Tenstion Tag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                                                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    outTensionTagIndex                                         (Parm, OutParm)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::InitTenstionTag(class UComboBoxString* , class UObject* __WorldContext, TArray<int32_t>* outTensionTagIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.Init Tenstion Tag");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag_Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outTensionTagIndex != nullptr)
			*outTensionTagIndex = params.outTensionTagIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetClassLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InExp                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::GetClassLevel(ESBClassType InClassType, int32_t InExp, class UObject* __WorldContext, int32_t* Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetClassLevel");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel_Params params {};
		params.InClassType = InClassType;
		params.InExp = InExp;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level != nullptr)
			*Level = params.Level;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InCurrentClassType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerProfileClassListData                 InClassListData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UPlayerProfileClassList_C*                   InPlayerProfileClassList                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunicateSettingMenu_FaceBgData_C*        InCommunicateSettingMenu_FaceBgData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    InAwardIdList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::SetClassType(ESBClassType InCurrentClassType, const struct FPlayerProfileClassListData& InClassListData, class UPlayerProfileClassList_C* InPlayerProfileClassList, class UCommunicateSettingMenu_FaceBgData_C* InCommunicateSettingMenu_FaceBgData, TArray<int32_t>* InAwardIdList, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetClassType");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_SetClassType_Params params {};
		params.InCurrentClassType = InCurrentClassType;
		params.InClassListData = InClassListData;
		params.InPlayerProfileClassList = InPlayerProfileClassList;
		params.InCommunicateSettingMenu_FaceBgData = InCommunicateSettingMenu_FaceBgData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAwardIdList != nullptr)
			*InAwardIdList = params.InAwardIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InCanvasPanel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetSwitcher*                             WidgetSwitcher                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::SetBG(class UImage* Image, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel, class UTexture2DDynamic* Texture, class UWidgetSwitcher* WidgetSwitcher, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetBG");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_SetBG_Params params {};
		params.Image = Image;
		params.InScale = InScale;
		params.InPosition = InPosition;
		params.InCanvasPanel = InCanvasPanel;
		params.Texture = Texture;
		params.WidgetSwitcher = WidgetSwitcher;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetCommunicateSettingBgSettingImageSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutImageSize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CommunicateSettingFunctionLibrary_C::GetCommunicateSettingBgSettingImageSize(class UObject* __WorldContext, struct FVector2D* OutImageSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetCommunicateSettingBgSettingImageSize");
		
		UBP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImageSize != nullptr)
			*OutImageSize = params.OutImageSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UI_CommunicateSettingFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UI_CommunicateSettingFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C");
		return ptr;
	}

}


