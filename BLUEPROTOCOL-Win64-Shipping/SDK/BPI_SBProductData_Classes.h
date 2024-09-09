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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_SBProductData.BPI_SBProductData_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_SBProductData_C : public UInterface
	{
	public:
		void GetItemBoxDepthIndex(int32_t* Index);
		void IsItemBox(bool* bReturnValue);
		void GetIconItemData(class UBP_SBProductItemData_C** ItemData);
		void IsCostumeSet(bool* bReturnValue);
		void GetDetailType(E_SBProductDetailType* DetailType);
		void SetSelectedData(class UBP_SBProductItemData_C* Data);
		void GetSelectedData(class UBP_SBProductItemData_C** Data);
		TArray<class UBP_SBProductItemData_C*> GetItemDataList();
		float GetScrollOffset();
		void SetScrollOffset(float Value);
		void GetParentData(bool* bIsValid);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
