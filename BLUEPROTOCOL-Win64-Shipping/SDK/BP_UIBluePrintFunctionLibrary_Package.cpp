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
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.IsVisibleParentsAlsoSee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::IsVisibleParentsAlsoSee(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.IsVisibleParentsAlsoSee");
		
		UBP_UIBluePrintFunctionLibrary_C_IsVisibleParentsAlsoSee_Params params {};
		params.Widget = Widget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetRealGoodsThumbnail(const class FName& ID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsThumbnail");
		
		UBP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetRealGoodsIcon(const class FName& ID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsIcon");
		
		UBP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.BlancToSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::BlancToSpace(const class FText& InText, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.BlancToSpace");
		
		UBP_UIBluePrintFunctionLibrary_C_BlancToSpace_Params params {};
		params.InText = InText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HaveNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UBP_UIBluePrintFunctionLibrary_C::GetTokenUseText_Base(const class FName& TextId, int32_t TokenID, int32_t HaveNum, int32_t UseNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText_Base");
		
		UBP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base_Params params {};
		params.TextId = TextId;
		params.TokenID = TokenID;
		params.HaveNum = HaveNum;
		params.UseNum = UseNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Token1ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Token1Cost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Token2ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Token2Cost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UBP_UIBluePrintFunctionLibrary_C::GetTokenUseText2(const class FName& TextId, int32_t Token1ID, int32_t Token1Cost, int32_t Token2ID, int32_t Token2Cost, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText2");
		
		UBP_UIBluePrintFunctionLibrary_C_GetTokenUseText2_Params params {};
		params.TextId = TextId;
		params.Token1ID = Token1ID;
		params.Token1Cost = Token1Cost;
		params.Token2ID = Token2ID;
		params.Token2Cost = Token2Cost;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UBP_UIBluePrintFunctionLibrary_C::GetTokenUseText(const class FName& TextId, int32_t TokenID, int32_t UseNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText");
		
		UBP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Params params {};
		params.TextId = TextId;
		params.TokenID = TokenID;
		params.UseNum = UseNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetTextColorMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UTextBlock*>                          TextList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::SetTextColorMulti(const struct FLinearColor& Color, TArray<class UTextBlock*>* TextList, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetTextColorMulti");
		
		UBP_UIBluePrintFunctionLibrary_C_SetTextColorMulti_Params params {};
		params.Color = Color;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextList != nullptr)
			*TextList = params.TextList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetImageColorMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UImage*>                              Images                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::SetImageColorMulti(const struct FLinearColor& Color, TArray<class UImage*>* Images, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetImageColorMulti");
		
		UBP_UIBluePrintFunctionLibrary_C_SetImageColorMulti_Params params {};
		params.Color = Color;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Images != nullptr)
			*Images = params.Images;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponClassTypeByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class USBOwnItemListContainer*                     InEquipmentBag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBOwnItemListContainer*                     InCharacterStorage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       OutClassType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetWeaponClassTypeByUniqueId(const class FString& InWeaponUniqueId, class USBOwnItemListContainer* InEquipmentBag, class USBOwnItemListContainer* InCharacterStorage, class UObject* __WorldContext, bool* OutIsValid, ESBClassType* OutClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponClassTypeByUniqueId");
		
		UBP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.InEquipmentBag = InEquipmentBag;
		params.InCharacterStorage = InCharacterStorage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutClassType != nullptr)
			*OutClassType = params.OutClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEquipmentStatusDiffRequestRetCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNewEquipmentUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutRetCode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetEquipmentStatusDiffRequestRetCode(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, class UObject* __WorldContext, int32_t* OutRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEquipmentStatusDiffRequestRetCode");
		
		UBP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode_Params params {};
		params.InCurrEquipmentUniqueId = InCurrEquipmentUniqueId;
		params.InNewEquipmentUniqueId = InNewEquipmentUniqueId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRetCode != nullptr)
			*OutRetCode = params.OutRetCode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CheckWeaponDecay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBDecayedWeaponData>                InDecayedWeaponDatas                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsWeaponDecayed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::CheckWeaponDecay(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>* InDecayedWeaponDatas, class UObject* __WorldContext, bool* OutIsWeaponDecayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CheckWeaponDecay");
		
		UBP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDecayedWeaponDatas != nullptr)
			*InDecayedWeaponDatas = params.InDecayedWeaponDatas;
		if (OutIsWeaponDecayed != nullptr)
			*OutIsWeaponDecayed = params.OutIsWeaponDecayed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InImagineArtsNameId                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutArtsName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetImagineArtsName(const class FName& InImagineArtsNameId, class UObject* __WorldContext, class FString* OutArtsName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsName");
		
		UBP_UIBluePrintFunctionLibrary_C_GetImagineArtsName_Params params {};
		params.InImagineArtsNameId = InImagineArtsNameId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArtsName != nullptr)
			*OutArtsName = params.OutArtsName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetElementNameFromAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       InAttribute                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutElementName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetElementNameFromAttribute(ESBAttribute InAttribute, class UObject* __WorldContext, class FString* OutElementName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetElementNameFromAttribute");
		
		UBP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute_Params params {};
		params.InAttribute = InAttribute;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElementName != nullptr)
			*OutElementName = params.OutElementName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPassiveImagineEmptyIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InSlotType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetPassiveImagineEmptyIconTexture(ESBPlayerPassiveImagineSlotType InSlotType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPassiveImagineEmptyIconTexture");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture_Params params {};
		params.InSlotType = InSlotType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetCharaCostumePartsToNakedByDeletedCostumeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBCharaCreateComponent*                     InCharaCreateComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBDeletedCostumeData>               InDeletedCostumeDatas                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsCharaPartsSettedToNaked                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::SetCharaCostumePartsToNakedByDeletedCostumeData(class USBCharaCreateComponent* InCharaCreateComponent, TArray<struct FSBDeletedCostumeData>* InDeletedCostumeDatas, class UObject* __WorldContext, bool* OutIsCharaPartsSettedToNaked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetCharaCostumePartsToNakedByDeletedCostumeData");
		
		UBP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData_Params params {};
		params.InCharaCreateComponent = InCharaCreateComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDeletedCostumeDatas != nullptr)
			*InDeletedCostumeDatas = params.InDeletedCostumeDatas;
		if (OutIsCharaPartsSettedToNaked != nullptr)
			*OutIsCharaPartsSettedToNaked = params.OutIsCharaPartsSettedToNaked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowExpiredItemNoticeSystemMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsExpiredWeaponStickerUsedOnEquippedWeapon               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InExpiredWeaponStickerUsedWeaponId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsExpiredEquipmentIncluded                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsMessageShowed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::ShowExpiredItemNoticeSystemMessage(bool InIsExpiredWeaponStickerUsedOnEquippedWeapon, int32_t InExpiredWeaponStickerUsedWeaponId, bool InIsExpiredEquipmentIncluded, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, class UObject* __WorldContext, bool* OutIsMessageShowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowExpiredItemNoticeSystemMessage");
		
		UBP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage_Params params {};
		params.InIsExpiredWeaponStickerUsedOnEquippedWeapon = InIsExpiredWeaponStickerUsedOnEquippedWeapon;
		params.InExpiredWeaponStickerUsedWeaponId = InExpiredWeaponStickerUsedWeaponId;
		params.InIsExpiredEquipmentIncluded = InIsExpiredEquipmentIncluded;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsMessageShowed != nullptr)
			*OutIsMessageShowed = params.OutIsMessageShowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsDBFromProtectorCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDataTable*                                  OutCharaPartsDB                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetCharaPartsDBFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, class UDataTable** OutCharaPartsDB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsDBFromProtectorCategory");
		
		UBP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory_Params params {};
		params.InProtectorCategory = InProtectorCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutCharaPartsDB != nullptr)
			*OutCharaPartsDB = params.OutCharaPartsDB;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsLocationFromProtectorCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECharaPartsLocation                                OutCharaPartsLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsLocationFromProtectorCategory");
		
		UBP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory_Params params {};
		params.InProtectorCategory = InProtectorCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutCharaPartsLocation != nullptr)
			*OutCharaPartsLocation = params.OutCharaPartsLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBOwnItemListContainer*                     InOwnItemListContainer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutHaveWeaponStickerRemoveItem                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FOwnItemInfo                                OutOwnItemInfo                                             (Parm, OutParm)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerRemoveItemInfo(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, struct FOwnItemInfo* OutOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfo");
		
		UBP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo_Params params {};
		params.InOwnItemListContainer = InOwnItemListContainer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHaveWeaponStickerRemoveItem != nullptr)
			*OutHaveWeaponStickerRemoveItem = params.OutHaveWeaponStickerRemoveItem;
		if (OutOwnItemInfo != nullptr)
			*OutOwnItemInfo = params.OutOwnItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBOwnItemListContainer*                     InOwnItemListContainer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutHaveWeaponStickerRemoveItem                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutItemAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerRemoveItemAmount(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, int32_t* OutItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemAmount");
		
		UBP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount_Params params {};
		params.InOwnItemListContainer = InOwnItemListContainer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHaveWeaponStickerRemoveItem != nullptr)
			*OutHaveWeaponStickerRemoveItem = params.OutHaveWeaponStickerRemoveItem;
		if (OutItemAmount != nullptr)
			*OutItemAmount = params.OutItemAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfoByItemId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsWeaponStickerRemoveItem                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FAppearanceWeaponSticker                    OutWeaponStickerRemoveItemInfo                             (Parm, OutParm, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerRemoveItemInfoByItemId(int32_t InItemID, class UObject* __WorldContext, bool* OutIsWeaponStickerRemoveItem, struct FAppearanceWeaponSticker* OutWeaponStickerRemoveItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfoByItemId");
		
		UBP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId_Params params {};
		params.InItemID = InItemID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsWeaponStickerRemoveItem != nullptr)
			*OutIsWeaponStickerRemoveItem = params.OutIsWeaponStickerRemoveItem;
		if (OutWeaponStickerRemoveItemInfo != nullptr)
			*OutWeaponStickerRemoveItemInfo = params.OutWeaponStickerRemoveItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerInfoByItemId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsWeaponSticker                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FAppearanceWeaponSticker                    OutWeaponStickerInfo                                       (Parm, OutParm, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerInfoByItemId(int32_t InItemID, class UObject* __WorldContext, bool* OutIsWeaponSticker, struct FAppearanceWeaponSticker* OutWeaponStickerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerInfoByItemId");
		
		UBP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId_Params params {};
		params.InItemID = InItemID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsWeaponSticker != nullptr)
			*OutIsWeaponSticker = params.OutIsWeaponSticker;
		if (OutWeaponStickerInfo != nullptr)
			*OutWeaponStickerInfo = params.OutWeaponStickerInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponItemDataByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class USBOwnItemListContainer*                     InOwnItemListContainer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBWeaponItemData                           OutWeaponItemData                                          (Parm, OutParm)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetWeaponItemDataByUniqueId(const class FString& InUniqueId, class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutIsValid, struct FSBWeaponItemData* OutWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponItemDataByUniqueId");
		
		UBP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId_Params params {};
		params.InUniqueId = InUniqueId;
		params.InOwnItemListContainer = InOwnItemListContainer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutWeaponItemData != nullptr)
			*OutWeaponItemData = params.OutWeaponItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Get Gasha Demo Spawn Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetGashaDemoSpawnTransform(class UObject* __WorldContext, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Get Gasha Demo Spawn Transform");
		
		UBP_UIBluePrintFunctionLibrary_C_GetGashaDemoSpawnTransform_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineFullTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetImagineFullTexture(int32_t InId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineFullTexture");
		
		UBP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture_Params params {};
		params.InId = InId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetProtectorCategoryTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutTextID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetProtectorCategoryTextId(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, int32_t* OutTextID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetProtectorCategoryTextId");
		
		UBP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId_Params params {};
		params.InProtectorCategory = InProtectorCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTextID != nullptr)
			*OutTextID = params.OutTextID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetViewPortCalcOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetViewPortCalcOffset(class UObject* __WorldContext, struct FVector2D* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetViewPortCalcOffset");
		
		UBP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ChangeFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  InTextBlock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Infontsize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::ChangeFontSize(class UTextBlock* InTextBlock, int32_t Infontsize, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ChangeFontSize");
		
		UBP_UIBluePrintFunctionLibrary_C_ChangeFontSize_Params params {};
		params.InTextBlock = InTextBlock;
		params.Infontsize = Infontsize;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetLiquidMemoryFillingColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutFillingColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetLiquidMemoryFillingColor(int32_t InLiquidMemoryId, class UObject* __WorldContext, struct FLinearColor* OutFillingColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetLiquidMemoryFillingColor");
		
		UBP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFillingColor != nullptr)
			*OutFillingColor = params.OutFillingColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CalculateDiscountValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDiscountRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutDiscountValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::CalculateDiscountValue(int32_t InValue, float InDiscountRate, class UObject* __WorldContext, int32_t* OutDiscountValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CalculateDiscountValue");
		
		UBP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue_Params params {};
		params.InValue = InValue;
		params.InDiscountRate = InDiscountRate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDiscountValue != nullptr)
			*OutDiscountValue = params.OutDiscountValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTextureL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetTokenIconTextureL(int32_t TokenID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTextureL");
		
		UBP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL_Params params {};
		params.TokenID = TokenID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetTokenIconTexture(int32_t TokenID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTexture");
		
		UBP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture_Params params {};
		params.TokenID = TokenID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isLarge                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetImagineIconTexture(int32_t ID, bool isLarge, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineIconTexture");
		
		UBP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture_Params params {};
		params.ID = ID;
		params.isLarge = isLarge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAdventurerComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBPlayerAdventurerComponent*                PlayerAdventurerComponent                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetAdventurerComponent(class UObject* __WorldContext, class USBPlayerAdventurerComponent** PlayerAdventurerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAdventurerComponent");
		
		UBP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerAdventurerComponent != nullptr)
			*PlayerAdventurerComponent = params.PlayerAdventurerComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerGender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 OutGender                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetPlayerGender(class UObject* __WorldContext, ESBCharacterGender* OutGender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerGender");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerGender_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGender != nullptr)
			*OutGender = params.OutGender;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InImagineArtsTypeNameID                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutTypeName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetImagineArtsTypeName(const class FName& InImagineArtsTypeNameID, class UObject* __WorldContext, class FString* OutTypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsTypeName");
		
		UBP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName_Params params {};
		params.InImagineArtsTypeNameID = InImagineArtsTypeNameID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTypeName != nullptr)
			*OutTypeName = params.OutTypeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CreateDetailwithSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                InDeteailData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerProfileSummaryData                   retSummary                                                 (Parm, OutParm)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::CreateDetailwithSummary(const struct FPlayerProfileMenuDetailData& InDeteailData, class UObject* __WorldContext, struct FPlayerProfileSummaryData* retSummary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CreateDetailwithSummary");
		
		UBP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary_Params params {};
		params.InDeteailData = InDeteailData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retSummary != nullptr)
			*retSummary = params.retSummary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerPotisionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      LocationName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ZoneId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ContentId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsActiveMap                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        PositionName                                               (Parm, OutParm)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetPlayerPotisionName(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, class UObject* __WorldContext, bool* IsActiveMap, class FText* PositionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerPotisionName");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName_Params params {};
		params.Inactive = Inactive;
		params.LocationName = LocationName;
		params.ZoneId = ZoneId;
		params.ContentId = ContentId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActiveMap != nullptr)
			*IsActiveMap = params.IsActiveMap;
		if (PositionName != nullptr)
			*PositionName = params.PositionName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuideDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::HidePlaceGuideDemo(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuideDemo");
		
		UBP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuideDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InLocationName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::ShowPlaceGuideDemo(const class FName& InLocationName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuideDemo");
		
		UBP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo_Params params {};
		params.InLocationName = InLocationName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTextWindowDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBTextWindowBase*                           TextWindowDemo                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetTextWindowDemo(class UObject* __WorldContext, class USBTextWindowBase** TextWindowDemo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTextWindowDemo");
		
		UBP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextWindowDemo != nullptr)
			*TextWindowDemo = params.TextWindowDemo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CloseTextWindowDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::CloseTextWindowDemo(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CloseTextWindowDemo");
		
		UBP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::HidePlaceGuide(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuide");
		
		UBP_UIBluePrintFunctionLibrary_C_HidePlaceGuide_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LocationId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::ShowPlaceGuide(const class FName& LocationId, int32_t Priority, class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuide");
		
		UBP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide_Params params {};
		params.LocationId = LocationId;
		params.Priority = Priority;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAttackParamUIColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetAttackParamUIColor(class UObject* __WorldContext, struct FLinearColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAttackParamUIColor");
		
		UBP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Find Map Spawn Location for Item Detail Capture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::FindMapSpawnLocationforItemDetailCapture(const class FString& InMapName, class UObject* __WorldContext, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Find Map Spawn Location for Item Detail Capture");
		
		UBP_UIBluePrintFunctionLibrary_C_FindMapSpawnLocationforItemDetailCapture_Params params {};
		params.InMapName = InMapName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetActivityCategoryIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBActivityCategory                                InActivityCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetActivityCategoryIcon(ESBActivityCategory InActivityCategory, class UObject* __WorldContext, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetActivityCategoryIcon");
		
		UBP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon_Params params {};
		params.InActivityCategory = InActivityCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetClassTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutIconImage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetClassTypeIcon(ESBClassType InClassType, class UObject* __WorldContext, class UTexture2D** OutIconImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetClassTypeIcon");
		
		UBP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon_Params params {};
		params.InClassType = InClassType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIconImage != nullptr)
			*OutIconImage = params.OutIconImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       ClassType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetPlayerClassType(class UObject* __WorldContext, ESBClassType* ClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerClassType");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerClassType_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassType != nullptr)
			*ClassType = params.ClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEmotionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        IconName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  IconTexture                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetEmotionIcon(const class FName& IconName, class UObject* __WorldContext, class UTexture2D** IconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEmotionIcon");
		
		UBP_UIBluePrintFunctionLibrary_C_GetEmotionIcon_Params params {};
		params.IconName = IconName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconTexture != nullptr)
			*IconTexture = params.IconTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRewardItemIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InGender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LargeIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemCategory                                      ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UnidentifiedIconName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetRewardItemIconTexture(int32_t InItemID, ESBRewardItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, const class FName& UnidentifiedIconName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRewardItemIconTexture");
		
		UBP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture_Params params {};
		params.InItemID = InItemID;
		params.InItemType = InItemType;
		params.InGender = InGender;
		params.LargeIcon = LargeIcon;
		params.bUnidentified = bUnidentified;
		params.ItemCategory = ItemCategory;
		params.UnidentifiedIconName = UnidentifiedIconName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetItemIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InGender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LargeIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemCategory                                      ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UnidentifiedIconName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetItemIconTexture(int32_t InItemID, EItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, const class FName& UnidentifiedIconName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetItemIconTexture");
		
		UBP_UIBluePrintFunctionLibrary_C_GetItemIconTexture_Params params {};
		params.InItemID = InItemID;
		params.InItemType = InItemType;
		params.InGender = InGender;
		params.LargeIcon = LargeIcon;
		params.bUnidentified = bUnidentified;
		params.ItemCategory = ItemCategory;
		params.UnidentifiedIconName = UnidentifiedIconName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetHostilityColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHostility                                       Hostility                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetHostilityColor(ESBHostility Hostility, class UObject* __WorldContext, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetHostilityColor");
		
		UBP_UIBluePrintFunctionLibrary_C_GetHostilityColor_Params params {};
		params.Hostility = Hostility;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTeamColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TeamNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::GetTeamColor(int32_t TeamNumber, class UObject* __WorldContext, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTeamColor");
		
		UBP_UIBluePrintFunctionLibrary_C_GetTeamColor_Params params {};
		params.TeamNumber = TeamNumber;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Create Quest Reward Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardInfo                                 InRewardInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bInSelectRewardSelectable                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEnableHiddenReward                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIBluePrintFunctionLibrary_C::CreateQuestRewardIcon(const struct FRewardInfo& InRewardInfo, bool bInSelectRewardSelectable, bool bEnableHiddenReward, class UObject* __WorldContext, class UUserWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Create Quest Reward Icon");
		
		UBP_UIBluePrintFunctionLibrary_C_CreateQuestRewardIcon_Params params {};
		params.InRewardInfo = InRewardInfo;
		params.bInSelectRewardSelectable = bInSelectRewardSelectable;
		params.bEnableHiddenReward = bEnableHiddenReward;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_UIBluePrintFunctionLibrary_C::GetPlayerCurrentStamina(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentStamina");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_UIBluePrintFunctionLibrary_C::GetPlayerMaxStamina(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxStamina");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentMp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_UIBluePrintFunctionLibrary_C::GetPlayerCurrentMp(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentMp");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxMp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_UIBluePrintFunctionLibrary_C::GetPlayerMaxMp(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxMp");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentHp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_UIBluePrintFunctionLibrary_C::GetPlayerCurrentHp(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentHp");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxHp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_UIBluePrintFunctionLibrary_C::GetPlayerMaxHp(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxHp");
		
		UBP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UIBluePrintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UIBluePrintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C");
		return ptr;
	}

}


