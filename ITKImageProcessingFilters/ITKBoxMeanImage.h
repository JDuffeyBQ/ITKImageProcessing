// File automatically generated

/*
 * Your License or Copyright can go here
 */

#pragma once

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winconsistent-missing-override"
#endif

#include "ITKImageProcessingBase.h"

#include "SIMPLib/Common/SIMPLibSetGetMacros.h"
#include "SIMPLib/SIMPLib.h"

// Auto includes
#include <SIMPLib/FilterParameters/FloatVec3FilterParameter.h>
#include <itkBoxMeanImageFilter.h>

#include "ITKImageProcessing/ITKImageProcessingDLLExport.h"

/**
 * @brief The ITKBoxMeanImage class. See [Filter documentation](@ref ITKBoxMeanImage) for details.
 */
class ITKImageProcessing_EXPORT ITKBoxMeanImage : public ITKImageProcessingBase
{
  Q_OBJECT
  PYB11_CREATE_BINDINGS(ITKBoxMeanImage SUPERCLASS ITKImageProcessingBase)
  PYB11_PROPERTY(FloatVec3_t Radius READ getRadius WRITE setRadius)

public:
  SIMPL_SHARED_POINTERS(ITKBoxMeanImage)
  SIMPL_FILTER_NEW_MACRO(ITKBoxMeanImage)
  SIMPL_TYPE_MACRO_SUPER_OVERRIDE(ITKBoxMeanImage, AbstractFilter)

  ~ITKBoxMeanImage() override;

  SIMPL_FILTER_PARAMETER(FloatVec3_t, Radius)
  Q_PROPERTY(FloatVec3_t Radius READ getRadius WRITE setRadius)


  /**
   * @brief newFilterInstance Reimplemented from @see AbstractFilter class
   */
  AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters) const override;

  /**
   * @brief getHumanLabel Reimplemented from @see AbstractFilter class
   */
  const QString getHumanLabel() const override;

  /**
   * @brief getSubGroupName Reimplemented from @see AbstractFilter class
   */
  const QString getSubGroupName() const override;

  /**
   * @brief getUuid Return the unique identifier for this filter.
   * @return A QUuid object.
   */
  const QUuid getUuid() override;

  /**
   * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
   */
  void setupFilterParameters() override;

  /**
   * @brief readFilterParameters Reimplemented from @see AbstractFilter class
   */
  void readFilterParameters(AbstractFilterParametersReader* reader, int index) override;

protected:
  ITKBoxMeanImage();

  /**
   * @brief dataCheckInternal overloads dataCheckInternal in ITKImageBase and calls templated dataCheck
   */
  void virtual dataCheckInternal() override;

  /**
   * @brief dataCheck Checks for the appropriate parameter values and availability of arrays
   */
  template <typename InputImageType, typename OutputImageType, unsigned int Dimension> void dataCheck();

  /**
  * @brief filterInternal overloads filterInternal in ITKImageBase and calls templated filter
  */
  void virtual filterInternal() override;

  /**
  * @brief Applies the filter
  */
  template <typename InputImageType, typename OutputImageType, unsigned int Dimension> void filter();

private:
  ITKBoxMeanImage(const ITKBoxMeanImage&) = delete;    // Copy Constructor Not Implemented
  ITKBoxMeanImage(ITKBoxMeanImage&&) = delete;         // Move Constructor Not Implemented
  ITKBoxMeanImage& operator=(const ITKBoxMeanImage&) = delete; // Copy Assignment Not Implemented
  ITKBoxMeanImage& operator=(ITKBoxMeanImage&&) = delete;      // Move Assignment Not Implemented
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

