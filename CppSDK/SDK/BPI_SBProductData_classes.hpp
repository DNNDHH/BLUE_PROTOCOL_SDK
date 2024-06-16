#pragma once

 

// Package: BPI_SBProductData

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_SBProductDetailType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_SBProductData.BPI_SBProductData_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_SBProductData_C final : public IInterface
{
public:
	void SetScrollOffset(float Value);
	void GetSelectedData(class UBP_SBProductItemData_C** Data);
	void SetSelectedData(class UBP_SBProductItemData_C* Data);
	void GetDetailType(E_SBProductDetailType* DetailType);
	void IsCostumeSet(bool* bReturnValue);
	void GetIconItemData(class UBP_SBProductItemData_C** ItemData);
	void IsItemBox(bool* bReturnValue);
	void GetItemBoxDepthIndex(int32* Param_Index);

	void GetParentData(bool* bIsValid, TScriptInterface<class IBPI_SBProductData_C>* ParentData) const;
	float GetScrollOffset() const;
	TArray<class UBP_SBProductItemData_C*> GetItemDataList() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_SBProductData_C">();
	}
	static class IBPI_SBProductData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_SBProductData_C>();
	}
};
static_assert(alignof(IBPI_SBProductData_C) == 0x000008, "Wrong alignment on IBPI_SBProductData_C");
static_assert(sizeof(IBPI_SBProductData_C) == 0x000028, "Wrong size on IBPI_SBProductData_C");

}

